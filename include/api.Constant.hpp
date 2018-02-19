/** 
 * Global constants.
 * 
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2014-2018, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#ifndef API_TYPES_HPP_
#define API_TYPES_HPP_

namespace api
{
    struct Constant
    {
        
    public:
        
        #if __cplusplus >= 201103L  
        // NULL definition since C++11
        typedef decltype(nullptr)  nullptr_t;
        static const nullptr_t NULL = nullptr;
        #else                       
        // NULL definition until C++11
        typedef signed int nullptr_t;             
        static const nullptr_t NULL = 0;
        #endif // __cplusplus
        
// LP32 or 2/4/4 (int is 16-bit, long and pointer are 32-bit)
#if defined(EOOS_TYPE_WIDTH_LP32)
typedef signed   int        int16;
typedef unsigned int        uint16;
typedef signed   long       int32;
typedef unsigned long       uint32;
typedef signed   long long  int64;
typedef unsigned long long  uint64;
// ILP32 or 4/4/4 (int, long, and pointer are 32-bit)
#elif defined(EOOS_TYPE_WIDTH_ILP32)
typedef signed   short      int16;
typedef unsigned short      uint16;
typedef signed   int        int32;
typedef unsigned int        uint32;
typedef signed   long long  int64;
typedef unsigned long long  uint64;
// LLP64 or 4/4/8 (int and long are 32-bit, pointer is 64-bit)
#elif defined(EOOS_TYPE_WIDTH_LLP64)
typedef signed   short      int16;
typedef unsigned short      uint16;
typedef signed   int        int32;
typedef unsigned int        uint32;
typedef signed   long long  int64;
typedef unsigned long long  uint64;
// LP64 or 4/8/8 (int is 32-bit, long and pointer are 64-bit)
#elif defined(EOOS_TYPE_WIDTH_LP64)
typedef signed   short      int16;
typedef unsigned short      uint16;
typedef signed   int        int32;
typedef unsigned int        uint32;
typedef signed   long       int64;
typedef unsigned long       uint64;
// C++ standard
#else
typedef signed   short      int16;
typedef unsigned short      uint16;
typedef signed   int        int32;
typedef unsigned int        uint32;
typedef signed   long long  int64;
typedef unsigned long long  uint64;
#endif
// Byte types for byte addressing
typedef signed char         int8;
typedef unsigned char       uint8;
// Floating point types
typedef float               float32;
typedef long double         float64;
// The type returned by sizeof
typedef unsigned            size_t;
// Type of minimal addressable memory cell
typedef signed char         cell;
        

    };
    
}

        
#endif // API_TYPES_HPP_   