#include <iostream>

using namespace std;

int main() {
  double alpha[50];

  // Initialize the first 25 components
  for (int i = 0; i < 25; ++i) {
    alpha[i] = i * i; // Square of the index
  }

  // Initialize the last 25 components
  for (int i = 25; i < 50; ++i) {
    alpha[i] = 3 * i; // Three times the index
  }

  // Output the array with 10 elements per line
  for (int i = 0; i < 50; ++i) {
    cout << alpha[i] << " ";
    if ((i + 1) % 10 == 0) {
      cout << endl;
    }
  }

  return 0;
}
