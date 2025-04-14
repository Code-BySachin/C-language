// Associativity of ( *, /, % ) is left to right
// Associativity of ( +, - ) is left to right
#include<stdio.h>
int main(){
    int a = 3;    
    int b = 6;    
    int c = 9;
    printf("The value is %d\n", a*b/c);    
    printf("The value is %d", a*b/c + 7);    
return 0;
}