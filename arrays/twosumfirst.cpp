#include<bits/stdc++.h>
using namespace std;

string read(int n ,vector<int>book,int target){  
    map<int,int>mpp;

    for(int i = 0; i < n;i++){  
        int a = book[i];    
        int more = target - a;

        if(mpp.find(more) != mpp.end()){
            return "YES";
        }   
        mpp[a] = i;

    }
    return "NO";
}

int main(){
    int target;
    cout << "Enter the target:";
    cin >> target;

    int n;
    cout <<"Enter the size of the array: ";
    cin >> n;

    vector<int>book(n);
    for(int i = 0; i < n; i++){
        cin >> book[i];
    }
    cout <<"The two sum number result: ";
    cout << read(n,book,target);
}