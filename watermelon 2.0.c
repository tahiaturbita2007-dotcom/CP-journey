#include<stdio.h>
int main(){
int w;
scanf("%d",&w);
if(w==0||w>=102||w==2||w==4||w%2!=0)
    printf("NO");
else
    printf("YES");
    return 0;
}

