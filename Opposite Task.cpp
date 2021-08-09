#include<iostream>
using namespace std;
int main(){
    int n,x,a,b;
    cin>>n;
    while(n--){
        cin>>x;
        if(x>10){
            a=x-10;
            b=10;
            cout<< a<< " " << b <<endl;
        }
        else{
            a = 0;
            b = x;
            cout<< a<< " " << b <<endl;
        }
    }
return 0;
}
