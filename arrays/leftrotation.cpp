#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>&nums,int d){  
    int n = nums.size();
    d = d % n;  
    int temp[d];

    for(int i = 0; i < d ; i++){    //copying d elemets 
        temp[i] = nums[i];
    }

    for(int i = d; i < n; i++){
        nums[i - d] = nums[i]; //shifting the elements
    }

    for(int i = n-d; i < n; i++){
        nums[i] = temp[i-(n-d)];
    }


    
}

int main(){
    int n; 
    cout << " Enter the size of array: ";
    cin >> n;

    int d;
    cin >> d;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    rotate(arr,d);

    for(int i = 0; i < n; i++){
        cout << arr[i];
    }

}