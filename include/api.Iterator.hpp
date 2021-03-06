/**
 * Iterator interface.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2016, Sergey Baigudin, Baigudin Software
 * @license   http://embedded.team/license/
 */
#ifndef API_ITERATOR_HPP_
#define API_ITERATOR_HPP_

#include "api.IllegalValue.hpp"

namespace local
{
    namespace api
    {
        /**
         * Primary template implementation.
         *
         * @param T - data type of iterator element.
         */
        template <typename T>
        class Iterator : public api::IllegalValue<T>
        {

        public:

            /**
             * Destructor.
             */
            virtual ~Iterator(){}

            /**
             * Returns next element and advances the cursor position.
             *
             * @return reference to element.
             */
            virtual T& getNext() const = 0;

            /**
             * Tests if this iteration may return a next element.
             *
             * @return true if next element is had.
             */
            virtual bool hasNext() const = 0;

            /**
             * Removes the last element returned by this iterator.
             *
             * @return true if an element is removed successfully.
             */
            virtual bool remove() = 0;

        };
    }
}
#endif // API_ITERATOR_HPP_
