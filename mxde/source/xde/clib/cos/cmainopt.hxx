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
 *   File: cmainopt.hxx
 *
 * Author: $author$
 *   Date: 3/3/2020, 12/16/2020
 **********************************************************************
 */
#ifndef CMAINOPT_HXX
#define CMAINOPT_HXX

#include "cmain.hxx"
#include "cdebug.hxx"
#include <getopt.h>

#define MAIN_ARGUMENTS_CHARS ""
#define MAIN_ARGUMENTS_ARGUMENTS {""}
#define MAIN_OPTION_CHARS "d:h"
#define MAIN_OPTION_OPTIONS \
{"debug-levels", e_MAIN_OPT_ARGUMENT_REQUIRED, 0, 'd'}, \
{"help", e_MAIN_OPT_ARGUMENT_NONE, 0, 'h'},

/**
 **********************************************************************
 * Enum: eMainOptArgument
 *
 * Author: $author$
 *   Date: 3/3/2020
 **********************************************************************
 */
typedef int eMainOptArgument;
enum {
    e_MAIN_OPT_ARGUMENT_NONE     = 0,
    e_MAIN_OPT_ARGUMENT_REQUIRED = 1,
    e_MAIN_OPT_ARGUMENT_OPTIONAL = 2
};

/**
 **********************************************************************
 * Class: cMainOpt
 *
 * Author: $author$
 *   Date: 3/3/2020
 **********************************************************************
 */
class cMainOpt: public cMain {
public:
    typedef cMain cExtends;
    typedef cMainOpt cDerives;

    /**
     **********************************************************************
     * Constructor: cMainOpt / Destructor: ~cMainOpt
     **********************************************************************
     */
    cMainOpt() {
    }
    virtual ~cMainOpt() {
    }

    /**
     **********************************************************************
     * Function: Main
     **********************************************************************
     */
    virtual int Main(int argc, char_t** argv, char_t** env) {
        eError error = e_ERROR_NONE;
        int err = 1;

        if (!(error = StdAttach())) {
            if (!(err = GetOptions(argc, argv, env))) {
                if ((!GetDidUsage())) {
                    err = Run(argc, argv, env);
                }
            }
            StdDetach();
        }
        return err;
    }
    virtual int Run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /**
     **********************************************************************
     * Function: Usage...
     **********************************************************************
     */
    virtual int Usage(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const char** argument = 0;
        const char* arguments = Arguments(argument);
        const char* optstring = 0;
        const struct option* longopts = 0;

        if ((GetDidUsage())) {
            return err;
        }
        SetDidUsage(true);

        optstring = Options(longopts);
        
        OutL
        ("Usage: ", UsageName(argv[0]), 
         ((optstring) && (longopts))?(" [options]"):(""), 
         (arguments)?((arguments[0])?(" "):("")):(""), 
         (arguments)?(arguments):(""), "\n", NULL_POINTER);

        if ((optstring) && (longopts)) {
            Out("Options:\n");
            
            for (; (longopts->name); ++longopts) {
                const char* optarg =
                (e_MAIN_OPT_ARGUMENT_REQUIRED == longopts->has_arg)?(" arg"):
                ((e_MAIN_OPT_ARGUMENT_OPTIONAL == longopts->has_arg)?(" [arg]"):(""));
                const char* optusage = OptionUsage(optarg, longopts);
                const char* optargSeparator = (optarg[0])?(" "):("");
                const char* optusageSeparator = "  ";
                const char c[2] = {((const char)longopts->val), 0};
                
                OutL(" -", c, " --", longopts->name, optargSeparator, optarg, optusageSeparator, optusage, "\n", NULL_POINTER);
            }
        }
        if ((arguments) && (argument) && (argument[0]) && (argument[0][0])) {
            Out("Arguments:\n");
            
            for (const char* arg = *argument; (arg) && (arg[0]); arg = *(++argument)) {
                OutL(arg, "\n", NULL_POINTER);
            }
        }
        return err;
    }
    virtual char_t* UsageName(char_t* arg) const {
        char_t* name = arg;
        for (char_t *s = 0, *i = arg, c = *i; c != 0; c = *(++i)) {
            switch ((char)c) {
            case ':':
            case '\\':
            case '/':
                if (*(s = (i + 1)) != 0) {
                    name = s;
                }
                break;
            }
        }
        return name;
    }

    /**
     **********************************************************************
     * Function: ...Option..., ...Argument...
     **********************************************************************
     */
    virtual int GetOptions(int argc, char_t** argv, char_t** env) {
        int err = 0;
        int longindex = 0;
        const struct option* longopts = 0;
        char_t optvaluename[2] = {0,0};
        const char_t* optname = optvaluename;
        const char_t* optstring = 0;
        int optvalue = 0;

        if ((optstring = Options(longopts)) && (longopts)) {

            opterr = 0;
            while (0 <= (optvalue = getopt_long(argc, argv, optstring, longopts, &longindex))) {
                optvaluename[0] = optvalue;
                optname = (longindex)?(longopts[longindex].name):(optvaluename);

                if ((err = OnOption(optvalue, optarg, optname, longindex, argc, argv, env))) {
                    break;
                }
            }
        }
        return err;
    }
    virtual int OnDebugOption
    (int optval, const char* optarg, const char* optname, int optind,
     int argc, char_t** argv, char_t** env) {
        int err = 0; char c = 0;
        if (((optarg)) && ((c = optarg[0])) && (!(optarg[1]))) {
            switch(optval) {
            case 'd':
                switch(c) {
                case '0':
                    SET_DEBUG_LEVELS(DEBUG_LEVEL_NONE);
                    break; 
                case '1':
                case 'e':
                    SET_DEBUG_LEVELS(DEBUG_LEVEL_ERROR);
                    break; 
                case '2':
                case 'w':
                    SET_DEBUG_LEVELS(DEBUG_LEVEL_WARN);
                    break; 
                case '3':
                case 'i':
                    SET_DEBUG_LEVELS(DEBUG_LEVEL_INFO);
                    break; 
                case '4':
                case 'f':
                    SET_DEBUG_LEVELS(DEBUG_LEVEL_FUNC);
                    break; 
                case '5':
                case 't':
                    SET_DEBUG_LEVELS(DEBUG_LEVEL_TRACE);
                    break; 
                default:
                    if ((c >= '0') && (c <= '9')) {
                        SET_DEBUG_LEVELS((c-'0'));
                    } else {
                        err = OnInvalidOptionArg(optval, optarg, optname, optind, argc, argv, env);
                    }
                }
                break;
            }
        }
        return err;
    }
    virtual int OnUsageOption
    (int optval, const char* optarg, const char* optname, int optind,
     int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = Usage(argc, argv, env);
        return err;
    }
    virtual int OnInvalidOption
    (int optval, const char* optarg, const char* optname, int optind,
     int argc, char_t** argv, char_t** env) {
        int err = 1;
        return err;
    }
    virtual int OnInvalidOptionArg
    (int optval, const char* optarg, const char* optname, int optind,
     int argc, char_t** argv, char_t** env) {
        int err = 1;
        return err;
    }
    virtual int OnOption
    (int optval, const char* optarg, const char* optname, int optind,
     int argc, char_t** argv, char_t** env) {
        int err = 0;
        switch(optval) {
        case 'd':
            err = OnDebugOption(optval, optarg, optname, optind, argc, argv, env);
            break;
        case 'h':
            err = OnUsageOption(optval, optarg, optname, optind, argc, argv, env);
            break;            
        default:
            err = OnInvalidOption(optval, optarg, optname, optind, argc, argv, env);
            break;
        }
        return err;
    }
    virtual const char_t* OptionUsage(const char_t*& optarg, const struct option* longopt) {
        static const char_t* chars = "";
        switch(longopt->val) {
        case 'd':
            optarg = "{ (a)all | (n)none | (e)error | (w)waring | (i)info | (f)function | (t)trace }";
            break;
        case 'h':
            chars = "Usage options";
            break;
        }
        return chars;
    }
    virtual const char_t* Options(const struct option*& longopts) {
        static const char_t* chars = MAIN_OPTION_CHARS;
        static struct option optstruct[]= {
            MAIN_OPTION_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    virtual int OptionIndex() const {
        int index = optind;
        return index;
    }
    virtual const char_t* Arguments(const char_t**& aruments) {
        static const char_t* chars = MAIN_ARGUMENTS_CHARS;
        static const char_t* args[] = MAIN_ARGUMENTS_ARGUMENTS;
        aruments = args;
        return chars;
    }

    /**
     **********************************************************************
     * Function: ...Out...
     **********************************************************************
     */
    virtual TLENGTH OutL(const char_t* chars, ...) {
        TLENGTH length = 0, count = 0;
        va_list va;

        va_start(va, chars);

        if (0 <= (length = Out(chars))) {
            if (0 > (count = OutV(va))) {
                length = count;
            } else { 
                length += count; 
            }
        }
        va_end(va);
        return length;
    }
    virtual TLENGTH OutV(va_list va, TLENGTH vlength = -1) {
        TLENGTH length = 0, count = 0;
        const char_t* chars = 0;

        if (0 > vlength) {
            while (0 != (chars = va_arg(va, const char_t*))) {
                if (0 > (count = Out(chars))) {
                    length = count;
                    break;
                }
                length += count;
            }
        } else {
            while (0 < vlength--) {
                if (0 != (chars = va_arg(va, const char_t*))) {
                    if (0 > (count = Out(chars))) {
                        length = count;
                    } else {
                        length += count;
                        continue;
                    }
                }
                break;
            }
        }
        return length;
    }
}; /* class cMainOpt */

#endif /* ndef CMAINOPT_HXX */
