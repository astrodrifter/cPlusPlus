#include <stdio.h>

using namespace std;

void fillArray2(int arr[], int myArray1[], int myArray1Size, int size){
    int count = 0;
    for(int j = size+2; j < myArray1Size+2;j++){
        arr[count] = 1;
        /*arr[count] = myArray1[j];*/
        count++;
    }
}
int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}
