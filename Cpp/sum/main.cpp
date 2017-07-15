#include <stdio.h>
#include <iostream>

int main(int argc, char **argv)
{
	/*std::cout << "Enter two values\n" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " = " 
    << (v1+v2) << ".\n" << std::endl;
    
    std::cout << "hello world\n"; */
    
    /* sum 1 to 10 */
    /*int sum = 0, val = 1;
    while(val <= 10){
        sum += val;
        ++val;
    }
    std:: cout << "The sum of 1 to 10 = " << sum << std::endl;*/
    
    /* when you dont know how many number are to be summed */
    /*int value = 0, sum = 0;
    while(std:: cin >> value)
        sum += value;
    std::cout << "The sum = " << sum << std::endl;*/
    
    std:: cout << "Enter your number to be summed with spaces and 'q' to finish:\n";
    int sum = 0, value = 0;
    // read until end-of-file, calculating a running total of all values read
    while (std::cin >> value)
        sum += value; // equivalent to sum = sum + value 
        std::cout << "Sum is: " << sum << std::endl; 
	return 0;
}
