#include <iostream>
using namespace std;

class cylinder {
	//class members
	public :
	double pi ;
	double radius;
	double height;

	//constructor function
	cylinder(){
		pi = 3.14159;
		
	};

	//member  functions
	void getRadius(){
		string strRadius;
		cout << "input radius of cylinder : ";
		
		getline(cin,strRadius);
		radius = stod(strRadius);
	};

	void getHeight (){
		string strHeight;

		//get height in string
		cout << "Input height of cylinder: ";
		getline(cin, strHeight);

		//convert string to double
		height = stod(strHeight);
	};

	//destructor function

	~cylinder(){
		double volume = pi * height * radius * radius;
		
		cout << "Volume of cylinder is : "<< volume << endl;
		
		 
	}
};

int main (){
	//intialising an object 
	cylinder obj1;
	obj1.getRadius();
	obj1.getHeight();
	return 0;
};