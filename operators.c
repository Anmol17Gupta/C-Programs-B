#include <stdio.h>
#include <math.h>

int main(){
    int num=1234;
    int n=1234;
    int count=0,sum=0;

    do {
    n /= 10;
    ++count;
    } while (n != 0);


    /*calculating length of integers in a number
    while(num!=0){
        num=num/10;
        count++;
    }*/
    printf("Length of integer:%d",count);

/*Reversing the digits
    for(int i=0;)
        sum=sum+(n%10)*pow(10,count-1);
        n=n/10;
    }

    printf("Reverse digit:%d",sum);*/

}