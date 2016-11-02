#include <stdio.h>
#include <stdlib.h>
int reverse(int x);
int main()
{
    int num1=-2147483412;
    int num2=-123;
    printf("%d",reverse(num1));
    return 0;
}


int reverse(int x){
    long int re=0;
    int save,sign=0;
    while(x!=0){
        save=x%10;
        re=re*10+save;
        x=x/10;
    }
    return re>2147483647||re<-2147483648?0:re;
}


