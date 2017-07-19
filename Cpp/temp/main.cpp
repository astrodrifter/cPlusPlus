#include <stdio.h>

int main(int argc, char **argv)
{ 
    int size1 = location, size2 = arrCount-location;
    
    /* sperate num */
    int num1[size1];
    int num2[size2];
    
    for(int i = 0; i < size1; i++){
        num1[i] = myArray1[i];
    }
    
    int count = 0;
    for(int j = size1+2; j < arrCount;j++){
        num2[count] = myArray1[j];
        count++;
    }
    
    /* calculate number1 */
    int number1 = calculate(num1, op);
    cout << "First number = " << number1 << "\n";
    /*for(int k = 0; k < location; k++){
       printf("%i",num1[k]);
    }*/
    
    printf("operator is %c\n",op);
    
    /* calculate number2 */
    int number2 = calculate(num2,size2);
    cout << "Second number = " << number2 << "\n";
    
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
	printf("hello world\n");
	return 0;
}
