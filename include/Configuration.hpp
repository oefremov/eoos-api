/**
 * The configuration of a target processor.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2016-2018, Sergey Baigudin, Baigudin Software
 * @license   http://embedded.team/license/
 */
#ifndef CONFIGURATION_HPP_
#define CONFIGURATION_HPP_

#include "Types.hpp"

namespace local
{
    struct Configuration
    {

    public:

        /**
         * Stack size in bytes for the first user thread to be created.
         */
        int32 stackSize;

        #ifdef EOOS_NO_STRICT_MISRA_RULES

        /**
         * Start address of heap memory.
         */
        int32 heapAddr;

        /**
         * Size of heap memory in bytes.
         */
        int64 heapSize;

        #endif // EOOS_NO_STRICT_MISRA_RULES

        /**
         * Source clock of CPU oscillator in Hz.
         */
        int64 sourceClock;

        /**
         * CPU clock in Hz.
         */
        int64 cpuClock;

        /**
         * Constructor.
         */
        Configuration();

        /**
         * Destructor.
         */
       ~Configuration()
        {
        }

    };
}
#endif // CONFIGURATION_HPP_
