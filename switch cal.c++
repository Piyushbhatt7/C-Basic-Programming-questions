using namespace std;
#include<iostream>
main()
{
     float num1, num2;
     int sum;
     char oper;

     cout<<"Enter any 2 no.: ";
     cin>>num1>>num2;

     cout<<"Enter any one operator (+,-,*,/): ";
     cin>>oper;
     
     switch (oper)
     {
     case '+':

        sum=num1+num2;
        cout<<sum;
        break;

    case '-':
        sum=num1-num2;
        cout<<sum;
        break;

    case '*':
    sum=num1*num2;
    cout<<sum;
    break;

    case '/':
    sum=num1/num2;
    cout<<sum;
    break;
     
     default:
        break;
     }

}