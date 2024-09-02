 using namespace std;
 #include<iostream>
int main(){

    int n;
    int sum=0;
    

    cout<<"Enter any number: ";
    cin>>n;

    for(int counter = 1; counter<=n; counter++){
        sum=sum+counter;
    }
      cout<<sum<<endl;

 }