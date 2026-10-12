#include<stdio.h>
int main(){
     int a,b;
     scanf("%d %d", &a, &b);
     if(a<=b && a>=1 && a<=10 && b>=1 && b<=10){
         int year=0;
         while(a<=b){
             a*=3;
             b*=2;
             year++;
         }
         printf("%d", year);
     }
    
    return 0;
}