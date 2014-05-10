// INSTRUCTIONS:  
//
// A class Textbox is defined.
//
// Each Textbox is a rectange width X height. It has an edge character and a fill character.
//
//  xxxxx
//  xaaax
//  xaaax
//  xxxxx
//
// is an example of a 5 x 4 textbox with edge 'x' and fill 'a'.

// Overload the operator << so that it prints a 
// stream of textboxes that matches the given output.  

// Make sure that you can print default textboxes

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;


class Textbox {
   public:
	    Textbox() : width(1),height(1),fill('o'),edge('x') {} ;
	    Textbox(int w,int h,char f,char e) : width(w),height(h),fill(f),edge(e) {};

		int width,height;
		char fill,edge;
} ;


// --TEXTBOX_STREAM.CPP: DO NOT CHANGE THIS LINE OR ANYTHING BEFORE IT.

// Enter your code here

// --TEXTBOX_STREAM.CPP: DO NOT CHANGE THIS LINE OR ANYTHING AFTER IT.


int main() {
     
	 Textbox t1;
	 Textbox t2(8,5,'#','/');
	 Textbox t3(4,7,'f','e'); 
     Textbox t4;
     cout << t1 << t2 << t3 << t4 << Textbox(60,20,' ','q');

     cout << "\n\nTest to/from a file" << endl;

     ofstream testoutput("a_textbox.txt");
     testoutput << Textbox(60,20,' ','q');
     testoutput.close();

     ifstream testinput("a_textbox.txt");
     string s;

     while (getline(testinput,s))     cout << s << endl;

 return 0;
 }
