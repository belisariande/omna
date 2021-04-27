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
///   Date: 4/26/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_HPP
#define XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_HPP

#include "xos/dlibrary/main.hpp"
#include "xos/base/logger.hpp"

#define XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_ACQUIRE xos_app_console_talas_extension_acquire
#define XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_ACQUIRE_TYPE DLIBRARY_TYPE(XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_ACQUIRE)
#define XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_ACQUIRE_SYMBOL DLIBRARY_SYMBOL(XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_ACQUIRE)

#define XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_RELEASE xos_app_console_talas_extension_release
#define XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_RELEASE_TYPE DLIBRARY_TYPE(XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_RELEASE)
#define XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_RELEASE_SYMBOL DLIBRARY_SYMBOL(XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_RELEASE)

namespace xos {
namespace app {
namespace console {
namespace talas {
namespace extension {

/// class maint
template <class TExtends = dlibrary::extended::main, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives; 
    
    /// constructors / destructor
    maint() {
        maint*& the_main = maint::the_main();
        if (!(the_main)) {
            the_main = this;
        }
    }
    virtual ~maint() {
        maint*& the_main = maint::the_main();
        if (!(this != the_main)) {
            the_main = 0;
        }
    }
private:
    maint(const maint& copy) {
    }
public:

    /// init / fini
    virtual bool init() { 
        ERR_LOG_DEBUG("...return true");
        return true; 
    }
    virtual bool fini() { 
        ERR_LOG_DEBUG("...return true");
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

} /// namespace extension
} /// namespace talas
} /// namespace console
} /// namespace app
} /// namespace xos

extern "C" {

/// ...ACQUIRE / ...RELEASE
typedef exported ::xos::app::console::talas::extension::main* 
XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_ACQUIRE_TYPE();

typedef exported void XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_RELEASE_TYPE
(::xos::app::console::talas::extension::main* main);

extern exported ::xos::app::console::talas::extension::main* 
XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_ACQUIRE();

extern exported void XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_RELEASE
(::xos::app::console::talas::extension::main* main);

} /// extern "C"

#endif /// XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_HPP
