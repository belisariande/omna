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
///   File: cevsha1allocator.hpp
///
/// Author: $author$
///   Date: 4/9/2021
///////////////////////////////////////////////////////////////////////
#ifndef _CEVSHA1ALLOCATOR_HPP
#define _CEVSHA1ALLOCATOR_HPP

#include "evsha1allocator.hpp"
#include "cevbase.hpp"

///////////////////////////////////////////////////////////////////////
/// class CEvSHA1Allocator
///////////////////////////////////////////////////////////////////////
class CEvSHA1Allocator: virtual public EvSHA1Allocator, public CEvBase {
public:
    typedef EvSHA1Allocator CImplements;
    typedef CEvBase CExtends;
    typedef CEvSHA1Allocator CDerives;

    ///////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    ///////////////////////////////////////////////////////////////////////
    CEvSHA1Allocator(): m_theOldAllocator(m_theAllocator) {
        m_theAllocator = this;
    }
    virtual ~CEvSHA1Allocator() {
        if ((m_theAllocator == this)) {
            m_theAllocator = m_theOldAllocator;
        }
    }
private:
    CEvSHA1Allocator(const CEvSHA1Allocator& copy) {
    }
public:

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual EvSHA1* AcquireSHA1(EvError& error) {
        EvSHA1* acquired = 0;
        error = 0;
        return acquired;
    }
    virtual EvError ReleaseSHA1(EvSHA1& acquired) {
        EvError error = 0;
        return error;
    }
    virtual EvError ReleaseAllSHA1s() {
        EvError error = 0;
        return error;
    }
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    EvSHA1Allocator* m_theOldAllocator;
}; /// class CEvSHA1Allocator

#endif /// ndef _CEVSHA1ALLOCATOR_HPP 