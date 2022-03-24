#include<stdio.h>
int main(){

    int n=0,i;
    float a,t=0,avg;
    for(i=0;i<6;i++){
        scanf("%f",&a);
        if (a>0){
            n=n+1;
            t=t+a;

        }
    }

    avg=t/n;
    printf("%d valores positivos\n%.1f\n",n,avg);
    return 0;

}