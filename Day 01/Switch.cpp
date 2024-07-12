#include<iostream>
using namespace std;
int main(){
       /*
       take the day no. and print the corrosponding day
       */

      int day;
      cin>>day;
      switch (day)
      {
      case 1:
       cout<<"Monday";
       break;

       case 2:
       cout<<"Tuesday";
       break;

       case 3:
       cout<<"Wednesday";
       break;

       case 4 :
       cout<<"Thrusday";
       break;

       case 5:
       cout<<"Friday";
       break;

       case 6:
       cout<<"Saturday";
       break;

       case 7:
       cout<<"Sunday";
       break;
      
      default:cout<<"worng entry";
       break;
      }
       return 0;
}