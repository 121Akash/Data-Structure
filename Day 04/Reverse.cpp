#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x;
	cin>>x;
	 int reverse = 0 ;
        while(x>0){
            int lastNo = x%10;
            reverse = (reverse *10) + lastNo;
            x = x/10;
        }
        cout<<reverse;
   

	
}