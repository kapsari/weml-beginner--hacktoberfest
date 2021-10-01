#include<bits/stdc++.h>
using namespace std;

int swap(int arr[],int first,int second){
    int temp=arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
}






int main(){
int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int i=0;
    while(i<n){
        int correct=arr[i];
        if(arr[i]<n && arr[i]!=arr[correct]){
            swap(arr,i,correct);
        } else {
            i++;
        }


    }

    

    for(int index=0;index<n;index++){
        if(arr[index]!=index){
            cout<<index;
        } 
    }

    // cout<<n;


}