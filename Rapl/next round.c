#include <stdio.h>
int main(){
    int n,k,i,count=0;
    int scores[50];
    scanf("%d %d", &n, &k);
        if(n>=1 && n<=50 && n>=k){
            for(i=0;i<n;i++){
                scanf("%d", &scores[i]);
            }
            for(i=0;i<n;i++){
                if(scores[i]>=scores[k-1] && scores[i] > 0){
                    count++;
                }
            }
        printf("%d", count);
        }
return 0;
}
