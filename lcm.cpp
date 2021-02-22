#include<bits/stdc++.h>
using namespace std;
int main(){
int num1,num2,gcd,lcm;
cout<<"Enter The Numbers  : ";
cin>>num1>>num2;
int max=(num1>num2)? num1:num2;
for(int i=1;i<=max;i++){
    if(num1%i==0 && num2%i==0){
        gcd=i;
    }
}
lcm=(num1*num2)/gcd;
cout<<lcm;
return 0;
}
