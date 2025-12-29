# ftprintf tester
## description
This tester is for the purposes of testing the function `ft_printf` during the buildign of the project and during evaluations. 

The tester uses the same approach as printfTester by [Tripouille](https://github.com/Tripouille/printfTester), and uses a refactored `print()` function.

Why? Because I wanted to understand how testing programs work, and further I wanted something that I understood (because I pulled it apart) that could be expanded quickly.
The test essentially allows for you to create a new `.cpp` file and drop in the `print()` function to test various cases on `ft_printf()` against `printf(3)`.

A basic usage can look like this:

``` c
/* your custom testing file */
#include "geninc.hpp" /* required include header */

void    my_custom_test(void)
{
    /*
     * void print(int test, const char *s, ...)
     */
    print(1, "This is test %d of %i\n hexa value %x...", 1, 10, -42);
    print(2, "This is test %d of %i\n String variable: %s...", 2, 10, "Hello World");
}
```

The next step would be to include this functions prototype into the `geninc.h` and finally add it to the main function, located in the `main.cpp` file.

**NOTE:** This test will only accurately tell you if your `ft_printf()` function is passing on a 42 campus computer. 
While it will work on OSX and other Linux platforms, `printf()` on OSX, for example, has very different outputs to those of the 42 campus computers OSs.
E.g, `printf(3)` will crash if `NULL` is passed to it (same on Arch linux) with a `%s` flag. Similarly `%p` flags that are passed 0 will print 0x0, rather than `(nil)`.

## Install instructions
1. Simply clone this repo into the base of your ftprintf project directory, `cd` into the test folder and type `make`.
2. next on the console type `./ft_printf` to run the test.

If you would like to add in your own tests, please remember to add the test files to the `SRC` variable in the projects `Makefile`.
