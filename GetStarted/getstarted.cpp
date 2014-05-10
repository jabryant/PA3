// INSTRUCTIONS: fill the appropriate declarations and 
// header files so that the program compiles and runs.  
//
// --GETSTARTED.CPP: DO NOT CHANGE THIS LINE OR ANYTHING BEFORE IT.

//Enter your code here.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string s;
int SIZE;

// --GETSTARTED.CPP: DO NOT CHANGE THIS LINE OR ANYTHING AFTER IT.

#include <algorithm>

int main() {

    s="To Do List";

    cout << s << endl;

    string x[SIZE]={"buy ticket","ace exams","get a summer job","write thank you notes","pack up"};

    sort(begin(x),end(x));

    for (int j=0;j<SIZE;j++)
    	cout << " " << x[j] << endl;

}
