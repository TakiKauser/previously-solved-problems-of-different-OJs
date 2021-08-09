#include<stdio.h>
int main()
{
    int n,x,i,count=0,a[1001];
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[x-1] && a[i]>0)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
