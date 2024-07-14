#include<bits/stdc++.h>
using namespace std;



int main(){
       int n ;
       cin>>n;
       int sum = 0;
       int temp = n ;
       while(n>0){
              int last = n%10;
              sum = sum + (last*last*last);
              n = n/10;
       }
       if(temp == sum){
              cout<<"true";
       }
       else{
              cout<<"false";
       }
       	
	
	
       	
}