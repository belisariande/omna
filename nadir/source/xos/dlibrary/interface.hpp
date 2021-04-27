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
///   File: interface.hpp
///
/// Author: $author$
///   Date: 4/23/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_DLIBRARY_INTERFACE_HPP
#define XOS_DLIBRARY_INTERFACE_HPP

#include "xos/base/opened.hpp"
#include "xos/base/string.hpp"

namespace xos {
namespace dlibrary {

/// class interfacet
template <class TImplements = opener>
class exported interfacet: virtual public TImplements {
public:
    typedef TImplements implements;
    typedef interfacet derives; 
    
    /// open / close
    virtual bool open(const string& filename, bool resolve=true, bool global=false) {
        return open(filename.c_str(), resolve, global);
    }
    virtual bool open(const char* filename, bool resolve=true, bool global=false) {
        return false;
    }
    virtual bool close() {
        return false;
    }

    /// get_address
    virtual void* get_address(const string& symbol) const {
        return get_address(symbol.c_str());
    }
    virtual void* get_address(const char* symbol) const {
        return 0;
    }
}; /// class interfacet
typedef interfacet<> interface;

} /// namespace dlibrary
} /// namespace xos

#endif /// XOS_DLIBRARY_INTERFACE_HPP
