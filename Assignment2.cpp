#include <iostream>
using namespace std;

int main() {
   double sales[5];
// Loop 1: collect input
   for (int i = 0; i<5; i++) {
      cout<< "Enter today's sales for store " << (i + 1) << ":"; // since i starts at 0, add 1 so it displays 1,2,3,4,5
      cin>> sales[i]; //stores what the user types into that slot of the array
   }   
   //Print header
   cout<< "\nSales Bar Chart (Each * = $100)\n";

   // Loop 2: display chart
   for (int i = 0; i<5; i++) {
      int stars = sales [i] / 100;
      cout<< "Store " << (i+1) << ": ";
      for (int j = 0; j < stars; j++) { //Nested loop to print asterisks
         cout<< "*";
      }
      cout<< endl;
   }


   return 0;
}

