#include <iostream>

using namespace std;
	class car{
		private:
			string company;
			string modle;
			int year;
		public:
			car(string c,string m,int y):company(c),modle(m),year(y){}
			void setCompany(string c){
				company = c;
			}
			
			string getCompany() const {
				return company;
			}
			
			void setModel(string m){
				modle = m;
			}
			
			string getModle() const{
				return modle;
			}
			
			void setYear(int y){
				year = y;
			}
			
			int getYear() const{
				return year;
			}
	};
	int main(){
		string c;
		string m;
		int y;	
		
		cout<<"Enter Name of your car company :"<<endl;
		cin>>c;
		
		cout<<"Enter model of your car :"<<endl;
		cin>>m;
		
		cout<<"Enter year of your car company :"<<endl;
		cin>>y;
		
		car Car(c,m,y);
		cout<<"Name of your company is:"<<Car.getCompany()<<endl; 
		cout<<"your Modle is:"<<Car.getModle()<<endl; 
		cout<<"Year of your car is:"<<Car.getYear()<<endl; 
		
	}
	
	
	
	
	
