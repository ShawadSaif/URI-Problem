#include<stdio.h>
int main(){

    int X, Y;
    float Z;
    const float cq=4.00, xs=4.50, xb=5.00, ts=2.0, re=1.5;
    scanf("%d %d",&X,&Y);
    if(X==1) Z=Y*cq;
    else if (X==2)Z=Y*xs;
    else if (X==3)Z=Y*xb;
    else if (X==4)Z=Y*ts;
    else if (X==5)Z=Y*re;

    printf("Total: R$ %0.2f\n",Z);
    return 0;

}