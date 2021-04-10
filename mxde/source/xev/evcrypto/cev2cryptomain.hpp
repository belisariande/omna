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
///   File: cev2cryptomain.hpp
///
/// Author: $author$
///   Date: 4/9/2021
///////////////////////////////////////////////////////////////////////
#ifndef _CEV2CRYPTOMAIN_HPP
#define _CEV2CRYPTOMAIN_HPP

#include "cevmain.hpp"
#include "cevcrypto.hpp"
#include "cevmsticks.hpp"

///////////////////////////////////////////////////////////////////////
/// class CEv2CryptoMain
///////////////////////////////////////////////////////////////////////
class CEv2CryptoMain: public CEvMain {
public:
    typedef CEvMain CExtends;
    typedef CEv2CryptoMain CDerives;

    ///////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    ///////////////////////////////////////////////////////////////////////
    CEv2CryptoMain() {
        m_theMain = this;
    }
    virtual ~CEv2CryptoMain() {
        if (this == m_theMain)
            m_theMain = m_oldMain;
    }
private:
    CEv2CryptoMain(const CEv2CryptoMain& copy) {
    }
public:

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int Run(int argc, const char** argv, const char** env) {
        int err = 0;

        if (GetDidMain())
            return err;

        err = Help(argc, argv, env);
        return err;
    }
    virtual int Test(int argc, const char** argv, const char** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int HashFile(const char* filename) {
        int err = 0;
        return err;
    }
    virtual int MegaByteFile(const char* filename) {
        int err = 0, i = 0;
        EvError error = EV_ERROR_NONE;
        CEvCharFile f;

        SetDidMain();
        if ((error = f.Open(filename, EVFILE_MODE_READ_BINARY))) {

            if (!(error = f.Open(filename, EVFILE_MODE_WRITE_BINARY))) {
                for (i=0; i<sizeof(m_b); i++) {
                    m_b[i] = i;
                }
                for (i=0; i<sizeof(m_b); i++) {
                    f.Write(m_b, sizeof(m_b));
                }
                f.Close();
            }
        } else {
            DBE("() file \"%s\" already exists\n", filename);
            f.Close();
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual EvHash* AcquireHash(EvError& error) {
        EvHash* acquired = 0;
        error = EV_ERROR_NOT_IMPLEMENTED;
        return acquired;
    }
    virtual EvError ReleaseHash(EvHash& acquired) {
        EvError error = EV_ERROR_NOT_IMPLEMENTED;
        return error;
    }
    virtual ULONG GetHashSize() const {
        ULONG value = 0;
        return value;
    }

    ///////////////////////////////////////////////////////////////////////
    virtual EvCipher* AcquireCipher(EvError& error) {
        EvCipher* acquired = 0;
        error = EV_ERROR_NOT_IMPLEMENTED;
        return acquired;
    }
    virtual EvError ReleaseCipher(EvCipher& acquired) {
        EvError error = EV_ERROR_NOT_IMPLEMENTED;
        return error;
    }
    virtual BYTE* GetCipherKey(ULONG& size) const {
        BYTE* value = 0;
        size = 0;
        return value;
    }
    virtual BYTE* GetCipherIV(ULONG& size) const {
        BYTE* value = 0;
        size = 0;
        return value;
    }
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    static CEv2CryptoMain* m_theMain;
    CEv2CryptoMain* m_oldMain;
    CEvMillisecondTicks m_msTicks;
    char m_b[1024];
}; /// class CEv2CryptoMain

#endif /// ndef _CEV2CRYPTOMAIN_HPP 