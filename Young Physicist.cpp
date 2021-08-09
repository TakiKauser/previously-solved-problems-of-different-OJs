#include<iostream>
using namespace std;
int main(){
    int n,X=0,Y=0,Z=0,x,y,z;
    cin >> n;
    while(n--){
        cin>> x >> y >> z;
        X += x;
        Y += y;
        Z += z;
    }
    if(X==0 && Y==0 & Z==0) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
return 0;
}
