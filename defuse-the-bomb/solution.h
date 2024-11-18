#ifndef SOLUTION_H
#define SOLUTION_H

#include <cstdlib>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> decrypt(vector<int> &code, int k) {
    int size = code.size();
    vector<int> temp = code;
    if (k > 0) {
      for (int i(0); i < size; i++) {
        int sum = 0;
        for (int count = 1; count <= k; count++) {
          sum += temp[(i + count) % size];
        }
        code[i] = sum;
      }
    } else if (k < 0) {
      for (int i(0); i < size; i++) {
        int sum = 0;
        for (int count = 1; count <= abs(k); count++) {
          sum += temp[(i - count + size) % size];
        }
        code[i] = sum;
      }
    } else if (k == 0) {
      for (int i(0); i < size; i++) {
        code[i] = 0;
      }
    }
    return code;
  }
};

#endif // SOLUTION_H
