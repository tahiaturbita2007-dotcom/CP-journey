#include <stdio.h>
int main()
{
    int n,p[100];
    double fraction;
    scanf("%d", &n);
    int i = 0;
    int sum = 0;
    while(i<n){
        scanf("%d", &p[i]);
        sum += p[i];
        i++;
    }
    fraction = (double)sum / n;
    printf("%.12f", fraction);
    return 0;
}
