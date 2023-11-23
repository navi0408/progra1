#include<stdio.h>
#define DATO 4 /*Aqui definimos una constante*/

void main(){
    int x,y = 1;
    float z;

    x=3/2+10-3;
    z=3.0/2.0+10-3; 

    printf("%d -- %f \n", x,z); /*%d -> int %f -> float*/
    printf("%d \n", DATO * 3 + 1/2); 
    printf("%d \n", 3>1||DATO *2<1);
    printf("%d \n", 5!=1&& DATO > 2);
    z=x;
    printf("%d \n", x+y<=z);
}