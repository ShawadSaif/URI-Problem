#include <stdio.h>
 
int main() {
 
   int NUMBER,HOURS;
   
   float PPH, SALARY;
   
   scanf("%d %d %f", &NUMBER, &HOURS, &PPH);
   
   SALARY = HOURS*PPH;
   
   printf("NUMBER = %d\n",NUMBER);
   printf("SALARY = %.2lf\n", SALARY);

 
    return 0;
}