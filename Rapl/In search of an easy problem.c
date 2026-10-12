#include <stdio.h>
int main(){
    int n,i,count=0;
    int response[100];
    scanf("%d", &n);
    if(n>=1&&n<=100){
        for(i=0;i<n;i++){
            scanf("%d", &response[i]);
            if(response[i]!=0 && response[i]!=1)
                return 1;
            else{
                if(response[i]==1)
                    count++;
            }
        }
    }
    if(count!=0)
        printf("HARD");
    else
        printf("EASY");
return 0;
}