#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

void solve(char * myString);

int main(void)
{
    /* get string */
    string myString;
	cout << "Enter something:\n"; 
    cin >> myString;
    cout << "You entered:\n";
    cout << myString << std::endl;
    
    solve(myString);
    
	return 0;
}
/* solve - algorithym here */
static void solve(char * myString){
    /* get length of string */
    int length = myString.length();

    /* make array of ints */
    int myArray1[length];
    int arrCount = 0;
    for(int i = 0; i < length; i++){
        if(myString[i] > 41 && myString[i] < 58){
            myArray1[arrCount] = myString[i]-48;
            arrCount++;
        }
    }
    
    /* find operator */
    char op;
    int location;
    for(int i = 0; i < arrCount; i++){
        if(myArray1[i] < 0) {
            op = myArray1[i] + 48;
            location = i;
        }
    }
    
    /* sperate num */
    int num1[location];
    int num2[arrCount-location];
    for(int i = 0; i < location; i++){
        num1[i] = myArray1[i];
    }
    int count = 0;
    for(int j = location+1; j < arrCount;j++){
        num2[count] = myArray1[j];
        count++;
    }
    
    /* print num1 */
    printf("First number:\n");
    for(int k = 0; k < location; k++){
       printf("%i",num1[k]);
    }
    printf("\n");
    printf("operator is %c\n",op);
    
    /* print num2 */
    printf("Second number:\n");
    for(int k = 0; k < location; k++){
       printf("%i",num2[k]);
    }
    printf("\n");
    
    /* make number from int array elements */
    int number1 = 0;
    int countDown = location-1;
    for(int i = 0; i < location; i++){
        number1 += (num1[i]*pow(10,countDown));
        countDown--;
    }
    printf("Number1 = %i\n",number1);
    
    int number2 = 0;
    countDown = arrCount-location-1;
    printf("arrCount = %i, location =%i\n",arrCount,location);
    for(int i = 0; i < location; i++){
        number2 += (num2[i]*pow(10,countDown));
        countDown--;
    }
    printf("Number2 = %i\n",number2);
}

// 3*100 + 2*10 + 1*1
// 3*10^location