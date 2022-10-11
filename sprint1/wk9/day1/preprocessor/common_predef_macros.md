# Common Predefined Macros
https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros  

The common predefined macros are GNU C extensions. They are available with the same meanings regardless of the machine or operating system on which you are using GNU C or GNU Fortran. Their names all start with double underscores.  

__COUNTER__  
This macro expands to sequential integral values starting from 0. In conjunction with the ## operator, this provides a convenient means to generate unique identifiers. Care must be taken to ensure that __COUNTER__ is not expanded prior to inclusion of precompiled headers which use it. Otherwise, the precompiled headers will not be used.  

__GFORTRAN__  
The GNU Fortran compiler defines this.  

__GNUC__  
__GNUC_MINOR__  
__GNUC_PATCHLEVEL__  
These macros are defined by all GNU compilers that use the C preprocessor: C, C++, Objective-C and Fortran. Their values are the major version, minor version, and patch level of the compiler, as integer constants. For example, GCC 3.2.1 will define __GNUC__ to 3, __GNUC_MINOR__ to 2, and __GNUC_PATCHLEVEL__ to 1. These macros are also defined if you invoke the preprocessor directly.  

__GNUC_PATCHLEVEL__ is new to GCC 3.0; it is also present in the widely-used development snapshots leading up to 3.0 (which identify themselves as GCC 2.96 or 2.97, depending on which snapshot you have).  

