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
///   File: main.hpp
///
/// Author: $author$
///   Date: 4/24/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_DLIBRARY_APPLE_OSX_MAIN_HPP
#define XOS_DLIBRARY_APPLE_OSX_MAIN_HPP

#include "xos/dlibrary/apple/osx/symbol.hpp"
#include "xos/dlibrary/main.hpp"

namespace xos {
namespace dlibrary {
namespace apple {
namespace osx {

/// class maint
template <class TExtends = dlibrary::extended::main, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives; 
    
    /// constructors / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
    }
}; /// class maint
typedef maint<> main;

} /// namespace osx
} /// namespace apple
} /// namespace dlibrary
} /// namespace xos

#endif /// XOS_DLIBRARY_APPLE_OSX_MAIN_HPP
