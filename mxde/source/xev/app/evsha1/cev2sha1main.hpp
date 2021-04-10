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
///   File: cev2sha1main.hpp
///
/// Author: $author$
///   Date: 4/9/2021
///////////////////////////////////////////////////////////////////////
#ifndef _CEV2SHA1MAIN_HPP
#define _CEV2SHA1MAIN_HPP

#include "cev2hashmain.hpp"
#include "ccevsha1allocator.hpp"

///////////////////////////////////////////////////////////////////////
/// class CEv2SHA1Main
///////////////////////////////////////////////////////////////////////
class CEv2SHA1Main: public CEv2HashMain {
public:
    typedef CEv2HashMain CExtends;
    typedef CEv2SHA1Main CDerives;

    ///////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    ///////////////////////////////////////////////////////////////////////
    CEv2SHA1Main(): m_hash(0) {
    }
    virtual ~CEv2SHA1Main() {
        EvHash *acquired = 0;
        if ((acquired = m_hash)) {
            ReleaseHash(*acquired);
        }
    }
private:
    CEv2SHA1Main(const CEv2SHA1Main& copy) {
    }
public:
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int Test(int argc, const char** argv, const char** env) {
        static const char* test[]={
            "",
            "abc",
            "abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq",
            NULL,
	    };
        static const char* ret[]={
            "da39a3ee5e6b4b0d3255bfef95601890afd80709",
            "a9993e364706816aba3e25717850c26c9cd0d89d",
            "84983e441c3bd26ebaae4aa1f95129e5e54670f1",
            NULL,
	    };
        int err = TestHash(test, ret);
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual EvHash* AcquireHash(EvError& error) {
        EvHash* acquired = 0;        
        error = EV_ERROR_FAILED;
        acquired = (m_hash = m_crypto.AcquireSHA1(error));
        return acquired;
    }
    virtual EvError ReleaseHash(EvHash& acquired) {
        EvError error = EV_ERROR_FAILED;
        if ((&acquired == (EvHash*)(m_hash)))
        if (!(error = m_crypto.ReleaseSHA1(*m_hash)))
            m_hash = 0;
        return error;
    }
    virtual ULONG GetHashSize() const {
        ULONG value = EvSHA1::EV_HASH_SIZE;
        return value;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    EvSHA1* m_hash;    
    CCEvSHA1Allocator m_crypto;
}; /// class CEv2SHA1Main

#endif /// ndef _CEV2SHA1MAIN_HPP 