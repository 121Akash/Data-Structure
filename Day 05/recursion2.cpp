//print the number from 1 to n with using the i+1 method


#include<bits/stdc++.h>
using namespace std;

void number(int i , int n){

       if(i<1){
              return;
       }
       
        number(i-1 ,n);
        cout<<i<<" ";

       
      
}


int main(){
       int n ;
       
       cout<<"enter the number :";
       cin>>n;
       int  i=n;
       number(i , n);

     
       	
	
       return 0;
       	
}