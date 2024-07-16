#include<iostream>
using namespace std;


void cubes(int i , int sum){
       if(i<1){
              cout<<"the sum :"<<sum;
              return;

       }
       else{
              cubes(i-1 , sum+(i*i*i));
       }
}


int main(){
       int n ;
       cout<<"enter the value of : ";
       cin>>n;

       cubes(n,0);
}
