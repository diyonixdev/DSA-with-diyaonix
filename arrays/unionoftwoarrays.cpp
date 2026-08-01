//optimal approach

#include<bits/stdc++.h>
using namespace std;


vector<int>sortedArray(vector<int>&a,vector<int>&b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int>unionArr;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            } i++; 
        }
        else{   
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
           
            }

            j++;
        }
    }

        while( i < n1){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            } i++; 
            }
        
        while(j < n2){
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            } j++;       
   } 
   return unionArr;
}

int main(){
    int n1; 
    cout << " Enter the size of the fist array : "; 
    cin >> n1;  

    int n2;
    cout << "Enter the size of second array:";
    cin >> n2;

    vector<int>a(n1);
    cout << "Enter the elements of first array";
    for(int i = 0; i < n1; i++){
        cin >> a[i];
    }   

    vector<int>b(n2); 
    cout <<"Enter the elements of second array";  
    for(int i = 0; i < n2; i++){
        cin >> b[i];
    }
    
    vector<int> result = sortedArray(a,b);

    cout << "union of two arrays are: ";
    for(int num : result){
        cout << num << " ";
    }

   

}