#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[6] = {1,1,2,2,2,8}, b[6];
    for(int i = 0; i < 6; i++){
        cin >> b[i];
        cout << a[i] - b[i]<< " ";
    }
    cout << endl;

return 0;
}
