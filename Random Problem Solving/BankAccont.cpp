#include <iostream >

using namespace std;
class BankAccount{
	private:
		int accountNum;
		int balance;
	public:
		BankAccount(int ac , int b) : accountNum(ac) ,balance(b){}
		
	void setAccountNum(int ac){
		accountNum = ac;
	}

	int getAccountNum() const{
		return accountNum;
	}
	
	void setBalance(int b){
		balance = b;
	}
	
	int getBalance() const{
		return balance;
	}
};
int main(){
	int ac;
	int b;
	 cin>>ac;
	 cin>>b;
	 
	 cout<<"Account Number is :"<<ac<<endl;
	 cout<<"Balance is :"<<b<<endl;

}




