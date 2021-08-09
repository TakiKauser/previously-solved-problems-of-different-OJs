#include<iostream>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,x,y,req;
    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> x >> y;
        req = (abs(x-y)*4) + 19 + (x*4);
        cout << "Case "<< i << ": " << req << endl;;
    }
return 0;
}
