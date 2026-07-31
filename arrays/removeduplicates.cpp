
//most optimal approach to remove duplicates elements in sorted array

#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>&nums){
    int i = 0;
    int n = nums.size();

    for(int j = 1; j < n; j++){
        if(nums[j] != nums[i]){
            nums[i + 1] = nums[j];
            i++;
        }
    } return i+1;
}

int main(){

int n;
cout << "Enter the size of the array";
cin >> n;

vector<int>nums(n);

for(int i = 0; i < n; i++){
    cin >> nums[i];
} 

int remove_duplicate = removeDuplicate(nums);

cout << " The size of the elements after getting removed duplicates are: " << remove_duplicate;

}

/*
int remove_duplicates(vector<int>&nums){
int n = nums.size();  
set<int>st;
for(int i = 0; i < n; i++){ 
    st.insert(nums[i]);

}

index = 0;
for(auto it : st){  
   nums[index] = it;
   it++;
}
   Brute force approach using set. It uses set and stores unique elements.

*/
