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
///   Date: 4/25/2021
///////////////////////////////////////////////////////////////////////
#include "xos/dlibrary/os/main.hpp"

#if defined(WINDOWS)  
#include "xos/dlibrary/microsoft/windows/main.cpp"
#elif defined(APPLEOSX)  
#include "xos/dlibrary/apple/osx/main.cpp"
#elif defined(APPLEIOS)  
#include "xos/dlibrary/apple/ios/main.cpp"
#elif defined(SOLARIS)  
#include "xos/dlibrary/oracle/solaris/main.cpp"
#elif defined(MACH)  
#include "xos/dlibrary/mach/main.cpp"
#elif defined(LINUX)  
#include "xos/dlibrary/linux/main.cpp"
#else /// defined(LINUX)  
#include "xos/dlibrary/posix/main.cpp"
#endif /// defined(LINUX) 

namespace xos {
namespace dlibrary {
namespace os {

} /// namespace os
} /// namespace dlibrary
} /// namespace xos
