#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cout<<"Enter The Number : ";
cin>>num;
int fact=1;
for(int i=num;i>0;i--){
    fact=fact*i;
}
cout<<fact;
return 0;
}
