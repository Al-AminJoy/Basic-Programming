#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
int number;
int qube=0;
int remind;
cout<<"Enter Number : ";
cin>>num;
number=num;
while(number>0){
    remind=number%10;
    number=number/10;
    qube=qube+(remind*remind*remind);
}
if(qube==num){
    cout<<"Armstrong Number";
}
else{
    cout<<"Not a Armstrong Number";
}
return 0;
}
