#include<stdio.h>
int main()
{
    int i,n,a,in=0,out=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a>=10 && a<=20)in+=1;
        else out+=1;
    }
    printf("%d in\n%d out/n",in,out);
    return 0;

}