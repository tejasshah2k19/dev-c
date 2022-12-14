#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a = 10; //variable -> a
    int b = 20;

    //a -> 
    printf("\nEnter two numbers");
    scanf("%d%d",&a,&b);
    int c  = a+b;
    printf("\nAddition = %d",c);
    printf("\n%d + %d = %d",a,b,c);
    return 0;
}

//10 + 20 = 33 
