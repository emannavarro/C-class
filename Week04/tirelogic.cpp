/**
    CS-11 Asn 4, tirelogic.cpp
    Purpose: Report on the condition of tires on a car.

    @author Emanuel Navarro
    @version 1.0 9/25/18
*/
#include <iostream>
using namespace std;

int main() {
    // Do NOT change the next few lines
    const int PSI_FRONT = 32;
    const int PSI_REAR = 36;
    const int LIMIT = 3;
    // bool goodPressure = true; // optimistic
    int rightFront, leftFront, rightRear, leftRear;
    string cheq, cheq2,cheq3, cheq4, pressure, pressure2, inflation;
    cout << "*** Tire Logic ***";
    cout << "\nInput 32 36 32 35 for values in parentheses.\n"<< endl;
    cout <<"Enter tire pressures when prompted."<< endl;
    // Make changes after this line as stated in instructions and comments.



    // Prompt user and get 4 tire pressures, in order shown for Example Run
    cout << "Input right front pressure: ";
    cin >> rightFront;
    cout << "Input left front pressure: ";
    cin >> leftFront;
    cout << "Input right rear pressure: ";
    cin >> rightRear;
    cout << "Input left rear pressure: ";
    cin >> leftRear;
    if( rightFront == PSI_FRONT) {
        cheq="Perfect";
    } else if( rightFront > PSI_FRONT + LIMIT ) {
        cheq="High";
    } else if (rightFront < PSI_FRONT - LIMIT) {
        cheq="low";
    } else {
        cheq="OK";
    }
    if (leftFront < PSI_FRONT - LIMIT) {
        cheq2 = "Low";
    } else if(leftFront > PSI_FRONT + LIMIT) {
        cheq2 = "High";
    } else if(leftFront== PSI_FRONT) {
        cheq2="Perfect";
    }  else {
        cheq2="OK";
    }
    if ( rightRear < PSI_REAR -LIMIT) {
        cheq3 = "Low";
    } else if(rightRear > PSI_REAR + LIMIT) {
        cheq3 = "High";
    } else if(rightRear== PSI_REAR) {
        cheq3="Perfect";
    }  else {
        cheq3="OK";
    }
    if ( leftRear < PSI_REAR - LIMIT) {
        cheq4 = "Low";
    } else if(leftRear > PSI_REAR + LIMIT) {
        cheq4 = "High";
    } else if(leftRear== PSI_REAR) {
        cheq4="OK";
    } else {
        cheq4="OK";
    }
    if ( cheq=="OK" && cheq2=="Perfect" ) {
        pressure="OK";
    } else if(cheq=="OK" || cheq2=="OK") {
        pressure="OK";
    } else {
        pressure="Bad";
    }
    if ( cheq3=="OK" && cheq4=="Perfect") {
        pressure2="OK";
    } else if(cheq3=="OK" && cheq4=="OK") {
        pressure2="OK";
    } else {
        pressure2="Bad";
    }
    if (pressure=="OK" && pressure2=="OK") {
        inflation="OK";
    } else {
        inflation="Bad";
    }

    cout << "\n*** Checking each tire's pressure ***\n";
    // For each tire say whether Perfect, Low, High, OK

    cout << "Right front " << rightFront << " (Perfect): " <<cheq ;
    // Add if tests for right front tire; cout Perfect, Low, High, OK
    // If not OK or Perfect, set goodPressure = false.

    cout << "\nLeft front " << leftFront << " (High): " <<cheq2;
    // Add if tests for left front tire; cout Perfect, Low, High, OK
    // If not OK or Perfect, set goodPressure = false.

    cout << "\nRight rear " << rightRear << " (Low): "<<cheq3;
    // Add if tests for right rear tire; cout Perfect, Low, High, OK
    // If not OK or Perfect, set goodPressure = false.

    cout << "\nLeft rear " << leftRear << " (OK): "<< cheq4;
    // Add if tests for left rear tire; cout Perfect, Low, High, OK
    // If not OK or Perfect, set goodPressure = false.

    cout << "\n\n*** Comparing side to side pressure ***\n";
    // Compare both front and both rear
    // Add if tests to compare left and right front; cout OK, Uneven
    // If not OK , set goodPressure = false.
    cout << "Front pressure comparison (Uneven): "<< pressure;

    cout << "\nRear pressure comparison (OK): "<<pressure2;
    // Add if tests to compare left and right rear; cout OK, Uneven
    // If not OK , set goodPressure = false.

    cout << "\n\n*** Overall Status ***\n";
    // Add if test to state overall status by testing goodPressure
    cout << "Tire inflation (BAD): "<<inflation<< endl;

    //cout << endl;

    return 0;
}