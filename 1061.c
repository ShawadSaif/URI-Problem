#include<stdio.h>
int main()
{
    int d1,h1,m1,s1,d2,h2,m2,s2,td,th,tm,ts;
    scanf("%*s %d",&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("%*s %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    if(d1==d2){
        td=0;
        
        if(s2<s1){
            ts=s2+60-s1; 
            if(m2<=m1){
                tm=60+m2-m1-1;
                th=h2-h1-1;
            }
            else{
                 tm=m2-m1-1;
                  th=h2-h1;
            }
        }
        else{
            ts=s2-s1;
            if(m2<m1){
                tm=60+m2-m1;
                th=h2-h1-1;
            }
            else{
                tm=m2-m1   ;
                th=h2-h1;
            }
        }
    }

    else{
        if(s2>=s1){
            ts=s2-s1;
            if(m2<m1){
                tm=60+m2-m1;
                if(h2<=h1){
                  th=24+h2-1-h1;
                  td=d2-d1-1;
                }
                else {
                  th=h2-1-h1;
                  td=d2-d1;
                }
            }
            else{
                tm=m2-m1;
                if(h2<h1){
                  th=24+h2-h1;
                  td=d2-d1-1;
                }
                else {
                  th=h2-h1;
                  td=d2-d1;
                }
            }
        }
        else{
            ts=60+s2-s1;
            if(m2<=m1){
                tm=60+m2-m1-1;
                if(h2<=h1){
                  th=24+h2-1-h1;
                  td=d2-d1-1;
                }
                else {
                  th=h2-1-h1;
                  td=d2-d1;
                }
            }
            else{
                tm=m2-m1-1;
                if(h2<=h1){
                  th=24+h2-h1;
                  td=d2-d1-1;
                }
                else {
                  th=h2-h1;
                  td=d2-d1;
                }
            }        
        }
    }
    printf("%d dia(s)\n",td);
    printf("%d hora(s)\n",th);
    printf("%d minuto(s)\n",tm);
    printf("%d segundo(s)\n",ts);
  
    
    return 0;
}

