#include<iostream>
using namespace std;
int main(){
    int t,x1,y1,x2,y2,M,x,y;
    cin >> t;
    for(int i=1; i<=t; i++){
        cout << "Case " << i << ":" <<endl;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> M;
        while(M--){
            cin >> x >> y;
            if((x >= x1 && x <= x2) && (y >= y1 && y <= y2)){
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
    }
return 0;
}
