#include<bits/stdc++.h>
using namespace std;

vector<int> TwoSum(vector<int>a,int target){
    int left = 0;
    int right = a.size() - 1;   

    while(left < right){
        int sum =a[left] + a[right];
        if(sum == target){
            return{left+1,right+1};
        }
        if(sum < target)left++; 
        else right--;
    }
    return {};
}

int main(){
    int target;
    cout <<"Enter the target: ";
    cin >> target;

    int n;
    cout <<"Enter the size of array: ";
    cin >>n;
    
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int>result = TwoSum(a,target);
    if (!result.empty()){
        cout << result[0] <<" "<<result[1] <<endl;
    } else{
        cout << "No pariring found"<<endl;
    }

}