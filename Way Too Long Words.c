#include<stdio.h>
int main()
{
    int i=1,n,L=0;
    char a[110];
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%s",a);
        L=strlen(a);
        if(L<=10)
        {
            printf("%s\n\n",a);
        }
        else
        {
            printf("%c%d%c\n\n",a[0],L-2,a[L-1]);
        }
        i++;
    }


    return 0;
}
