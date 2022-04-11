#include<stdio.h>
int main(){

    int n=0,i,a;
    for(i=0;i<5;i++){
        scanf("%d",&a);
        if (a%2==0){
            n=n+1;

        }
    }
    printf("%d valores pares\n",n);
    return 0;

}