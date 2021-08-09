#include<bits/stdc++.h>
using namespace std;
bool compare(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n, cntr;
    cin >> n;
    string s[n];
    pair <int, string> a[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
        a[i].first = s[i].size();
        a[i].second = s[i];
    }
    sort(a, a+n);
    cntr = 1;
    for(int i = 1; i < n; i++){
        if(a[i].second.find(a[i-1].second) != -1) cntr++;
    }
    if(cntr == n){
        cout << "YES" << endl;
        for(int i = 0; i < n; i++){
            cout << a[i].second << endl;
        }
    }
    else cout << "NO" << endl;
}
