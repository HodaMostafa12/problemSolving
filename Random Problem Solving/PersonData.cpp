#include <iostream>
using namespace std;
	class Person{
		private:
			string name ;
			string country;
			int age;
		public :
		Person(string n,string c, int a) : name(n),country(c),age(a){}
		
		void setName(string n)	{
			name = n;
		}
		
		string getName() const {
			return name;
		}
		
		void setCountry(string c)	{
			country = c;
		}
		
		string getCountry() const {
		return country;
		}
		
		void setAge(int a)	{
			age = a;
		}
		
		int getAge() const {
		return age;
		}
	};
	int main(){
		string n;
		string c;
		int a;
		
		cout<<"Enter your Name :"<<endl;
		cin>>n;
		
		cout<<"Enter your Age :"<<endl;
		cin>>a;
		
		cout<<"Enter your Country :"<<endl;
		cin>>c;
		
		Person person(n,c,a);
		
		cout<<"your name is :"<<person.getName()<<endl;
		cout<<"your Country is :"<<person.getCountry()<<endl;
		cout<<"your Age is :"<<person.getAge()<<endl;
	}
