#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int x[4];
    for(int i = 0; i < 4; i++){
        cin >> x[i];
    }
    sort(x, x+4);
    cout << x[3] - x[0] << " " << x[3] - x[1] << " " << x[3] - x[2] << endl;
    return 0;
}
