#include<iostream>
using namespace std;
int main(){
    long long int n,k,x,req;
    cin>>n>>k;
    if(n%2==0) x=n/2;
    else x=(n/2)+1;
    if(k<=x) req=(2*k)-1;
    else req=(k-x)*2;
    cout<<req<<endl;
return 0;
}
