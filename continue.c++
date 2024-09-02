using namespace std;
#include <iostream>
main()
{
    for(int date=1; date<=30;date++){
        if(date%2==0)
        {
            continue;
        }
        cout<<"Go out today";
    }
}