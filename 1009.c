#include <stdio.h>
 
int main() {
 
     char NAME[20];
    
     double salary, sales, TOTAL;
    
     gets(NAME);
     
     scanf(" %lf %lf",&salary,&sales);
     
     TOTAL = salary+sales*0.15;
     
     printf("TOTAL = R$ %0.2lf\n",TOTAL);
     
     return 0;
}