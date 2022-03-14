#include<stdio.h>
int main()
{
    int a,b,d;
    scanf("%d %d",&a,&b);
    if (b<=a){
        d=24+b-a;
    }
    else 
    d=b-a;
    printf("O JOGO DUROU %d HORA(S)\n",d);
    return 0;
}