#include<bits/stdc++.h>
using namespace std;
int main(){
    int h, w;
    while(cin >> h >> w){
        if(h == 0 && w == 0) return 0;
        for(int i = 1; i <= h; i ++){
            for(int j = 1; j <= w; j ++){
                if(i%2 == 1){
                    if(j%2 == 1)cout << "#";
                    else cout << ".";
                }
                else{
                    if(j%2 == 1)cout << ".";
                    else cout << "#";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
return 0;
}
