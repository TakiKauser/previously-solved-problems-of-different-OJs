#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t,  a = 0, b = 0, c = 0;
    int arr[123];
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    for(int j=1; j<=t;j++){
        for(int i=0; i<=2; i++){
            cin >> arr[i];
        }
             sort(arr,arr+3);
             a = arr[0];
             b = arr[1];
             c = arr[2];

        cout << "Case "<< j << ": ";
        if( (c*c) == (a*a) +(b*b)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
return 0;
}
