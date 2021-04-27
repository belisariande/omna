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
///   Date: 4/24/2021
///////////////////////////////////////////////////////////////////////
#include "xos/dlibrary/apple/osx/main.hpp"
#include "xos/base/logger.hpp"

#if !defined(XOS_DLIBRARY_APPLE_OSX_MAIN_INSTANCE)
///#define XOS_DLIBRARY_APPLE_OSX_MAIN_INSTANCE
#endif /// !defined(XOS_DLIBRARY_APPLE_OSX_MAIN_INSTANCE)

namespace xos {
namespace dlibrary {
namespace apple {
namespace osx {

///  Class: maint
#if defined(XOS_DLIBRARY_APPLE_OSX_MAIN_INSTANCE)
static main the_main;
#endif /// defined(XOS_DLIBRARY_APPLE_OSX_MAIN_INSTANCE)

} /// namespace osx
} /// namespace apple
} /// namespace dlibrary
} /// namespace xos

void DLIBRARY_INIT _init() {
    ::xos::dlibrary::main* the_main = 0;

    ERR_LOG_DEBUG("::xos::dlibrary::main::get_the_main()...");
    if ((the_main = ::xos::dlibrary::main::get_the_main())) {

        ERR_LOG_DEBUG("the_main->init()...");
        if (!(the_main->init())) {
            ERR_LOG_ERROR("...failed on the_main->init()");
        }
    } else {
        ERR_LOG_ERROR("...failed 0 = ::xos::dlibrary::main::get_the_main()");
    }
}
void DLIBRARY_FINI _fini() {
    ::xos::dlibrary::main* the_main = 0;

    ERR_LOG_DEBUG("::xos::dlibrary::main::get_the_main()...");
    if ((the_main = ::xos::dlibrary::main::get_the_main())) {

        ERR_LOG_DEBUG("the_main->fini()...");
        if (!(the_main->fini())) {
            ERR_LOG_ERROR("...failed on the_main->fini()");
        }
    } else {
        ERR_LOG_ERROR("...failed 0 = ::xos::dlibrary::main::get_the_main()");
    }
}
