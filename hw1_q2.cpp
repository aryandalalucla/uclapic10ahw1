//
//  hw1_q2.cpp
//  hw1q2
//
//  Created by Aryan Dalal on 10/11/24.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "TASK: solve ax^2+bx+c=0" << endl;
    
    double a, b, c;
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    
    double sol1 = (-b-sqrt(pow(b, 2) - 4*a*c))/(2*a);
    double sol2 = (-b+sqrt(pow(b, 2) - 4*a*c))/(2*a);
    
    cout << "The solutions are " << sol1 << " and " << sol2 << endl;
    
    return 0;
}
