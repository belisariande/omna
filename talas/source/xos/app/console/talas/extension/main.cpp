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
///   File: main.cpp
///
/// Author: $author$
///   Date: 4/26/2021
///////////////////////////////////////////////////////////////////////
#include "xos/app/console/talas/extension/main.hpp"
#include "xos/dlibrary/os/main.cpp"

#if !defined(XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_INSTANCE)
///#define XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_INSTANCE
#endif /// !defined(XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_INSTANCE)

namespace xos {
namespace app {
namespace console {
namespace talas {
namespace extension {

///  Class: maint
#if defined(XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_INSTANCE)
static main the_main;
#endif /// defined(XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_INSTANCE)

} /// namespace extension
} /// namespace talas
} /// namespace console
} /// namespace app
} /// namespace xos

/// ...ACQUIRE / ...RELEASE
::xos::app::console::talas::extension::main* 
XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_ACQUIRE() {
    ::xos::app::console::talas::extension::main* main = 0;
    main = ::xos::app::console::talas::extension::main::get_the_main();
    return main;
}
void XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_RELEASE
(::xos::app::console::talas::extension::main* main) {
}
