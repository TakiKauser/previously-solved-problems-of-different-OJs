#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

double a[1005][2];
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
       for(int i=0;i<n;i++)
       {
           scanf("%lf%lf",&a[i][0],&a[i][1]);
       }
       double l=-10000000,r=10000000;
       double mid;

       while(r-l>0.0000001)
       {
         mid=(l+r)/2;

         double sum=0;
         for(int i=0;i<n;i++)
         {
             if(a[i][1]+mid<0)
             {
                 sum=100000000;
                 break;
             }
            sum+=(a[i][0]/(a[i][1]+mid));
         }
         if(sum<m)
         {
             r=mid;
         }

         else
         {
             l=mid;
         }
       }
       printf("%.7lf\n",l);
    }
    return 0;
}
