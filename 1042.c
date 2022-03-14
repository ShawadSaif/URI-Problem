#include <stdio.h>
 
int main() 
{
 
   int a,b,c, p,q,r,t;
   scanf("%d %d %d",&a,&b,&c);
   p=a;
   q=b;
   r=c;
   if(a>b){t=a;a=b;b=t;}
   if(a>c){t=a;a=c;c=t;}
   if(b>c){t=b;b=c;c=t;};
   
   printf("%d\n%d\n%d\n\n",a,b,c);
   printf("%d\n%d\n%d\n",p,q,r);
 
    return 0;
}