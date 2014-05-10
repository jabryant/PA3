// INSTRUCTIONS: 
//
// Create the class Resistor derived from the base class CircuitElement
// 
// The Resistor class should have string units and double resistance
// 
// Define a constructor that sets the string label, double resistance, string units 
// according to the input parameters.
// 
// Define a method get_value() that returns the resistance and
// and an accessor for the units get_units().
// 
// 


#include <iostream>
#include <string>
using namespace std;

class CircuitElement {
  public:
     CircuitElement(string l) : label(l) {};

     string get_label() const {return label;};

     virtual void set_label(string) {};
     virtual double get_value() const {return 0.0;};
     virtual void set_value() {};
     virtual string get_units() const {return "";};

  protected:
  	 string label;
} ;

ostream& operator<<(ostream& os,const CircuitElement& b) {
		cout << "Element "  << b.get_label() ;
		return os;
}

// --RESISTOR.CPP: DO NOT CHANGE THIS LINE OR ANYTHING BEFORE IT.

// Enter your code here.

class Resistor {
public:
	Resistor () {

	}
};

// --RESISTOR.CPP: DO NOT CHANGE THIS LINE OR ANYTHING AFTER IT.


ostream& operator<<(ostream& os,const Resistor& b) {
    os  << "Resistor "  << b.get_label()  
        << "(" << b.get_value() << " " << b.get_units() << ")" ;

    return os;
}

int main() {
   CircuitElement e("S_A");
   cout << e << endl;

   e.set_label("test no set_label");
   cout << e << endl;

   Resistor r("R1",2.2,"kΩ");
   cout << r << endl;

   r.set_value(3.3);
   cout << r << endl;

   
   Resistor r2("R2",0.1,"MΩ");
   r2.set_label("R_red");
   cout << r2 << endl;
}
