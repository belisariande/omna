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
///   File: cev2md5main.hpp
///
/// Author: $author$
///   Date: 4/9/2021
///////////////////////////////////////////////////////////////////////
#ifndef _CEV2MD5MAIN_HPP
#define _CEV2MD5MAIN_HPP

#include "cev2hashmain.hpp"
#include "ccevmd5allocator.hpp"

///////////////////////////////////////////////////////////////////////
/// class CEv2MD5Main
///////////////////////////////////////////////////////////////////////
class CEv2MD5Main: public CEv2HashMain {
public:
    typedef CEv2HashMain CExtends;
    typedef CEv2MD5Main CDerives;

    ///////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    ///////////////////////////////////////////////////////////////////////
    CEv2MD5Main(): m_hash(0) {
    }
    virtual ~CEv2MD5Main() {
        EvHash *acquired = 0;
        if ((acquired = m_hash)) {
            ReleaseHash(*acquired);
        }
    }
private:
    CEv2MD5Main(const CEv2MD5Main& copy) {
    }
public:

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int Test(int argc, const char** argv, const char** env) {
        static const char* test[]={
            "",
            "abc",
            "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
            NULL,
	    };
        static const char* ret[]={
            "d41d8cd98f00b204e9800998ecf8427e",
            "900150983cd24fb0d6963f7d28e17f72",
            "d174ab98d277d9f5a5611c2c9f419d9f",
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
        acquired = (m_hash = m_crypto.AcquireMD5(error));
        return acquired;
    }
    virtual EvError ReleaseHash(EvHash& acquired) {
        EvError error = EV_ERROR_FAILED;
        if ((&acquired == (EvHash*)(m_hash)))
        if (!(error = m_crypto.ReleaseMD5(*m_hash)))
            m_hash = 0;
        return error;
    }
    virtual ULONG GetHashSize() const {
        ULONG value = EvMD5::EV_HASH_SIZE;
        return value;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    EvMD5* m_hash;    
    CCEvMD5Allocator m_crypto;
}; /// class CEv2MD5Main

#endif /// ndef _CEV2MD5MAIN_HPP 