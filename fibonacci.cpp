#include<bits/stdc++.h>
using namespace std;
int main(){
int size;
cout<<"Enter How Many Number You Want To See : ";
cin>>size;
int temp1,temp2,temp3=0;
for(int i=0;i<size;i++){
    if(i==0){
        cout<<i<<endl;
        temp1=0;
    }
    else if(i==1){
        cout<<i<<endl;
        temp2=1;
    }
    else{

        temp3=temp1+temp2;
        temp1=temp2;
        temp2=temp3;

    cout<<temp3<<endl;

    }

}
}
