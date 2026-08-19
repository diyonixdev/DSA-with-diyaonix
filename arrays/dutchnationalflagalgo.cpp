#include<bits/stdc++.h>
using namespace std;
//using Dutch National Flag Algorithm  to sort 0s,1s and 2s

void SortArray(vector<int>&arr,int n){
    int low = 0;
    int mid = 0;
    int n = arr.size();
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of Array :";
    cin >>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    SortArray(arr,n);   
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }     


}
