#include <stdio.h>
 
int main() {
 int c, n;
 float  a;
 for(n=0;n<6;n++){
    scanf("%f",&a);
    if(a>0)c++; 
 }
 printf("%d valores positivos\n",c);
 return 0;
}