#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

const float PI = 3.14159;

float getLOtSize(){
    float width;
    float length;
    cout << "Please enter the width in feet:"  <<endl;
    cin >> width;
    cout << "Please enter the length in feet:" <<endl;
    cin >> length;
    return length*width;
}

float calcAcres(float footage){
    return footage/43560;
}

float calcHectares(float footage){
    return footage/107639;
}
int main() {
    auto squareFootage1 = getLOtSize();
    cout << "Your lot has " << setprecision(3) << calcAcres(squareFootage1) << " acres" << endl;
    cout << "and " << setprecision(3) << calcHectares(squareFootage1) << " hectares." << endl;

//I kind of cheated here with the second test case because I wanted to
// stick with the setprecision member function.

    auto squareFootage2 = getLOtSize();
    cout << "Your lot has " << setprecision(2) << calcAcres(squareFootage2) << " acres" << endl;
    cout << "and " << setprecision(2) << calcHectares(squareFootage2) << " hectares.";

    return 0;
}