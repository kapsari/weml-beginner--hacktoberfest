#include<bits/stdc++.h>
using namespace std;

int dis(int arr[],int n){
    bool distinct=true;
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                distinct=false;
                break;
            }
        }
        if(distinct==true){
            count++;
        }
    }

    return count;

}





int main(){
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<dis(arr,n)<<endl;
}