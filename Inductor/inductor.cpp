// INSTRUCTIONS: 
//
// You are provided the specification for an Inductor class
// 
// Series connections of inductors are indicated by serial  or the + operator.
// Parallel connections of inductors are indicated by parallel or the * operator.
//
// Circuits review: 
//    L_series = L_1 + L_2
//    L_parallel = L_1 * L_2 (L_1 + L_2)
//
// Your task is to implement the class.
//
// An overload for the operator<< for Inductor's is already provided.


#include <iostream>
#include <string>
using namespace std;

class Inductor
{
public:
    Inductor();
    Inductor(double l);

    Inductor serial(const Inductor& l2) const;
    Inductor parallel(const Inductor& l2)const;

    double get_inductance() const;

private:
    double inductance;    
};

Inductor operator+(const Inductor& c1, const Inductor& c2);
Inductor operator*(const Inductor& c1, const Inductor& c2);

ostream& operator<<(ostream& os,const Inductor& c1);


// --INDUCTOR.CPP: DO NOT CHANGE THIS LINE OR ANYTHING BEFORE IT.

// Enter your code here

// --INDUCTOR.CPP: DO NOT CHANGE THIS LINE OR ANYTHING AFTER IT.


ostream& operator<<(ostream& os,const Inductor& b) {
    os  << "Inductor "  << b.get_inductance();

    return os;
}

int main() {
   Inductor l1(20);
   cout << "l1: " << l1 << endl;
   Inductor l2(5);
   cout << "l2: " << l2 << endl;
   Inductor l3(4);

   Inductor l_series,l_parallel,l_three;

   l_series=l1 + l2;
   cout << "ls: " << l_series << endl;

   l_parallel=l1 * l2;
   cout << "l p2: " << l_parallel << endl;   

   l_three=l1 * l2 * l3;
   cout << "l p3: " << l_three << endl;

   cout << "compound: " << Inductor(0.2e-6) + Inductor(0.1e-6)*Inductor(150e-9) << endl;
   
   cout << "try serial method: "  << l1.serial(l2) << endl;
   cout << "try parallel method: "  << l1.parallel(l2) << endl;   
}