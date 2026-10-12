#include<stdio.h>
int main(){
     int a,b,c,op1,op2,op3,op4,op5,op6, max;
     scanf("%d %d %d", &a, &b, &c);
     if(a>=1 && a<=10 && b>=1 && b<=10 && c>=1 && c<=10){
         op1=a*b*c;
         op2=a*b+c;
         op3=a*(b+c);
         op4=a+b*c;
         op5=(a+b)*c;
         op6=a+b+c;
         
         max=op1;
         if(max<op2)
            max=op2;
         if(max<op3)
            max=op3;
         if(max<op4)
            max=op4;
         if(max<op5)
            max=op5;
         if(max<op6)
            max=op6;
            
         printf("%d", max);
     }
    
    
    return 0;
}