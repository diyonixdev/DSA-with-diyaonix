//better approach
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v){
    map<int,int>mpp;
    for(int i = 0; i < v.size(); i++){
        mpp[v[i]]++;
    }
    for(auto it : mpp){
        if(it.second > (v.size() / 2)){
            return it.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << majorityElement(v);
    
    return 0;
}