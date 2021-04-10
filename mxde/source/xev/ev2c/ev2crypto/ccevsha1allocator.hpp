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
///   File: ccevsha1allocator.hpp
///
/// Author: $author$
///   Date: 4/9/2021
///////////////////////////////////////////////////////////////////////
#ifndef _CCEVSHA1ALLOCATOR_HPP
#define _CCEVSHA1ALLOCATOR_HPP

#include "cevsha1allocator.hpp"
#include "ccevsha1.hpp"

///////////////////////////////////////////////////////////////////////
/// class CCEvSHA1Allocator
///////////////////////////////////////////////////////////////////////
class CCEvSHA1Allocator: public CEvSHA1Allocator {
public:
    typedef CEvSHA1Allocator CExtends;
    typedef CCEvSHA1Allocator CDerives;

    ///////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    ///////////////////////////////////////////////////////////////////////
    CCEvSHA1Allocator() {
    }
    virtual ~CCEvSHA1Allocator() {
    }
private:
    CCEvSHA1Allocator(const CCEvSHA1Allocator& copy) {
    }
public:

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual EvSHA1* AcquireSHA1(EvError& error) {
        EvSHA1* acquired = new CCEvSHA1;
        error = 0;
        return acquired;
    }
    virtual EvError ReleaseSHA1(EvSHA1& acquired) {
        EvError error = 0;
        delete &acquired;
        return error;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
}; /// class CCEvSHA1Allocator

#endif /// ndef _CCEVSHA1ALLOCATOR_HPP 