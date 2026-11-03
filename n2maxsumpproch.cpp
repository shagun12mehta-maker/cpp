#include<iostream>
using namespace std;
int main(){
    int n=7;
    int ms=INT_MIN;
    int arr[7]={3,-4,5,4,-1,7,-8};
    for(int str=0;str<n;str++){
    int cs=0;
    for(int end=str;end<n;end++){
        cs+=arr[end];
        ms=max(cs,ms);}
    }
    cout<<ms<<endl;
    
    }
    
