#include<iostream>
using namespace std;
int main(){
       // a school had follow followuing rules for grading system 
       /*
        below 25 -f
       25 - 44 grade e
       45 - 49 grade d
       50 - 59 grade c
       60 - 79 grade b
       80 -100 grade a

       */

      int marks;
      cout<<"enter the marks of students :";
      cin>>marks;

      if(marks >=80 && marks ==100){
       cout<<"the grade of student : A"<<endl;

      }
      else if(marks >= 60 &&marks<=79){
         cout<<"the grade of student : B"<<endl;
      }

         else if(marks >= 50 &&marks<=59){
         cout<<"the grade of student : C"<<endl;
      }

         else if(marks >= 45 &&marks<=49){
         cout<<"the grade of student : D"<<endl;
      }
         else if(marks >= 25 &&marks<=44){
         cout<<"the grade of student : E"<<endl;
      }

      else{
          cout<<"the grade of student : F"<<endl;

      }

       return 0;
}