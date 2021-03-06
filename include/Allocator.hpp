/**
 * Memory allocator.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2016-2018, Sergey Baigudin, Baigudin Software
 * @license   http://embedded.team/license/
 */
#ifndef ALLOCATOR_HPP_
#define ALLOCATOR_HPP_

#include "Types.hpp"

namespace local
{
    class Allocator
    {

    public:

        /**
         * Allocates memory.
         *
         * @param size - number of bytes to allocate.
         * @return allocated memory address or a null pointer.
         */
        static void* allocate(size_t size);

        /**
         * Frees an allocated memory.
         *
         * @param ptr - address of allocated memory block or a null pointer.
         */
        static void free(void* ptr);

    };
}
#endif // ALLOCATOR_HPP_
