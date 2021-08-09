#include<bits/stdc++.h>
using namespace std;
int main(){
    char s;
    bool flag = 1;
    while((scanf("%c",&s)) != EOF){
        if(s == '"'){
            if(flag) cout << "``";
            else cout << "''";
            flag = !flag;
        }
        else cout << s;
    }
return 0;
}
