/*
Name: Keisha Coleen (Cole) Wagas
Date: 03/06/2025
Purpose: Code-E Formatting 
*/

//System Libraries
#include <iostream> //Input Output Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like Pi, Speed of Light, etc...
//Conversion between units

//Function Prototypes
int main(int argv, char **argc) 
{
    //Random Seeds are set for the random number generator

    //Declare Variables
    int a, b, c, d;
    float fa, fb, fc, fd;

    //Initialize Variables

    //Map the Inputs to Outputs - Process
    cin >> a >> b >> c >> d;
    fa = static_cast<float>( a ); 
    fb = static_cast<float>( b );
    fc = static_cast<float>( c );
    fd = static_cast<float>( d );

    cout << setw(9) //<<setfill('.')
    << a << setw(10) << fixed << setprecision(1)
    << fa << setw(10) << fixed << setprecision(2) 
    << fa << endl;

    cout << setw(9) //<<setfill('.')
    << b << setw(10) << fixed << setprecision(1)
    << fb << setw(10) << fixed << setprecision(2) 
    << fb << endl;

    cout << setw(9) //<<setfill('.')
    << c << setw(10) << fixed << setprecision(1)
    << fc << setw(10) << fixed << setprecision(2) 
    << fc << endl;

    cout << setw(9) //<<setfill('.')
    << d << setw(10) << fixed << setprecision(1)
    << fd << setw(10) << fixed << setprecision(2) 
    << fd;

    //Display and output the results

    //Exit the program
    return 0;
    
}