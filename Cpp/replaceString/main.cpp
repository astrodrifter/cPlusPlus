#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int findString(string str1, string str2, int index){
    int len2, j = 0,count = 0;
    string temp;
    len2 = str2.length();
    for(int i = index; i < len2+index; i++){
        if(str1[i] == str2[j])
            count++;
        j++;
    }
    if(count-1 == len2){
        return 1;
    }else {
        return  0;
    }
    return 0;
}

void replace(string string1, string string2, string string3){
    string newString;
    
    cout << string1 << string2;
    
    // string lengths
    int len2, len3;
    len2 = string2.length();
    len3 = string3.length();
    
    //find string2 in string 1 and replace with string3
    
    // find string2 in string1
    int i = 0, position = 0, found = 0;
    while(string1[i] != '\0'){
        //found = findString(string1,string2,i);
        if(string1[i] == string2[0]){
            position = i;
            cout << "found at " << i << "\n";
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
	replace(string1, string2, string3);
	return 0;
}
