#include<iostream>
using namespace std;
int main(){
    int t,n,a=0,b=0,x1,x2,y1,y2;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        a = x1%2 + y1%2;
        b = x2%2 + y2%2;
        cout << "Case " << i << ": ";
        if( a == 1 && b !=1 ) cout << "impossible" << endl;
        else if( a != 1 && b ==1 ) cout << "impossible" << endl;
        else if( abs(x1-x2) == abs(y1-y2) ) cout << "1" << endl;
        else cout << "2" << endl;
    }
return 0;
}
