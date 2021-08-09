#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        int n;
        vector <int> ar;
        while(ss >> n){
            ar.push_back(n);
        }
        int mx = 0;
        int m = ar.size();
        for(int i = 0; i < m; i++){
            for(int j = i+1; j < m; j++){
                mx = max (mx, __gcd(ar[i], ar[j]));
            }
        }
        cout << mx << endl;
    }
return 0;
}
