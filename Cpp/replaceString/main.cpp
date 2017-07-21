#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

void replace(string string1, string string2, string string3){
    string newString;
    //find string2 in string 1 and replace with string3
    
}

int main(int argc, char **argv)
{
    string string1, string2, string3;
    cout << "Enter a string\n";
    getline (std::cin, string1);
    cout << "Enter string to be replaced\n";
    getline (std::cin, string2);
    cout << "Enter string to replaced\n";
    getline (std::cin, string3);
	replace(string1, string2, string3);
	return 0;
}
