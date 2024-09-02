using namespace std;
#include<iostream>
main(){
         int n;

         cout<<"Enter any no. to check it is divisible by 2 or 3: ";
          cin>>n;

          if(n%2==0 && n%3==0)
          {
            cout<<"Divisible by both"<<endl;
          }

          else if(n%2==0)
          {
            cout<<"Divisible by only 2"<<endl;
          }

          else if(n%3==0)
          {
            cout<<"Divisible by only 3"<<endl;
          }

          else{

            cout<<"Divisible by none"<<endl;
          }

}