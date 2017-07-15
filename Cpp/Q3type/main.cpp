#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include <typeinfo>

class someClass {};

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
    
    /* get ints */
    for(int i = 0; i < length; i++){
        if(typeid(myString[i]).name() == typeid(int()).name()){
            std:: cout << myString[i] << std::endl;
        }
        
    }
    
    /* check type */
    int a = 2;
    char b = 'A';
    someClass c;
    int array[3] = {0, 1, 2};
    std::cout<<"a is of type: "<<typeid(a).name()<<std::endl;
    std::cout<<"b is of type: "<<typeid(b).name()<<std::endl;
    std::cout<<"c is of type: "<<typeid(c).name()<<std::endl;
    std::cout<<"1 is of type: "<<typeid(1).name()<<std::endl;
    std::cout<<"array[1] is of type: "<<typeid(array[1]).name()<<std::endl;
    std::cout<<"int is of type: "<<typeid(int()).name()<<std::endl;
    
    
	return 0;
}
