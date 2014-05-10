// INSTRUCTIONS:  
//
// Write a template for a function  all_different, so that 
//it matches the output for each of the vectors provided.
//
// the all_different function should accept a vector of any type and return 
// true if all the elements of the vector are different from any other element in the vector.
// 
// all_different must not change the vector provided
// 
// If the vector has no elements, return false;
// 
// Add any #include statements that are necessary
//

#include <string>
#include <exception>

// --ALL_DIFFERENT.CPP: DO NOT CHANGE THIS LINE OR ANYTHING BEFORE IT.

// Enter your code here.

#include <iostream>


// --ALL_DIFFERENT.CPP: DO NOT CHANGE THIS LINE OR ANYTHING AFTER IT.

int main() {
     
	 vector<int> a(4);
     a[0]=4;
     a[3]=3;
     a[1]=-2;
     a[2]=-9;
     
     vector<int> acopy(a);

     cout << "0. a d? " << all_different(a) << endl;

     // Test: a should be the same as its copy.
     if (a != acopy) 
       throw logic_error("all_different() must not change its parameters");

    
     double b1=6.2;
     double b2=6.2;
     vector<double *> b;
     cout << "1. b d? " << all_different(b) << endl;

     b.push_back(&b1);
     b.push_back(&b2);
     cout << "2. b d? " << all_different(b) << endl;

     b.push_back(&b1);
     cout << "3. b d? " << all_different(b) << endl;

     vector<string>  c(3);
     c[0]="test";
     c[1]="this";
     c[2]="function";
     cout << "4. c d? " << all_different(c) << endl;     

     c[0]="function";
     cout << "5. c d? " << all_different(c) << endl;   
     c.pop_back();
     cout << "6. c d? " << all_different(c) << endl;   
 }
