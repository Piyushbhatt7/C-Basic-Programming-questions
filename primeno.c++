using namespace std;
#include<iostream>
main()
{
    int i,n;
    cout<<"Enter any no. ";
    cin>>n;

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}