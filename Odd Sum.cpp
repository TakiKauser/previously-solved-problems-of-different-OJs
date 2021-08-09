#include<bits/stdc++.h>
using namespace std;
int main(){
     int n, i, a, b;
     int sum = 0;
     cin >> n;
     for(i = 0; i < n; i++){
          cin >> a >> b;
          if(a%2==1){
               sum = 0;
               for(a; a <= b; a+=2) sum+=a;
          }
          else if(a%2 == 0){
               sum = 0;
               a = a+1;
               for(a; a <= b; a+=2){
                    sum += a;
               }
          }
          printf("Case %d: %d\n", i+1, sum);

     }


     return 0;
}
