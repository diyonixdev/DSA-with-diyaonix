//optimal solution
#include<bits/stdc++.h>
using namespace std;

vector<int>moveZeros(vector<int>&nums){
    int j = -1;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i] == 0){
            j = i;  
            break;
        }
    }   
        
    if(j == -1) return nums;
    for(int i = j+1; i < n; i++){
        if(nums[i] != 0){
        swap(nums[i],nums[j]);  
        j++;
        }
    }   
    return nums;

}

int main(){
    int n;  
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> result = moveZeros(arr);

    for(int x : result){
        cout << x << " ";
    }
}

