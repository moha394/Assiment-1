#include <iostream>
#include <string>
using namespace std;

class Bank
{
public:
	
	Bank (string z, int c)
	{
		setName (z , c);

	}
	
	void setName(string x , int y)
	{
		name=x;
		number=y;
		
		
	}
				
	string getName(){
		return name ;	
	}
	int getValue(){
	return number ; 
	}
private:
	string name;
	int number;
};




int main(){
	Bank Customer("Mohamed Ahmed" , 1000000);
	cout << Customer.getName() << endl;
	cout << Customer.getValue() << endl;
	
	

	system("pause");

}

