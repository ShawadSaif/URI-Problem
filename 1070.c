#include<stdio.h>
int main(){

    int i,a,b;
    scanf("%d",&a);

    for(i=0;i<12;i++){
        if(a%2!=0)printf("%d\n",a);
        a=a+1;
    }
    return 0;
}