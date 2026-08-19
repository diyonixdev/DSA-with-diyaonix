#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumk(vector<int>a,int k){    
    int left = 0; 
    int right = 0;
    int maxLen = 0;
    long long sum = a[0];
    int n = a.size();

    while(right < n){   
        while(left < right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen,right - left + 1);
        }
        right++;
        if(right < n ){
            sum += a[right];
        }
    }
    return maxLen;

}

int main(){
    int k;
    cout << "Enter the value of k :";
    cin >>k;

    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    vector<int>a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Longest subarray with sum k: ";
    cout << longestSubarrayWithSumk(a,k);

}