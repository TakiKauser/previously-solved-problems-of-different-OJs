#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n, s;
    int res = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		//cin >> s;
		scanf("%1d", &s);
		if (s % 2 == 0) {
			res += i;
		}
	}
    cout << res << endl;

    return 0;
}
