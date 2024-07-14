#include<iostream>
using namespace std;

int main(){
	// Write your code here
	int n;
     
	cin>>n;
    int temp = n;
	 int Pallindrome = 0 ;
        while(n>0){
            int lastNo = n%10;
            Pallindrome = (Pallindrome *10) + lastNo;
            n = n/10;
        }
      if(temp==Pallindrome){
       cout<<"true";
      }
      else{
       cout<<"false";
      }
     
   

	
}