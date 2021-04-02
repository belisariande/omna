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
 *   File: cenmain.hxx
 *
 * Author: $author$
 *   Date: 3/4/2020
 **********************************************************************
 */
#ifndef CENMAIN_HXX
#define CENMAIN_HXX

#include "coptmain.hxx"
#include "cmac.hxx"

#define EN_MAIN_OPTION_CHARS \
"an" \
MAIN_OPTION_CHARS

#define EN_MAIN_OPTION_OPTIONS \
{"address", e_MAIN_OPT_ARGUMENT_NONE, 0, 'a'}, \
{"name", e_MAIN_OPT_ARGUMENT_NONE, 0, 'n'}, \
MAIN_OPTION_OPTIONS

#define EN_MAIN_ARGUMENTS_CHARS "[index]"
#define EN_MAIN_ARGUMENTS_ARGUMENTS {"[index] -- interface index",0}

/**
 **********************************************************************
 * Class: cENMain
 *
 * Author: $author$
 *   Date: 3/4/2020
 **********************************************************************
 */
class cENMain: public cOptMain {
public:
    typedef cOptMain cExtends;
    typedef cENMain cDerives;
    /**
     **********************************************************************
     * Constructor: cENMain / Destructor: ~cENMain
     **********************************************************************
     */
    cENMain(): m_get(0), m_between(" ") {
    }
    virtual ~cENMain() {
    }
    /**
     **********************************************************************
     * Function: Run
     **********************************************************************
     */
    int (cDerives::*m_get)(cString& en, cMac& mac, int index);
    virtual int Run(int argc, char_t** argv, char_t** env) {
        int err = 0, optind = 0, index = 0;
        const char_t* arg = 0;
        cString en;
        cMac mac;
        
        if ((argc >= (optind = OptionIndex())) && ((arg = argv[optind])) && (arg[0])) {
            index = atoi(arg);
        }
        if ((this->m_get)) {
            err = (this->*m_get)(en, mac, index);
        } else {
            err = GetBoth(en, mac, index);
        }
        return err;
    }
    cString m_between;
    virtual int GetBoth(cString& en, cMac& mac, int index) {
        int err = 0;
        if ((mac.GetAdapter(en, index))) {
            const char* chars = 0; TLENGTH length = 0;
            if ((chars = en.HasChars(length))) {
                const char* chars2 = 0; TLENGTH length2 = 0;
                Out(chars, length);
                if ((mac.GetAddress(en, index))) {
                    if ((chars = en.HasChars(length))) {
                        if ((chars2 = m_between.HasChars(length2))) {
                            Out(chars2, length2);
                        }
                        Out(chars, length);
                    }
                }
            }
        }
        return err;
    }
    virtual int GetName(cString& en, cMac& mac, int index) {
        int err = 0;
        if ((mac.GetAdapter(en, index))) {
            const char* chars = 0; TLENGTH length = 0;
            if ((chars = en.HasChars(length))) {
                Out(chars, length);
            }
        }
        return err;
    }
    virtual int GetAddress(cString& en, cMac& mac, int index) {
        int err = 0;
        if ((mac.GetAddress(en, index))) {
            const char* chars = 0; TLENGTH length = 0;
            if ((chars = en.HasChars(length))) {
                Out(chars, length);
            }
        }
        return err;
    }
    /**
     **********************************************************************
     * Function: ...Option...
     **********************************************************************
     */
    virtual int OnAddressOption
    (int optval, const char* optarg, const char* optname, int optind,
     int argc, char_t** argv, char_t** env) {
        int err = 0;
        m_get = &cDerives::GetAddress;
        return err;
    }
    virtual int OnNameOption
    (int optval, const char* optarg, const char* optname, int optind,
     int argc, char_t** argv, char_t** env) {
        int err = 0;
        m_get = &cDerives::GetName;
        return err;
    }
    virtual int OnOption
    (int optval, const char* optarg, const char* optname, int optind,
     int argc, char_t** argv, char_t** env) {
        int err = 0;
        switch(optval) {
        case 'a':
            err = OnAddressOption(optval, optarg, optname, optind, argc, argv, env);
            break;
        case 'n':
            err = OnNameOption(optval, optarg, optname, optind, argc, argv, env);
            break;            
        default:
            err = cExtends::OnOption(optval, optarg, optname, optind, argc, argv, env);
            break;
        }
        return err;
    }
    virtual const char_t* OptionUsage(const char_t*& optarg, const struct option* longopt) {
        static const char_t* chars = "";
        switch(longopt->val) {
        case 'a':
            optarg = "interface address";
            break;
        case 'n':
            chars = "interface name";
            break;
        default:
            chars = cExtends::OptionUsage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* Options(const struct option*& longopts) {
        static const char_t* chars = EN_MAIN_OPTION_CHARS;
        static struct option optstruct[]= {
            EN_MAIN_OPTION_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    virtual const char_t* Arguments(const char_t**& aruments) {
        static const char_t* chars = EN_MAIN_ARGUMENTS_CHARS;
        static const char_t* args[] = EN_MAIN_ARGUMENTS_ARGUMENTS;
        aruments = args;
        return chars;
    }
}; /* class cENMain */

#endif /* ndef CENMAIN_HXX */
