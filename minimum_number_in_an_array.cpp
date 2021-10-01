#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                s=arr[j];
                cout<<s;
                return 0;
            }
        }
}

}