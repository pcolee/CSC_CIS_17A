/* 
 * File:
 * Author: Keisha Coleen (Cole) Wagas
 * Date: 03/05/2025
 * Purpose: Match the input with the ideal output
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argv, char** argc) {
    //Set random number seed here when needed
    //Declare variables or constants here
    //3 integers a b c  
    /*
    a + b
    b + a - c
    (a+b)*c
    (a/b)*c
    (a*c)/b
    */
    int A, B, C;
    

    //Initialize or input data here
    cin>>A>>B>>C;
    
    //Display initial conditions, headings here
   
    //Process inputs  - map to outputs here
    
    
    //Format and display outputs here
    cout <<"A + B is: "<<A+B<<endl;
    cout <<"B + A - C is: "<<B+A-C<<endl;
    cout <<"(A + B) * C is: "<<(A+B)*C<<endl;
    cout<<"(A / B) * C is: "<<(A/B)*C<<endl; 
    cout<<"(A * C) / B is: "<<(A*C)/B<<endl;
    cout<<"A % B is: "<<A % B<<endl; //only works for integers 

    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}