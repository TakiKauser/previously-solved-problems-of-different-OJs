#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, h = 0, m = 0, s = 0;
    cin >> n;
    h = n / 3600;
    n %= 3600;
    m = n / 60;
    n %= 60;
    s = n;
    cout << h << ":" << m << ":" << s << endl;

return 0;
}
