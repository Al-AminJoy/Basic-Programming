#include<bits/stdc++.h>
using namespace std;
int main(){
int size=5;
int arr[size];
int temp,temp1;
cout<<"Enter Numbers : ";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
             if(arr[j]>arr[j+1]){
             temp=arr[j+1];
             temp1=arr[j];
             arr[j]=temp;
             arr[j+1]=temp1;
    }
        }

}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
