#include<stdio.h>

void maxnum(int a , int b , int*max);

int main()
{
    int a = 20 , max ;
    int b = 70;
    maxnum(a,b,&max);
    printf("max value is %d ", max);

}

void maxnum(int a , int b , int*max){ // max variable contains location of max variable of main()
    if(a>b)
    {
        *max = a;
    }
    else{
        *max = b;
    }
}

