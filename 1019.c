#include<stdio.h>
int main ()
{
    int N, H, M, S;
    scanf("%d",&N);
    H= N/3600;
    M=N%3600;
    S=M%60;
    M=M/60;
   
    printf("%d:%d:%d\n",H, M, S);
    return 0;
}