#include <stdio.h>
 
int main() {
 
    float s, t;
    scanf("%f",&s);
    
    if(s<=2000)printf("Isento\n");
    
    else {
        if(s>2000 && s<=3000){
        t=(s-2000)*(8/100.00);
     }
    
     else if(s>3000 && s<=4500){
        t=80+(s-3000)*(18/100.00);
     }
     else{
        t=80+(1500*18/100.00)+(s-4500)*(28/100.00);
     }
      printf("R$ %.2f\n",t);

    }
    
   
    
    return 0;
}