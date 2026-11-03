#include<iostream>
using namespace std;
int main(){
    int n=7;
    int ms=INT_MIN;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int cs=0;
    for(int str=0;str<n;str++){
        cs+=arr[str];
        ms=max(cs,ms);
    if(cs<0){
        cs=0;
    };
    }
    cout<<ms<<endl;
    
    }
    
