#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout << arr[i];
    }
    cout << "\n";
}
void fillArray1(int arr[], int myArray1[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = myArray1[i];
    }
}
void fillArray2(int arr[], int myArray1[], int myArray1Size, int size){
    int count = 0;
    for(int j = size+2; j < myArray1Size+2;j++){
        arr[count] = 1;
        /*arr[count] = myArray1[j];*/
        count++;
    }
}
char findOp(int arr[], int size){
    int op;
    for(int i = 0; i < size; i++){
        if(arr[i] < 0) {
            op = arr[i] + 48;
        }
    }
    return op;
}
int findOpLocation(int arr[], int size){
    int location = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < 0) {
            location = i;
        }
    }
    return location;
}

/*int calculate(int num[], int length){
    int result = 0, i= 0;
    while (length > 0){
        result += num[i]*pow(10,length);
    }
    cout << "Result = " << result;
    // 3*100 + 2*10 + 1*1
    // 3*10^length
    return result;
}*/
void solve(string myString){
    /* get length of string */
    int length = myString.length();

    /* make array of ints with operator included */
    int myArray1[length];
    int arrCount = 0;
    for(int i = 0; i < length; i++){
        if(myString[i] > 41 && myString[i] < 58){
            myArray1[arrCount] = myString[i]-48;
            arrCount++; //size of array
        }
    }
    
    /* find operator */
    char op;
    op = findOp(myArray1, arrCount);
    cout << "op = " << op << "\n";;
    int location;
    location = findOpLocation(myArray1, arrCount);
    cout << "location of op = " << location << "\n";
    
    
    /* sperate num */
    int size1 = location, size2 = arrCount-location;
    int num1[size1];
    int num2[size2];
    fillArray1(num1,myArray1,size1);
    fillArray2(num2,myArray1,size2,arrCount);
    printArray(num1,size1);
    printArray(num2,size2);
    
}

int main(void)
{
    /* get string */
    string myString;
	cout << "Enter something:\n"; 
    cin >> myString;
    cout << "You entered:\n";
    cout << myString << endl;
    
    solve(myString);
    
	return 0;
}
