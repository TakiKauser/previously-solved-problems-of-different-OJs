#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    string a;
    cin >> a;
    int n = a.size();
    for(int i = 0; i < n; i++){
        a[i] = tolower(a[i]);
        if(!(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'y')){
            cout << "." << a[i];
        }
    }
    return 0;
}
