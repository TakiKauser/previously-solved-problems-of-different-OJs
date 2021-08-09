#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    double d, v, u, t1, t2;
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> d >> v >> u;
        if((v >= u) || (u == 0) || (v == 0))
        {
            cout << "Case " << i+1 << ": can't determine" << endl;
            continue;
        }
        t1 = d / u;
        t2 = d / (sqrt((u*u)-(v*v)));
        cout << "Case " << i+1 << ": " << fixed << setprecision(3) << abs(t2-t1) << endl;
    }
    return 0;
}
