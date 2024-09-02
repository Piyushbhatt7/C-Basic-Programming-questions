using namespace std;
#include<iostream>
main()
{
    int i,j,n;
    cout<<"Enter any no: ";
    cin>>n;

    cout<<"Prime no. upto "<<n<<" are: ";
    
    for(i=2;i<=n;i++)
    {
        bool isPrime = true;

        for ( j = 2; j<= i/2; j++)
        {
            if(i%j==0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            cout<<i<<" ";
        }
        
    }
}

