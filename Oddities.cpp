#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        if (a%2==0){
            printf("%d is even\n",a);
        }
        else {
            printf("%d is odd\n",a);
        }
    }
return 0;
}
