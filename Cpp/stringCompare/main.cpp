#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	string str = "Bob";
    string str2 = "Bob";
    string str3 = "Larry";
    
    //compare str to str2 
    if(!str.compare(str2)){
        cout << str << " = " << str2 << "\n";
    } else {
        cout << str << " != " << str2 << "\n";
    }
    
    // compare str to str3
    if(!str.compare(str3)){
        cout << str << " = " << str3 << "\n";
    } else {
        cout << str << " != " << str3 << "\n";
    }
 
	return 0;
}
