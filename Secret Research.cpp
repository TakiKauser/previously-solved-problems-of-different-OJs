#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == "1" || n == "4" || n == "78") cout << "+" << endl;
        else if(n[n.size()- 1] == '5' && n[n.size()- 2] == '3') cout << "-" << endl;
        else if(n[n.size()- 1] == '4' && n[0] == '9') cout << "*" << endl;
        else if(n[0] == '1' && n[1] == '9' && n[2] == '0') cout << "?" << endl;
    }
return 0;
}
