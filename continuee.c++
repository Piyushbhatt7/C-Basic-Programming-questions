using namespace std;
#include<iostream>
main()
{
    for(int i=0; i<100;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
}