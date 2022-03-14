#include<stdio.h>
int main()
{
   int hi,mi,hf,mf,dm,dh;
   scanf("%d %d %d %d",&hi,&mi,&hf,&mf);

   if(mf<mi){
       dm=60+mf-mi;
       if(hf<=hi){
            dh=24+hf-1-hi;
       }
       else {
           dh=hf-1-hi;
       }
   }

   else{
       dm=mf-mi;
        if(hf<hi){
           dh=hf+24-hi;
       }
       else if(hf==hi && mf==mi){
           dh=hf+24-hi;
       } 
       else{
           dh=hf-hi;
       }
   }
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);

    return 0;
}