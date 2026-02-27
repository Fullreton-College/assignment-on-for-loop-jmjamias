// Chapter 5, Programming Challenge 17: Sales Bar Chart
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    
    if (num2 < num1) {
        cout << "Second integer cannot be less than the first integer." <<endl;
    } else {
        for (int i = num1; i<=num2; i += 5) {
            cout << i << " ";
        }
        cout << endl;
    }
 return 0;
}



