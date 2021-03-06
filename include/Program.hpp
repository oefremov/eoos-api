/**
 * Entry point to an operating system main program.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2014-2018, Sergey Baigudin, Baigudin Software
 * @license   http://embedded.team/license/
 */
#ifndef PROGRAM_HPP_
#define PROGRAM_HPP_

#include "Types.hpp"

namespace local
{
    class Program
    {

    public:

        /**
         * Starts executing an operating system main program.
         *
         * @return zero, or error code if an error has been occurred.
         */
        static int32 start();

        /**
         * Starts executing an operating system main program.
         *
         * @param argc - The number of arguments passed to the program.
         * @param argv - An array of c-string of arguments where the last one - argc + 1 is null.
         * @return zero, or error code if an error has been occurred.
         */
        static int32 start(int32 argc, char* argv[]);

    };
}
#endif // PROGRAM_HPP_
