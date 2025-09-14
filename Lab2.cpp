#include <iostream>
using namespace std;

int main(){
    int sqFeet; // holds the number of square feet entered by the user
    double acres; // holds the conversion result of square feet to acres
    // Place your solution code here for Lab2
    const double ACRES_FACTOR = 43560;

    //Prompt user input
    cout << "\n[Square Feet -> Acre Converter]\nEnter the square feet of the area to convert to acres: ";
    //Gather user input
    cin >> sqFeet;

    //Convert from sqFeet to acres and output result
    acres = sqFeet/ACRES_FACTOR;

    //Return conversion
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);
    cout << sqFeet << " square feet is equal to " << acres << " acres." << endl;

    return 0;
}
