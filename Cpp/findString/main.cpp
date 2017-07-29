#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

/*Takes string1 and string2, 
 * checks if string2 is in string1, 
 * returns position or  false */
int findString(string string1,string string2){
    int i = 0,j = 0, count =0;
    while(string1[i] != '\0'){
        if(string1[i] == string2[j]){
            for(int k = i; k < string2.length(); k++){
                if(string1[k] == string2[j]){
                    count++;
                    j++;
                }
            }
            if(count == string2.length()-1){
                cout << "String found at possition " << i << "\n";
            } 
        }
        i++;
    }
    if(count == string2.length()-1){
        return i;
    } else {
        return 0;
    }
}

int main(int argc, char **argv)
{
    string string1, string2;
    cout << "Enter a string\n";
    getline (std::cin, string1);
    cout << "Enter string to search for\n";
    getline (std::cin, string2);
    
    int found = 0;
    found = findString(string1, string2);
	if(found){
        cout << "String found at possition " << found << "\n";
    } else {
        cout << "String not found\n";
    }
    
    
	return 0;
}
