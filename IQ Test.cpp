#include<iostream>
using namespace std;
int main(){
    int n,counter1=0,counter2=0,req;
    int a[101];
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i] % 2 == 0) counter1+=1;
        else counter2+=1;
    }
    for(int i=1; i<=n; i++){
        if(counter1 > counter2){
            if(a[i]%2 != 0) req = i;
        }
        else{
            if(a[i]%2 == 0) req = i;
        }
    }
    cout<<req<<endl;

return 0;
}
