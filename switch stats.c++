using namespace std;
#include<iostream>
main()
{
   char button;
   cout<<"Input a charecter: ";
   cin>>button;

   switch (button)
   {
   case 'a':
   cout<<"Hello";
    break;
    
    case 'b':
    cout<<"Namaste";
    break;

    case 'c':
    cout<<"Salut";
    break;

    case 'd':
    cout<<"Ciao";
    break;

    case 'e':
    cout<<"Mi hoa";
    break;

    default:
    cout<<"I am still learning more";
    break;
  
   }
}