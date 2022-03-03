#include <stdio.h>
 
int main() {
 
    int X, Y, M, D;
    scanf("%d", &X);
    printf("%d ano(s)\n",X/365);
    M=X%365;
    printf("%d mes(es)\n",M/30);
    D=M%30;
    printf("%d dia(s)\n",D);
    return 0;
}