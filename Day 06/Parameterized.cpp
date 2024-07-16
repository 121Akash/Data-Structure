#include<iostream>
using namespace std;
void print(int i , int sum){
       if(i<1){
              cout<<"sum sum of numbers :"<<sum;
              return;
       }
       else{
              print(i-1 ,sum+i );
       }
}


int main(){

       int n;
       cout<<"enter the number :";
       cin>>n;
       print(n ,0 );

}