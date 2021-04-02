/**
 **********************************************************************
 * Copyright (c) 1988-2020 $organization$
 *
 * This software is provided by the author and contributors ``as is'' 
 * and any express or implied warranties, including, but not limited to, 
 * the implied warranties of merchantability and fitness for a particular 
 * purpose are disclaimed. In no event shall the author or contributors 
 * be liable for any direct, indirect, incidental, special, exemplary, 
 * or consequential damages (including, but not limited to, procurement 
 * of substitute goods or services; loss of use, data, or profits; or 
 * business interruption) however caused and on any theory of liability, 
 * whether in contract, strict liability, or tort (including negligence 
 * or otherwise) arising in any way out of the use of this software, 
 * even if advised of the possibility of such damage.
 *
 *   File: cmacmain.hxx
 *
 * Author: $author$
 *   Date: 2/28/2020
 **********************************************************************
 */
#ifndef CMACMAIN_HXX
#define CMACMAIN_HXX

#include "coptmain.hxx"
#include "cifra/network/ethernet/actual/address.hpp"
#include "cifra/network/ethernet/address.hpp"
#include "cifra/network/ethernet/posix/address.hpp"

#define MAC_MAIN_ARGUMENTS_CHARS "[index]"
#define MAC_MAIN_ARGUMENTS_ARGUMENTS {"[index] -- interface index",0}

/**
 **********************************************************************
 * Class: cMACMain
 *
 * Author: $author$
 *   Date: 2/28/2020
 **********************************************************************
 */
class cMACMain: public cOptMain {
public:
    typedef cOptMain cExtends;
    typedef cMACMain cDerives;
    /**
     **********************************************************************
     * Constructor: cMACMain / Destructor: ~cMACMain
     **********************************************************************
     */
    cMACMain() {
    }
    virtual ~cMACMain() {
    }
    /**
     **********************************************************************
     * Function: Run
     **********************************************************************
     */
    virtual int Run(int argc, const char** argv, const char** env) {
        int err = 0, index = this->index();
        cifra::network::ethernet::actual::address *mac = 0;
        cifra::network::ethernet::posix::address address;

        if ((mac = address.set_to_adapter(index))) {
            const char *chars = 0; size_t length = 0;
            
            if ((chars = address.string().has_chars(length))) {
                this->Out(chars, length);
            }
        }
        return err;
    }
    virtual int Run(int argc, char** argv, char** env) {
        const char** c_argv = (const char**)argv;
        const char** c_env = (const char**)env;
        int err = 0, optind = 0;

        if (argc > (optind = OptionIndex())) {
            char* arg = 0;
            if ((arg = (argv[optind])) && (arg[0])) {
                int& index = this->index();
                index = atoi(arg);
            }
        }
        err = Run(argc, c_argv, c_env);
        return err;
    }
    virtual int& index() const {
        static int index = 0;
        return index;
    }
    virtual const char_t* Arguments(const char_t**& aruments) {
        static const char_t* chars = MAC_MAIN_ARGUMENTS_CHARS;
        static const char_t* args[] = MAC_MAIN_ARGUMENTS_ARGUMENTS;
        aruments = args;
        return chars;
    }
}; /* class cMACMain */

#endif /* ndef CMACMAIN_HXX */
