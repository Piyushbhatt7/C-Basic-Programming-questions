using namespace std;
#include<iostream>
main(){
    // int a=10;
    // int b;

    // b=a++; //++a
    // cout<<a<<" "<<b<<endl;

    //   int i=1;
    //   int j=2;
    //   int k;
      
        //1//2  //1   //2   //3  //4   
    // k= i+j + i++ + j++ + ++i + ++j

    // int i=0;

    // i= i++ - --i + ++i - i--;
    // cout<<i;
      //1  -  0  +  1  - 0

    //   int i=1, j=2, k=3;

    //   int m = i-- - j-- - k--;

    //   cout<<i<<endl; //0
    //   cout<<j<<endl; //1
    //   cout<<k<<endl; //2
    //   cout<<m<<endl; //-4

    int i=10, j=20, k;

     //10    //9   //19  //20  //9  //20   //10 //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl; //10 //9 //10
    cout<<j<<endl; //19 //20 //19 //20
    cout<<k<<endl; //-20





}
