/**
    CS-11 Asn 6, scores.cpp
    Purpose: scores.

    @author Emanuel Navarro
    @version 1.0 10/4/18
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {

    double sumScores=0;
    double nextScore=0;
    int count=0;

    while(nextScore >= 0) {
        count++;
        cout<< "Enter score#" <<count<< ": ";
        cin>> nextScore;

        if (nextScore>= 0) {
            sumScores += nextScore;

        }

    }
    cout<< "Sum of scores: " << sumScores;

    return 0;
}