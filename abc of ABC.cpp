#include<bits/stdc++.h>
using namespace std;
int main(){
        string s;
        int  a =0 , b = 0, c = 0;
        cin >> s;
        for(int i = 0; i < 3; i++){
                if(s[i] == 'a') a++;
                else if(s[i] == 'b') b++;
                else if (s[i] == 'c') c++;
        }
        if(a == 1 && b == 1 && c == 1) cout << "Yes" << endl;
        else cout << "No" << endl;

return 0;
}
