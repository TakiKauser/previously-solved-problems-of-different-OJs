#include<stdio.h>
int main()
{
    int a,b,c,n,i=0,count=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d%d",&a,&b);
        c=b-a;
        if(c>=2)
        {
            count++;
        }
        i++;
    }
    printf("%d\n",count);

    return 0;
}
