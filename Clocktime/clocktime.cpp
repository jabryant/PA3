// INSTRUCTIONS:  
// You are provided a partially implemented ClockTime class.
// Your task is to finish the class by implementing three methods (see the specification below)
// that will throw an exeption if the resulting ClockTime is invalid
//
//
// Hours must be between 0 and 12 (inclusive)
//
// Minutes must be greater than or equal to 0.0, and must be less than 60.0
//
// The "part of the day" must be lowercase "am" or "pm".
//
// The format of the thrown exception is indicated by observing 
// the output and the "catch" statement in main()


#include <iostream>
#include <iomanip>

#include <string>

using namespace std;

class ClockTime {
	public:
		ClockTime(){
       hour=12;
       minutes=0;
       part="am";
    }

  void set_hour(int h);
  void set_minutes(double m);
  void set_part(string s);

  public:
    int hour;
    double minutes;
    string part;
} ;

ostream& operator<<(ostream& os,const ClockTime& c) {
    os  << setfill('0') << setw(2) << c.hour <<
      ":" << setfill('0') << setw(2) << (int) c.minutes << c.part;

    return os;
}

// --CLOCKTIME.CPP: DO NOT CHANGE THIS LINE OR ANYTHING BEFORE IT.

// Enter your code here.

if(hour < 0 || hour > 12){
	throw logic_error('Hour must be between 0 and 12.');
}

if(minutes < 0.0 || minutes >= 60){
	throw logic_error('Minutes must be between 0 and 60.')
}

if(part != am || part != pm){
	throw logic_error('Part of the day must be "am" or "pm."')
}

// --CLOCKTIME.CPP: DO NOT CHANGE THIS LINE OR ANYTHING AFTER IT.


int main() {

   ClockTime c;
   cout << "TEST CLOCK OUTPUT" << endl;
   cout << "the time is " << c << endl;
   double d=11.1;

   cout << "\n TEST SET HOUR" << endl;

   c.set_hour(0);
   cout << "the time is " << c << endl;

   c.set_hour(12);
   cout << "the time is " << c << endl;

   c.set_hour(d);
   cout << "the time is " << c << endl;

   try {

      c.set_hour(13);
    }
    catch(string s) {
      cout << "(string error): " << s << endl;
    }
    catch(char * const s) {
      cout << "(c-string error): " << s;
    }

    cout <<"\n TEST SET MINUTES" << endl;

    c.set_minutes(45.5);
    cout << c << endl;
    double minute_tests[5]={-7,0,30.0,60,59.9};
    for (int i=0;i<5;i++)
     {
      cout << "TEST " << i+1 << endl;
      try {
       c.set_minutes(minute_tests[i]);
      }
      catch (string s) {
       cout << s << endl;
      }
      cout << "the time is " << c << endl;
    }
    
    cout << "\n TEST SET PART OF DAY" << endl;
    string part_tests[4]={"pm","am","morning","am/pm"};
    for (int i=0;i<4;i++)
     {
      cout << "TEST " << i+1 << endl;    
      try {
        c.set_part(part_tests[i]);
      }
      catch (string s) {
       cout << s << endl;
      }
     cout << "the time is " << c << endl;
   }
    return 0;
}
