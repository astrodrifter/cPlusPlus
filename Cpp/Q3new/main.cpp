#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>

static int getLength(char * str);
static int getArr1Len(char * str);
static int getArr2Len(char * str, int arr1Len);
static void fillArray1(char * str, int arr1[100], int arr1Len);
static void fillArray2(char * str, int arr2[100], int arr2Len);
static int findOperator(char * str, int length);


int main(int argc, char **argv)
{
    /* get data */
	std:: cout << "Enter you string with 'q' to finish:\n";
    int length = 0, arr1Len = 0, arr2Len = 0, op = 0;
    char myString[50];
    std::cin >> myString; // get input
    length = getLength(myString); // get length of string
    arr1Len = getArr1Len(myString); // get length for array 1
    arr2Len = getArr2Len(myString, arr1Len); // get length for array 2
    op = findOperator(myString, length);

    /* enter ints into arrays */
    int arr1[arr1Len], arr2[arr2Len];
    fillArray1(myString, arr1, arr1Len);
    
    /* output fchecks or my own learning */
    std::cout << "String length = " << length << "\narray 1 length = "
    << arr1Len << "\narray 2 length = " << arr2Len << "\n operator is " 
    << myString[op] << " at location " << op << std::endl;
    
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
/* find operator */
static int findOperator(char * str, int length){
    int i = 0, location;
    while(str[i] != '\0'){
        if(str[i] < 41 && str[i] < 48){
            location = str[i];
        } 
        i++;  
    }
    return location;
}
/* fill int array 1 */
/* static void fillArray1(char * str, int arr1[100], int arr1Len){
    for(int i = 0; i < a)
}*/
/* fill int array 2 */
/*static void fillArray2(char * str, int arr2[100], int arr2Len){
    
}*/
