#include<stdio.h>
int main()
{
    int n,i=0,a,b;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",i+1,a+b);
        i++;
    }

    return 0;
}
