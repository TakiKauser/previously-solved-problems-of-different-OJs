#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    long long int c=a*b;
    c-=a;
    c+=1;
    cout << c ;
return 0;
}
