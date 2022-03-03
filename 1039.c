#include<stdio.h>
int main()
{
    float n1, n2, n3, n4, ns, avg, avgf;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

    avg=(n1*2+n2*3+n3*4+n4)/10;
    printf("Media: %.1f\n",avg);

    if(avg>=7.0)printf("Aluno aprovado.\n");
    else if(avg<5.0)printf("Aluno reprovado.\n");
    
    else if (avg>=5.0 && avg<=6.9){
       printf("Aluno em exame.\n");
       scanf("%f",&ns);
       printf("Nota do exame: %.1f\n",ns);
       avgf= (avg+ns)/2;
       if(avgf>=5.0)printf("Aluno aprovado.\n");
       else printf("Aluno reprovado.\n");
       printf("Media final: %.1f\n",avgf);
       return 0;

    }

}