/**
 * The operating system error codes.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2017-2018, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#ifndef ERROR_HPP_
#define ERROR_HPP_

namespace local
{
    enum Error
    {
        /**
         * No errors have been occurred.
         */
        ERROR_OK = 0,

        /**
         * Error of the operating system kernel syscall calling.
         */
        ERROR_SYSCALL_CALLED = 1,

        /**
         * Error of a no strict MISRA C++ function calling.
         */
        ERROR_NO_MISRA_FUNCTION_CALLED = 2,

        /**
         * Error of a user program occurred.
         */
        ERROR_USER_TERMINATION = 3,

        /**
         * Error of searching of a resource.
         */
        ERROR_RESOURCE_NOT_FOUND = 4,

        /**
         * An undefined error has been occurred.
         */
        ERROR_UNDEFINED = 127,

        /**
         * The last unused error code.
         */
        ERROR_LAST = 128

    };
}
#endif /* ERROR_H_ */
