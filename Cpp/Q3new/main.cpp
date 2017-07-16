#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>

static int getLength(char * str);
static int getArr1Len(char * str);
static int getArr2Len(char * str, int arr1Len);


int main(int argc, char **argv)
{
    /* get data */
	std:: cout << "Enter you string with 'q' to finish:\n";
    int sum = 0, length = 0, arr1Len = 0, arr2Len = 0, arr1[10], arr2[10];
    char myString[50];
    std::cin >> myString; // get input
    length = getLength(myString); // get length of string
    arr1Len = getArr1Len(myString); // get length for array 1
    arr2Len = getArr2Len(myString, arr1Len); // get length for array 2

    /* enter ints into arrays */
    std::cout << "String length = " << length << "\narray 1 length = "
    << arr1Len << "\narray 2 length = " << arr2Len << std::endl;
    
	return 0;
}
/* get length */
static int getLength(char * str){
    int i = 0, length = 0;
    while(str[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
/* get array 1 length */
static int getArr1Len(char * str) {
    int i = 0, length = 0;
    while(str[i] != '\0'){
        if(str[i] > 41 && str[i] < 58){
            if(str[i] > 41 && str[i] < 48){
                return length;
            } else {
                length++;
            }
        }
        i++;
    }
    return length;
}
/* get array 2 length */
static int getArr2Len(char * str, int arr1Len) {
    int i = arr1Len+1, length = 0;
    while(str[i] != '\0'){
        length++;
        i++;
    }
    return length;
}