#include<iostream>
using namespace std;
int main(){
       /*
       take the age rom the user and decide the accodingly
       1. if age < 18
       print not eligible for job
       2.if age >=18
       print eligilabe for job
       3. if age >=55 and age <=57
       print eligilable for retirement is comming soon
       if age > 57
       print retirement time
       */

      int age;
      cout<<"enter the age of person";
      cin>>age;

      if(age< 18){
       cout<<"not eligible";
      }
      else if(age <55){
       cout<<"the person is eligible";

      }

      else if(age<=57){
       cout<<"eligible for job , but reteriment comming soon";
      }

      else{
       cout<<"retirement time";
      }



       return 0;
}