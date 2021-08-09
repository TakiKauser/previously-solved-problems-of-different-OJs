#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, t1, t2, h1, h2, m1, m2, H, M;
    scanf("%2d:%2d%2d:%2d",&h1, &m1, &h2, &m2);
    t1 = h1*60 + m1;
    t2 = h2*60 + m2;
    t = (t1 + t2)/ 2;
    H = (t/60);
    M = (t%60);
    if(H<10 && M<10) printf("0%d:0%d\n", H, M);
    else if(H<10) printf("0%d:%d\n", H, M);
    else if(M<10) printf("%d:0%d\n", H, M);
    else printf("%2d:%2d\n", H, M);

return 0;
}
