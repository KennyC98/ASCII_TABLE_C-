//Kenny Chhoeun
//Due date: 4/26/2018
//Partner: Jonathan Neeper
//Lab 04

#include <iostream>
#include <iomanip>
using namespace std;

  int main() {
    int count = 0;
    for (int i=32; i<=126; i++) {
      char letter =i;
      count++;
  
    cout << setw(3) << "[" << letter << " - " << setw(3) << i << "]";

    if (count==5) {
      cout << endl;
      count = 0;
     }
}
   return 0;
}
