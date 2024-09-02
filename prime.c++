using namespace std;
#include<iostream>
main()
{
    int n;
    int i;
    cin>>n;

    for(i=2;i<n;i++)
    {
        if(n%i==0){
            cout<<"It is a non-prime";
            break;
        }
    }
    if(i==n)
    {
            cout<<"Prime no."<<endl;
    }

}