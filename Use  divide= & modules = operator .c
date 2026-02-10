#include <stdio.h>

int main()
{
    int a, b,temp;
    scanf("%d%d",&a,&b);
    temp=a;
    a/=b;
    printf("%d",a);
    temp%=b;
    printf("%d",temp);

    return 0;
}