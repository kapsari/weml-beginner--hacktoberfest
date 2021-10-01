#include<bits/stdc++.h>
using namespace std;





int swap(int arr[],int n,int k){

}

void bubblesort(int arr[],int n){
    bool swap=false;
    for(int j=0;j<n;j++){
        for(int k=1;k<n-j;k++){
            if(arr[k]<arr[k-1]){
                int temp=arr[k];
                arr[k]=arr[k-1];
                arr[k-1]=temp;
                swap=true;
            }
        }
        if(!swap){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}




int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubblesort(arr,n);

}