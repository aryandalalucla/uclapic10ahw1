//
//  hw1_q3.cpp
//  hw1q3
//
//  Created by Aryan Dalal on 10/11/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string fname, lname, name;
    int luckynumb;
    
    cout << "Please enter your first name: ";
    cin >> fname;
    cout << "Please enter your last name: ";
    cin >> lname;
    
    name = fname + " " + lname;
    
    cout << "The length your full name " << "\"" << name << "\"" << " is " << name.length() << endl;
    cout << "Please enter your lucky number: ";
    cin >> luckynumb;
    
    string length = to_string(name.length());
    string numb = to_string(luckynumb);
    string username = fname.substr(0, 1) + lname.substr(0, 1) + length + numb;
    
    cout << "The suggested user name is " << username << endl;
    
    return 0;
}
