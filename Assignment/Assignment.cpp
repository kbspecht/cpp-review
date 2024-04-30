#include <iostream>

int main()
{
	int width;
	width = 5; // copy assignment of value 5 into variable width

	std::cout << width; // prints 5

	width = 7; // change value stored in variable width to 7

	std::cout << width; // prints 7

    [[maybe_unused]]int a;         // no initializer (default initialization)
    [[maybe_unused]]int b = 5;     // initial value after equals sign (copy initialization)
    [[maybe_unused]]int c( 6 );    // initial value in parenthesis (direct initialization)

    // List initialization methods (C++11) (preferred)
    [[maybe_unused]]int d { 7 };   // initial value in braces (direct list initialization)
    [[maybe_unused]]int e = { 8 }; // initial value in braces after equals sign (copy list initialization)
    [[maybe_unused]]int f {};      // initializer is empty braces (value initialization)
    [[maybe_unused]]int g = { 9 }, h = { 10 }; // copy brace initialization
    [[maybe_unused]]int i {}, j {};            // value initialization

	return 0;
}
