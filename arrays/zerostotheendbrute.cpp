// bruteforce approachcd arrays
#include<bits/stdc++.h>
using namespace std;

vector<int> moveZero(vector<int>&nums){    
    vector<int>temp;
    int n = nums.size();

    for(int i = 0; i < n; i ++){
        if(nums[i] != 0){
            temp.push_back(nums[i]);
        }
    }
    int j = 0;
    for(int i = 0; i < temp.size(); i++){
        nums[j] = temp[i];
        j++;
        
    }

    for(int i = temp.size(); i < n; i++){   
        nums[j] = 0;
        j++;
    } 
    return nums;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int>arr(n);

    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }

    vector<int> result = moveZero(arr);

    for(int num : result){
        cout << num << " ";
    }
}