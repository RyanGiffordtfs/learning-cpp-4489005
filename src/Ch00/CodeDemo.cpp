// Learning C++ 
// Exercise 00_03 with modification
// Using the exercise files on GitHub, by Eduardo Corpeño 

#include <iostream>
using namespace std;

int main(){
    float num_1, num_2, result;

    cout << "Enter number 1: " << flush;
    cin >> num_1;
    cout << "Enter number 2: " << flush;
    cin >> num_2;
    
    result = num_1 + num_2;
    cout << "The result of the addition is " << result << endl;
    
    cout << endl << endl;
    return (0);
}
