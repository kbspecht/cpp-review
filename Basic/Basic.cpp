#include <iostream>

int main()
{
	std::cout << "Hello, world!" << std::endl;
    std::cout << "Enter two numbers separated by a space: ";

    int x; // define variable x to hold user input (and value-initialize it)
    int y; // define variable y to hold user input (and value-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << " and " << y << '\n';
	return 0;
}
