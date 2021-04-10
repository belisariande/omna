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
///   File: evsha1allocator.hpp
///
/// Author: $author$
///   Date: 4/9/2021
///////////////////////////////////////////////////////////////////////
#ifndef _EVSHA1ALLOCATOR_HPP
#define _EVSHA1ALLOCATOR_HPP

#include "evbase.hpp"
#include "evsha1.hpp"

///////////////////////////////////////////////////////////////////////
/// class EvSHA1Allocator
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvSHA1Allocator: virtual public EvBase {
public:
    typedef EvBase CImplements;
    typedef EvSHA1Allocator CDerives;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual EvSHA1* AcquireSHA1(EvError& error) = 0;
    virtual EvError ReleaseSHA1(EvSHA1& acquired) = 0;
    virtual EvError ReleaseAllSHA1s() = 0;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    static EvSHA1Allocator* theAllocator() {
        return m_theAllocator;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    static EvSHA1Allocator* m_theAllocator;
}; /// class EvSHA1Allocator

#endif /// ndef _EVSHA1ALLOCATOR_HPP 