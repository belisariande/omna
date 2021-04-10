///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: cev2hashmain.hpp
///
/// Author: $author$
///   Date: 4/9/2021
///////////////////////////////////////////////////////////////////////
#ifndef _CEV2HASHMAIN_HPP
#define _CEV2HASHMAIN_HPP

#include "cev2cryptomain.hpp"
#include "cevchar2xwriter.hpp"
#include "cevhashedfile.hpp"

///////////////////////////////////////////////////////////////////////
/// class CEv2HashMain
///////////////////////////////////////////////////////////////////////
class CEv2HashMain: public CEv2CryptoMain {
public:
    typedef CEv2CryptoMain CExtends;
    typedef CEv2HashMain CDerives;

    ///////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    ///////////////////////////////////////////////////////////////////////
    CEv2HashMain() {
        m_theMain = this;
    }
    virtual ~CEv2HashMain() {
        if (this == m_theMain)
            m_theMain = m_oldMain;
    }
private:
    CEv2HashMain(const CEv2HashMain& copy) {
    }
public:

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int TestHash(const char* test[], const char* ret[]) {
        CEvChar2XWriter writer(m_stdOut);
        int err = 0;
        EvError error = EV_ERROR_NONE;
        EvHash* hash = 0;

        if ((hash = AcquireHash(error))) {
            for (int i=0; test[i]; i++) {
                if (0 <= (hash->Initialize())) {
                    if (0 <= (hash->Hash((const BYTE*)(test[i])))) {
                        if (0 <= (hash->Finalize(m_out, sizeof(m_out)))) {
                            writer.WriteLine((const char*)m_out, GetHashSize());
                        }
                    }
                }
            }
            ReleaseHash(*hash);
        }
        return err;
    }
    virtual int HashFile(const char* filename) {
        CEvChar2XWriter writer(m_stdOut);
        int err = 0;
        LONG count = 0;
        DWORD msElapsed = 0;
        EvError error = EV_ERROR_NONE;
        EvHash* hash = 0;

        SetDidMain();
        if ((hash = AcquireHash(error))) {
            CEvHashedFile file(*hash);

            msElapsed = m_msTicks.GetCurrentTicks();
            if (0 <= (count = file.Hash(m_out, sizeof(m_out), filename))) {
                msElapsed = m_msTicks.GetElapsedTicks(msElapsed);
                m_stdOut.WriteUnsigned(file.m_hashedBytes);
                m_stdOut.Write(" bytes in ");
                m_stdOut.WriteUnsigned(msElapsed);
                m_stdOut.Write(" ms: ");
                writer.WriteLine((const char*)m_out, GetHashSize());
            }
            ReleaseHash(*hash);
        }
        return err;
    }
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    static CEv2HashMain* theMain() {
        return m_theMain;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    static CEv2HashMain* m_theMain;
    CEv2HashMain* m_oldMain;
    BYTE m_out[EvSHA1::EV_HASH_SIZE*1024];
}; /// class CEv2HashMain

#endif /// ndef _CEV2HASHMAIN_HPP 