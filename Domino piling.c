#include <stdio.h>

int main()
{
    int M,N,max_dominoes;
    scanf("%d %d", &M, &N);
    if(M>=1 && M<=16 && N>=1 && N<=16 && M<=N)
        printf("%d", (M*N)/2);

    return 0;
}
