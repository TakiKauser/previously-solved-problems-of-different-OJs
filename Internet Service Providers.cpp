#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    long long int n, c, t1 = 0, t2 = 0, des1 = 0, des2 = 0;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n >> c;
        if(n == 0){
            cout << "Case " << i << ": " << "0" << endl;
        }
        else{
            t1 = (c / (2 * n));
            t2 = (c / (2 * n)) + 1;
            des1 = t1 * (c - t1 * n);
            des2 = t2 * (c - t2 * n);
            if(des1 >= des2){
                cout << "Case " << i << ": " << t1 << endl;
            }
            else{
                cout << "Case " << i << ": " << t2 << endl;
            }
        }
    }
return 0;
}
