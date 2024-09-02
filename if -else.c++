// using namespace std;
// #include<iostream>
// main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;

//     if(a>b)
//     {
//         if (a>c)
//         {
//             cout<<a<<endl;
//        }

//        else{
//         cout<<c<<endl;
//        }
        
//     }

//     else{
//         if (b>c)
//         {
//             /* code */
//             cout<<b;

//         }

//         else{
//             cout<<c;
//         }
        
//     }
// }

using namespace std;
#include<iostream>
main()
{
    int n;
    cout<<"Enter any no. to check check odd or even: ";
    cin>>n;

    if(n%2==0)
    {
        cout<<"Even no.";
    }

    else if(n%2==!0)
    {
        cout<<"Odd no.";
    }

    else if (cin.fail())
    {
        /* code */cout << "Invalid input. Please enter a valid number." << endl;
    }
    {
        cout<<"Wrong input";
    }


}