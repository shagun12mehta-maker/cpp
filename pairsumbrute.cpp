#include<iostream>
using namespace std;
int main(){
     int n=7;
     int arr[7]={3,-4,5,4,-1,7,-8};
    int target=9;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
