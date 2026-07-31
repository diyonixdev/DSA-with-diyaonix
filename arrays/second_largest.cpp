//most optimal solution to this problem
#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>&arr,int n){ 
    int largest = arr[0];
    int slargest = -1;
    
    for (int i = 0; i < n; i++){   
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }else if(arr[i] < largest &&  arr[i] > slargest){   
            slargest = arr[i];

        }
    }
    return slargest;

}

int secondSmallest(vector<int>&arr,int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] > smallest && arr[i] < ssmallest && arr[i] != ssmallest){  
            ssmallest = arr[i];
        }
    } return ssmallest;
    }

vector <int> getSecondOrderElement(vector<int>&arr,int n){
    int sLargest = secondLargest(arr,n);
    int sSmallest = secondSmallest(arr,n);
    return{sLargest,sSmallest};
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;


vector<int>arr(n);

for(int i = 0; i < n; i++){ 
    cin >> arr[i];

}
vector<int>result = getSecondOrderElement(arr,n); 

cout << "The second smallest number is: " << result[0];
cout << "The second largest number is : " << result[1];


}