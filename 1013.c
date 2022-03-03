#include <stdio.h>
#include<math.h>
int main() {
 
   int a,b,c,G;
   scanf("%d %d %d", &a, &b, &c);
   G= (a+b+abs(a-b))/2;
   G= (G+c+abs(G-c))/2;
   printf("%d eh o maior\n",G);
    return 0;
}