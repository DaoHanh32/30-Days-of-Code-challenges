#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int integer_x;
    double double_x;
    string string_x;
    
    // Read and save an integer, double, and String to your variables.
    cin >> integer_x >> double_x;
    cin.ignore();
    getline(cin, string_x);
    
    // Print the sum of both integer variables on a new line.
    cout << i + integer_x << endl;
        
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + double_x << endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << string_x << endl;
    return 0;
}