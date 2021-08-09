#include<iostream>
using namespace std;
int main()
{
    int n,x,y=0;
    cin>>n;
    while(n--){
        cin>>x;
        if(x==1){
            y+=1;

        }
    }
    if(y==0){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }


    return 0;
}
