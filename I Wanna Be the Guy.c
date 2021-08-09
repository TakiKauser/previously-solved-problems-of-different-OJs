#include<stdio.h>
    int main()
    {
        int n,p,q,i,j,a[110],b[110],x[110],count=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            x[i-1]=i;
        }
        scanf("%d",&p);
        for(i=0;i<p;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&q);
        for(i=0;i<q;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<p;j++)
            {
                if(a[j]==x[i])
                {
                    x[i]=0;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                if(b[j]==x[i])
                {
                    x[i]=0;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(x[i]==0)
            {
                count++;
            }
        }
        if(count==n)
        {
            printf("I become the guy.\n");
        }
        else
        {
            printf("Oh, my keyboard!\n");
        }

        return 0;
    }
