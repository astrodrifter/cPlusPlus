/* Program takes a string input with hideen numbers and an operator
 * turns ints into two seperate numbers and performs the operation.
 *  
 *    3v4b5/4n5
 *    operator is /
 *    Number 1 = 345
 *    Number 2 = 45
 *    Solution: 345/45 = 7
 * 
 *  Dhruva O'Shea
 * */
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
    for(int j = myArray1Size+1; j < size;j++){
        arr[count] = myArray1[j];
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

int calculate(int arr[], int length){
    int sum = 0, i= 0;
    while (length > 0){
        sum += arr[i]*pow(10,length-1);
        i++;
        length--;
    }
    return sum;
}
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
    
    /* find operator and location of operator */
    char op;
    op = findOp(myArray1, arrCount);
    cout << "operator is " << op << "\n";;
    int location;
    location = findOpLocation(myArray1, arrCount);
    
    /* sperate numbers from myArray1 into num1[] and num2[] */
    int size1 = location, size2 = arrCount-location;
    int num1[size1];
    int num2[size2];
    fillArray1(num1,myArray1,size1);
    fillArray2(num2,myArray1,size2,arrCount);
    //printArray(num1,size1);
    //printArray(num2,size2-1);
    
    /*calculate array into numbers */
    int number1 = 0, number2 = 0, solution = 0;
    number1 = calculate(num1,size1);
    number2 = calculate(num2,size2-1);
    cout << "Number 1 = " << number1;
    cout << "\nNumber 2 = " << number2;
    switch (op){
        case '/': 
            solution = number1/number2;
            break;
        case '+':
            solution = number1+number2;
            break;
        case '-':
            solution = number1-number2;
            break;
        case '*':
            solution = number1*number2;
            break;
    }
    cout << "\nSolution: " << number1 << op << number2 << " = " << solution << "\n" << endl;
}

int main(void)
{
    /* get string */
    string myString;
	cout << "Enter something:\n"; 
    cin >> myString;
    solve(myString);
    
	return 0;
}
