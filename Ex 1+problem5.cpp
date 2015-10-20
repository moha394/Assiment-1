#include <iostream>
#include <string>
using namespace std;

class Bank
{
public:
	void account(string x , int y)
	{
		name=x;
		number=y;
		cout<< "The name is_ " << x <<endl ; 
		cout<< "The Amount is: "<<y << endl;
	}
	
	
private:
	string name;
	int number;
};




int main(){
	Bank Costomer;
	Costomer.account("Moahmed",10000000);

	system("pause");

}

