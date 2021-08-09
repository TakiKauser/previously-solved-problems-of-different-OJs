#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long int sum=0;
    cin >> n;
    vector <int> v;
    for (int i=0;i<n;i++){
        int data;
        cin >> data;
        sum+=data;
        v.push_back(data);
    }
    int max=*max_element(v.begin(),v.end());
    int min=*min_element(v.begin(),v.end());
    cout << min << " " << max << " " << sum << endl;
return 0;
}
