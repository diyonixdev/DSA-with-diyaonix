
//brute force solution for longest Subarray with sum k

#include <bits/stdc++.h>
using namespace std;

int LongestSubarray(vector<int>&arr,int k){
    int n = arr.size();
    int maxLen=0;
    

    for(int i = 0; i < n; i++){
        int sum = 0;    
        for(int j = i; j < n; j++){
            sum = sum + arr[j]; 
            if (sum == k){
                maxLen = max(maxLen,j-i+1);
            }
        }
    }
    return maxLen;
}

int main(){
    int n; 
    int k;
    cout << " Enter k: ";
    cin >> k;
    cout << "Enter the size of Array: ";
    cin >> n;   
    cout << "Enter the elements of Array : ";

     vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }   
    
    cout << "The longest SubArray Length: "
         << LongestSubarray(arr,k);

    return 0;
}

