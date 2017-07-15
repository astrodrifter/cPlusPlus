#include <stdio.h>
#include <iostream>

int main(int argc, char **argv)
{
	std::cout << "Enter two values\n" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " = " << (v1+v2) << ".\n" << std::endl;
	return 0;
}
