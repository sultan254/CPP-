#include <iostream>
using namespace std;
class getName{
    //class member 
    public:
    string name;
    //class constructor 
    //Accessed by all objects after intialisation
    getName (){
        cout << " An object has been created " << endl;
    };
    // accessed after scope of object has ended
    ~getName(){
        cout << "An object has been deleted " << endl;
    };
    //class function
    void printName(){
        cout << "Your name is :" << name << endl;
    };  
};
int main (){
    //intialise an object 
    getName obj1;
    //access class members 
    obj1.name = " Sandrine";
    //access class functions
    obj1.printName();
};