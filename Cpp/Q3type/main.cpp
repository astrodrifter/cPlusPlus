#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
int main(int argc, char **argv)
{
	/* get string */
    std::string myString;
	printf("Enter something:\n");
    std:: cin >> myString;
    printf("You entered:\n");
    std:: cout << myString << std::endl;
    
    /* get length of string */
    int length = myString.length();
	return 0;
}
