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
 *   File: coptmain.hxx
 *
 * Author: $author$
 *   Date: 3/4/2020
 **********************************************************************
 */
#ifndef COPTMAIN_HXX
#define COPTMAIN_HXX

#include "cmainopt.hxx"

/**
 **********************************************************************
 * Class: cOptMain
 *
 * Author: $author$
 *   Date: 3/4/2020
 **********************************************************************
 */
class cOptMain: public cMainOpt {
public:
    typedef cMainOpt cExtends;
    typedef cOptMain cDerives;
    /**
     **********************************************************************
     * Constructor: cOptMain / Destructor: ~cOptMain
     **********************************************************************
     */
    cOptMain() {
    }
    virtual ~cOptMain() {
    }
    /**
     **********************************************************************
     * Function: Run
     **********************************************************************
     */
    virtual int Run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = Usage(argc, argv, env);
        return err;
    }
}; /* class cOptMain */

#endif /* ndef COPTMAIN_HXX */
