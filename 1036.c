#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d, R1, R2 ;
    scanf("%lf %lf %lf", &a, &b, &c);
    d=b*b-4*a*c;
    
    if ( a==0){
        printf ("Impossivel calcular\n");
    } 
    else if(d<0){
        printf("Impossivel calcular\n");
    
    }
    else{ 
        R1= (-b+sqrt(d))/(2.0*a);
        printf("R1 = %.5lf\n", R1);
        R2= (-b-sqrt(d))/(2.0*a);
        printf("R2 = %.5lf\n",R2);

    }
    return 0;

}