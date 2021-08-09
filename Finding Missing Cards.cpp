#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, b;
    int s[13]={0}, h[13]={0}, c[13]={0}, d[13]={0};
    char ch;
    cin >> n;
    while(n--){
        cin >> ch >> b;
        if(ch == 'S') s[b-1] = b;
        else if(ch == 'H') h[b-1] = b;
        else if(ch == 'C') c[b-1] = b;
        else if(ch == 'D') d[b-1] = b;
    }
    for(int i = 0; i < 13; i++){
        if(s[i] == 0) cout << "S " << i+1 << endl;
    }
    for(int i = 0; i < 13; i++){
        if(h[i] == 0) cout << "H " << i+1 << endl;
    }
    for(int i = 0; i < 13; i++){
        if(c[i] == 0) cout << "C " << i+1 << endl;
    }
    for(int i = 0; i < 13; i++){
        if(d[i] == 0) cout << "D " << i+1 << endl;
    }

return 0;
}
