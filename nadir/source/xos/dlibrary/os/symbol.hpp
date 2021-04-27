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
///   File: symbol.hpp
///
/// Author: $author$
///   Date: 4/24/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_DLIBRARY_OS_SYMBOL_HPP
#define XOS_DLIBRARY_OS_SYMBOL_HPP

#include "xos/dlibrary/os/os.hpp"

#if defined(WINDOWS)  
#include "xos/dlibrary/microsoft/windows/symbol.hpp"
#elif defined(APPLEOSX)  
#include "xos/dlibrary/apple/osx/symbol.hpp"
#elif defined(APPLEIOS)  
#include "xos/dlibrary/apple/ios/symbol.hpp"
#elif defined(SOLARIS)  
#include "xos/dlibrary/oracle/solaris/symbol.hpp"
#elif defined(MACH)  
#include "xos/dlibrary/mach/symbol.hpp"
#elif defined(LINUX)  
#include "xos/dlibrary/linux/symbol.hpp"
#else /// defined(LINUX)  
#include "xos/dlibrary/posix/symbol.hpp"
#endif /// defined(LINUX) 

namespace xos {
namespace dlibrary {
namespace os {

} /// namespace os
} /// namespace dlibrary
} /// namespace xos

#endif /// XOS_DLIBRARY_OS_SYMBOL_HPP
