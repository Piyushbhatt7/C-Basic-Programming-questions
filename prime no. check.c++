using namespace std;
#include<iostream>
main(){
    int n,i;

    cout<<"Enter any no. to check wheater the no. is prime or not: ";
    cin>>n;

    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"It is not a prime no ";
            break;
        }

    }
       if(i==n){
        cout<<"It is a prime no.";
    }

}