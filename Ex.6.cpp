#include <iostream>
#include <string>
using namespace std;

class Move
{
public:
	Move(double a , double b)
	{
		
		x=a;
		y=b;
		cout<< a << endl ; 
		cout<< b << endl ;
		
	}
	void showmove() const {
		cout << "x is " << x <<endl; 
		cout << "y is " << y <<endl ; 

	}
	Move add(const Move & m )const{
		double xnew= this->x+m.x;
		double ynew = this ->y+m.y;
		Move mo(xnew,ynew);
		return mo;

	}
	void reset(double a , double b ){
	x=a;
	y=b;
	}
private:
	double x;

	double y ;
};




int main(){
	 Move mo(0,0);
  cout << "initial move object:\n";
  mo.showmove();
  cout << "reset x=1,y=2:\n";
  mo.reset(1,2);
  mo.showmove();
  cout << "add x by 3, and y by 4:\n";
  Move mo2(3,4);
  mo = mo.add(mo2);
  mo.showmove();
 
	system("pause");
	return 0; 
}

