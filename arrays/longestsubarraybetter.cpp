//better approach
#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumk(vector<int>&a,long long k){
    map<long long,int>PreSumMap;
    int maxLen = 0;
    int sum = 0;

    for(int i = 0; i < a.size(); i++){  
        sum = sum + a[i];
        if(sum == k){
            maxLen = max(maxLen,i+1);
        }
        int rem = sum - k;
        if(PreSumMap.find(rem) != PreSumMap.end()){
            int len = i - PreSumMap[rem];
            maxLen = max(maxLen,len);
        }
        if(PreSumMap.find(sum) == PreSumMap.end())
        PreSumMap[sum] = i;
    } 
    return maxLen;
}

int main(){
    int n;
    cout <<"Enter te size of array";
    cin >> n;
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    vector<int>a(n);
    cout <<"Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    cout << "The length of longest subarray is : ";
    cout <<  longestSubarrayWithSumk(a,k);

}