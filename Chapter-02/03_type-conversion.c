
// Int and int -> Int
// Int and float -> float
// float and float -> float     
#include<stdio.h>
int main(){
    int a = 9;
    float d = 9.0;
    int b = 2;
    float c = a/b;  // operation with int to int is always int. 
    printf("The value of a/b is %f \n", c); //that's why answer is 4 instead of 4.5
    printf("The value of d/b is %f \n", d/b); //why answer is 4.5 -> becoz float and int = float

    int e = 6.7; //In this case 6.7 (float) is demoted to 6 (int) because e is not able to store floats.
    printf("The value of e is %d",e);
return 0;
}