#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, req = 0;
    cin >> n;
    while(n != 0){
        req += n % 2;
        n /= 2;
    }
    cout << req << endl;

    return 0;
}
