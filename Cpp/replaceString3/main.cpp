#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int checkRest(string str, string str2, int index){
    int j = 0;
    string newString;
    // make newString 
    for(int i = index; i < index + str2.length(); i++){
        newString[j] = str[i];
    }
    if (newString.compare(str2) != 0)
        cout << str << " has " << str2 << " at location "<< index << '\n';

    return 0;
}
void replace(string str, string str2, string str3){
// find first letter
    for(int i = 0; i < str.length(); i++){
        if(str[i] == str2[0]){
            checkRest(str,str2,i);
        }
    }
}
int main(int argc, char **argv)
{
	string string1, string2, string3;
    cout << "Enter a string\n";
    getline (std::cin, string1);
    cout << "Enter string to be replaced\n";
    getline (std::cin, string2);
    cout << "Enter string to replace\n";
    getline (std::cin, string3);
	//replace(string1, string2, string3);
    
    replace(string1, string2, string3);
    
    
	return 0;
}
