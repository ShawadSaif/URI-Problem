#include<stdio.h>
int main()
{
    int a,b,c,d,e, t;
    float s, fs,in;
    a=15;  b=12;  c=10;  d=7;  e=4;
    scanf("%f",&s);
    
    if(s<=400){
        t=a;
        in=s*(t/100.0);
        fs=s+in;
    }
    else if(s>400 && s<=800){
        t=b ;
        in=s*(t/100.0);
        fs= s+in;
    }
    else if(s>800 && s<=1200){
        t=c;
        in=s*(t/100.0);
        fs= s+in;
    }
    else if(s>1200 && s<=2000){
        t=d;
        in=s*(t/100.0);
        fs= s+in;
    }
    else{
        t=e;
        in=s*(t/100.0);
        fs=s+in;
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d%\n",fs,in,t);
    return 0;
    
}