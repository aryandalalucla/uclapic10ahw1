//
//  hw1_q1.cpp
//  hw1q1
//
//  Created by Aryan Dalal on 10/11/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int int1, int2;
    
    cout << "Enter an integer between -1000 and 1000: ";
    cin >> int1;
    cout << "Enter another integer between -1000 and 1000: ";
    cin >> int2;
    
    double sum = int1 + int2;
    double prod = int1 * int2;
    double div = static_cast<float>(int1)/int2;
    double avg = sum / 2;
    
    cout << "Their sum is: " << sum << endl;
    cout << "Their product is: " << prod << endl;
    cout << "The division of the first number by the second number is: " << div << endl;
    cout << "Their average is: " << avg << endl;
    
    if (int1 > int2) {
        cout << "The maximum of the two numbers is: " << int1 << endl;
    }
    else {
        cout << "The maximum fo the two numbers is: " << int2 << endl;
    }
    
    return 0;
}
