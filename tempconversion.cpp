#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout<<setiosflags(ios_base::fixed)<<setiosflags(ios_base::showpoint)<<setprecision(2);
    double kelvin;
    int fahrenheit=0;
    int increment;
    double equation_part;
    equation_part = 5.0/9; 
     
    cout << "Enter increment for temperature conversion table" <<endl;
    cin >> increment;
    //note for division and not to get a zero, add a decimal point with zero
    do {
       kelvin = ((fahrenheit -32) * (5.0/9)) + 273.15;
       cout << "equation = " << (fahrenheit-32) << " part: "<< equation_part <<endl;
       cout << fahrenheit << "F is " << kelvin << "K" <<endl;
       fahrenheit = increment +fahrenheit;
    } 
    while (fahrenheit<=200);
    cout << "go";
    
    return 0;
}