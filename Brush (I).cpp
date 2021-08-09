#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T, n, x = 0;
    int arr[123];
    cin >> T;
    for( int i = 1; i <=T; i++ ){
        cin >> n;
        x = 0;
        for( int j = 0; j < n; j++ ){
            cin >> arr[i];
            if( arr[i]>0 ) x += arr[i];
        }
        cout << "Case " << i << ": " << x << endl;
    }
return 0;
}
