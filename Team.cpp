#include<iostream>
using namespace std;
int main(){
    int n,x=0,y=0,a[1001];
    cin>>n;
    for(int j=1;j<=n;j++){
        for(int i=1;i<=3;i++){
            cin>> a[i];
            x+=a[i];
        }
        if(x>=2){
            y+=1;
        }
        x=0;
    }
    cout<<y<<endl;
return 0;
}
