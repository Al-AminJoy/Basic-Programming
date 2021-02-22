#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter The Range from 0 : ";
    cin>>size;
    int flag=0;
    for(int i=2; i<size; i++)
    {
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==1)
        {

            flag=0;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
