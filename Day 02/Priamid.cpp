#include<bits/stdc++.h>
using namespace std;
/*
1
2 2
3 3 3 
4 4 4 4
   
*/


int main(){
       int n ;
       cin>>n;
       	for(int i=0; i<n ;i++){

			//space
		for(int j =0; j<n-i-1 ;j++){
			cout<<" ";

		}
		//stars
		for(int j =0 ; j<2*i+1 ;j++){
			cout<<"*";
		}


		//space
		for(int j =0; j<n-i-1 ;j++){
			cout<<" ";

		}
		cout<<endl;
	}
       	
}