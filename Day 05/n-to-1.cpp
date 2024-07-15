//print the number from n to 1 with using the i+1 method


#include<bits/stdc++.h>
using namespace std;

void number(int i , int n){

       if(i<1){
              return;
       }
       
        
        cout<<i<<" ";
        number(i-1 , n);

       
      
}


int main(){
       int n ;
       
       cout<<"enter the number :";
       cin>>n;
       int  i=n;
       number(i , n);

     
       	
	
       return 0;
       	
}