#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

void replace(string string1, string string2, string string3){
    string newString;
    
    // string lensths
    int len2, len3;
    len2 = string2.length();
    len3 = string3.length();
    
    //find string2 in string 1 and replace with string3
    
    // find string2 in string1
    int i = 0, j = 0, position = 0;
    while(string1[i] != '\0'){
        if(sameString(string1,string2,i)){
            position = i;
            cout << "found at " << i << "\n";
        }
    }
    
    
}

int sameString(string str1, string str2, int index){
    int len1, len2, j = 0;
    string temp;
    len1 = str1.length();
    len2 = str2.length();
    for(int i = index; i < len2; i++){
        temp[j] = 
        
    }
    return 1;
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
