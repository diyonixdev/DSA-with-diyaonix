#include<bits/stdc++.h>
using namespace std;

int second_largest(vector<int>&arr,int n){    
    sort(arr.begin(),arr.end());    
    int largest = arr[n-1]; 
    
    for(int i = n-2; i < arr.size(); i++){
        if (arr[i] != largest ) 
        return arr[i];
        
    }
    return -1; 
 

}



int main(){
    int n;
    cout << " Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    second_largest(arr,n);

  
    cout << " The  second  largest element is : " << second_largest(arr,n)  << endl;
    

}