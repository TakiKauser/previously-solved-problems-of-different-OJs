#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t = 1, req = 1, des = 1;
    cin >> n;
    int m = n;
    while(m > 0){
        des = 1;
        while(n > 0){
            des *= n % 10;
            n /= 10;
        }
        req = max(des, req);
        m /= 10;
        t = t * 10;
        n = m * t - 1;
    }
    cout << req << endl;

    return 0;
}
