// Erwin Horvath





#include <iostream>
using namespace std;

int main()
{
    // variables: f(b) = new freezing point; b = new salinity; Two points are = (a,f(a)) and (c,f(c)).
    double a,f_a,b,f_b,c,f_c;
    
    cout << "Use ppt for salinity values." << endl // Advising user to enter salinity values in ppt unit.
         << "Use degrees F for temperatures." << endl // Advising user to enter temp. in Fahrenheit.
         << "Enter first salinity and freezing temperature: \n"; // Advising user to enter first value of salinity and first value of freezing temperature.
    
    cin >> a >> f_a; // User enters values.
    
    cout << "Enter second salinity and freezing temperature: \n"; // Advising user to enter second value of salinity and second value of freezing temperature.
    
    cin >> c >> f_c; //user enters values
    
    cout << "Enter new salinity: \n"; //prompt user for new salinity value
    
    cin >> b; //user enters value
    if( !(a < b && b < c) )
        
        {cout << "Invalid data: " << a << ","<< b << "," << c << endl;} // Display invalid integers or data to user.
    
    
    f_b = f_a+(b-a)/(c-a)*(f_c-f_a); // Calculation or "linear interpolation" of data to obtain result below.
    
    cout.setf(ios::fixed); // Used to make sure user recieves a value with only one decimal place.
    cout.precision(1); // Again, same as above to ensure decimal point.
    
    cout << "New freezing temperature in degrees F: " << f_b << endl; // Result of freezing temp. in degrees Fahrenheit.
    
    
      //End of program!
  
    
    
return 0;
}
