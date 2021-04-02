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
 *   File: optmain.cxx
 *
 * Author: $author$
 *   Date: 3/3/2020
 **********************************************************************
 */
#include "optmain.hxx"
#include "cdebug.hxx"

/**
 **********************************************************************
 * Function: main
 *
 *   Author: $author$
 *     Date: 3/3/2020
 **********************************************************************
 */
int main(int argc, char** argv, char** env) {
    int err = 1;
    cMainInterface* theMain = 0;

    SET_DEBUG_LEVELS(DEFAULT_DEBUG_LEVELS);

    if ((theMain = cMainInterface::GetMain())) {
        err = theMain->Main(argc, argv, env);
     } else { 
        DBE("() cMainInterface::GetMain() returned 0\n"); 
    }
    return err;
}
