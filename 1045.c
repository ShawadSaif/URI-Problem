#include <stdio.h>
 
int main() 
{
 
   float a,b,c,t;
   scanf("%f %f %f",&a,&b,&c);

   if(a>b){t=a;a=b;b=t;}
   if(a>c){t=a;a=c;c=t;}
   if(b>c){t=b;b=c;c=t;}
   t=a; a=c; c=t;

   if(a>=b+c)printf("NAO FORMA TRIANGULO\n");
   else
 {
   if(a*a==b*b+c*c)printf("TRIANGULO RETANGULO\n");
   if(a*a>b*b+c*c)printf("TRIANGULO OBTUSANGULO\n");
   if(a*a<b*b+c*c)printf("TRIANGULO ACUTANGULO\n");
   if(a==b && b==c && c==a)printf("TRIANGULO EQUILATERO\n");
   if((a==b && a!=c)||(b==c && b!=a)||(a==c && a!=b))printf("TRIANGULO ISOSCELES\n");
 }
    return 0;
}