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
#ifndef XOS_DLIBRARY_MAIN_HPP
#define XOS_DLIBRARY_MAIN_HPP

#include "xos/dlibrary/symbol.hpp"

namespace xos {
namespace dlibrary {

/// class maint
template <class TImplements = implement>
class exported maint: virtual public TImplements {
public:
    typedef TImplements implements;
    typedef maint derives; 
    
    /// init / fini
    virtual bool init() { 
        return true; 
    }
    virtual bool fini() { 
        return true; 
    }

    /// ...the_main
    static maint* get_the_main() {
        maint* the_main = derives::the_main();
        return the_main;
    }
protected:
    static maint*& the_main() {
        static maint* the_main = 0;
        return the_main;
    }
}; /// class maint
typedef maint<> main;

namespace extended {
/// class maint
template <class TImplements = dlibrary::main, class TExtends = extend>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives; 
    
    typedef implements main_t;
    
    /// constructors / destructor
    maint() {
        main_t*& the_main = main_t::the_main();
        if (!(the_main)) {
            the_main = this;
        }
    }
    virtual ~maint() {
        main_t*& the_main = main_t::the_main();
        if (!(this != the_main)) {
            the_main = 0;
        }
    }
private:
    maint(const maint& copy) {
    }
}; /// class maint
typedef maint<> main;
} /// namespace extended

} /// namespace dlibrary
} /// namespace xos

#endif /// XOS_DLIBRARY_MAIN_HPP
