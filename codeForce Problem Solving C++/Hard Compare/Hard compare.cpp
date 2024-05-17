#include <iostream>
 
#include <cmath>
 
using namespace std;
 
int main(){
	long long num1 ;
	long long num2 ;
	long long num3 ;
	long long num4 ;
	cin>>num1;
	cin>>num2;
	cin>>num3;
	cin>>num4;
	
	long long pow1 = pow(num1,num2);
	long long pow2 = pow(num3,num4);
	
	if(pow1>pow2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
	 
