#include <iostream>
#include <vector>

using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) {
  int n = matrix.size();
  for (int i = 0; i < n / 2; i++) {
    for (int j = i; j < n - i - 1; j++) {
      int temp = matrix[i][j];
      matrix[i][j] = matrix[n - 1 - j][i];
      matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
      matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
      matrix[j][n - 1 - i] = temp;
    }
  }
}

int main() {
  vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  cout << "Original Matrix:" << endl;
  for (auto row : matrix) {
    for (auto val : row) {
      cout << val << " ";
    }
    cout << endl;
  }

  rotateMatrix(matrix);

  cout << "\nRotated Matrix:" << endl;
  for (auto row : matrix) {
    for (auto val : row) {
      cout << val << " ";
    }
    cout << endl;
  }

  return 0;
}
