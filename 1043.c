#include<stdio.h>
int main()
{
    float a,b,c, peri,area;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        peri=a+b+c;
        printf("Perimetro = %.1f\n",peri);
    }
    else{
        area=((a+b)*c)/2;
        printf("Area = %.1f\n",area);
    }
    return 0;
}