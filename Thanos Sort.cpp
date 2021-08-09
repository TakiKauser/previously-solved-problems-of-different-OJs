#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[16];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0, t = n;
    while(t != 0){
        for(int i = 0; i < n; i+=t){
            int f=1;
            for(int j = i+1; j < i+t; j++){
                if(a[j] < a[j-1]){
                    f = 0;
                }
            }
            if(f) {
                return cout << t << endl, 0;
            }
        }
        t/=2;
    }
}
