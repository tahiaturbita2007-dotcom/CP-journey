#include <stdio.h>
int main(){
    int n,x,y,z,i,count=0;
    scanf("%d",&n);
    if(n>=1 && n<=1000){
        for(i=0;i<n;i++){
            scanf("%d %d %d", &x, &y, &z);
            if((x==0||x==1)&&(y==0||y==1)&&(z==0||z==1)){
                if((x==1&&y==1)||(y==1&&z==1)||(z==1&&x==1)||(x==1&&y==1&&z==1)){
                    count++;
                }
            }
        }
    }
    printf("%d", count);

return 0;
}

