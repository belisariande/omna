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
///   Date: 4/26/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_DLIBRARY_APPLE_OSX_INTERFACE_HPP
#define XOS_DLIBRARY_APPLE_OSX_INTERFACE_HPP

#include "xos/dlibrary/interface.hpp"
#include "xos/dlibrary/apple/osx/symbol.hpp"
#include "xos/base/logger.hpp"

namespace xos {
namespace dlibrary {
namespace apple {
namespace osx {

typedef attachert
<DLIBRARY_T, INVALID_DLIBRARY_T, INVALID_DLIBRARY_VALUE, 
 dlibrary::interface> attacher;

typedef attachedt
<DLIBRARY_T, INVALID_DLIBRARY_T, INVALID_DLIBRARY_VALUE, 
 dlibrary::interface, extend, attacher> attached;

typedef openedt
<DLIBRARY_T, INVALID_DLIBRARY_T, INVALID_DLIBRARY_VALUE, 
 dlibrary::interface, extend, attached> opened;

/// class interfacet
template <class TExtends = opened, class TImplements = typename TExtends::implements>
class exported interfacet: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef interfacet derives; 
    
    typedef typename extends::attached_t attached_t;
    typedef typename extends::unattached_t unattached_t;
    enum { unattached = extends::unattached };

    /// constructors / destructor
    interfacet(const char* filename, bool resolve = true, bool global = false) {
        if (!(this->open(filename, resolve, global))) {
            throw (open_exception(open_failed));
        }
    }
    interfacet() {
    }
    virtual ~interfacet() {
        if (!(this->closed())) {
            throw (open_exception(close_failed));
        }
    }
private:
    interfacet(const interfacet& copy) {
    }
public:

    /// open...
    virtual bool open(const char* filename, bool resolve = true, bool global = false) {
        attached_t detached = (attached_t)unattached;
        if ((attached_t)unattached != (detached = this->open_attached(filename, resolve, global))) {
            this->set_is_open();
            return true;
        }
        return false;
    }
    virtual attached_t open_attached(const char* filename, bool resolve = true, bool global = false) {
        attached_t detached = (attached_t)unattached;
        if ((this->closed())) {
            if ((attached_t)unattached != (detached = open_detached(filename, resolve, global))) {
                this->attach(detached);
            }
        }
        return detached;
    }
    virtual void* get_address(const char* symbol) const {
        attached_t detached = (attached_t)unattached;
        if ((attached_t)unattached != (detached = this->attached_to())) {
            if ((symbol) && (symbol[0])) {
                void* address = 0;

                LOGGER_LOG_DEBUG("dlsym(detached = " << pointer_to_string(detached).chars() << ", symbol = \"" << symbol << "\")...");
                if ((address = dlsym(detached, symbol))) {
                    return address;
                } else {
                    char *dlerr = dlerror();
                    LOGGER_LOG_ERROR("...failed dlerr = \"" << dlerr << "\" on dlsym(detached = " << pointer_to_string(detached).chars() << ", symbol = \"" << symbol << "\")");
                }
            }
        }
        return 0;
    }

    /// open / close detached
    virtual attached_t open_detached(const char* filename, bool resolve = true, bool global = false) const {
        attached_t detached = (attached_t)unattached;
        if ((filename) && (filename[0])) {
            int mode = ((resolve)?(RTLD_NOW):(RTLD_LAZY)) 
                     | ((global)?(RTLD_GLOBAL):(RTLD_LOCAL));

            LOGGER_LOG_DEBUG("dlopen(filename = \"" << filename << "\", mode = " << mode << ")...");
            if ((detached = dlopen(filename, mode))) {
                return detached;
            } else {
                char *dlerr = dlerror();
                LOGGER_LOG_ERROR("...failed dlerr = \"" << dlerr << "\" on dlopen(filename = \"" << filename << "\", mode = " << mode << ")");
            }
        }
        return detached;
    }
    virtual bool close_detached(attached_t detached) const {
        if ((attached_t)unattached != (detached)) {
            int err = 0;

            LOGGER_LOG_DEBUG("dlclose(detached = " << pointer_to_string(detached).chars() << ")...");
            if ((err = dlclose(detached))) {
                char *dlerr = dlerror();
                LOGGER_LOG_ERROR("...failed dlerr = \"" << dlerr << "\" on dlclose(detached = " << pointer_to_string(detached).chars() << ")");
            }
            return true;
        }
        return false;
    }
}; /// class interfacet
typedef interfacet<> interface;

} /// namespace osx
} /// namespace apple
} /// namespace dlibrary
} /// namespace xos

#endif /// XOS_DLIBRARY_APPLE_OSX_INTERFACE_HPP
