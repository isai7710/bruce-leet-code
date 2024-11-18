/*
problem link:
https://leetcode.com/problems/defuse-the-bomb/?envType=daily-question&envId=2024-11-18
*/

#include "solution.h"
#include <iostream>
#include <vector>

int main() {
  Solution solution;
  std::vector<int> v1 = {5, 7, 1, 4};
  int k1 = 3;
  std::vector<int> v2 = {1, 2, 3, 4};
  int k2 = 0;
  std::vector<int> v3 = {2, 4, 9, 3};
  int k3 = -2;
  std::cout << "Running test cases..." << std::endl;
  std::cout << "Expected output for Input: code = [5,7,1,4], k = 3"
            << std::endl;
  std::cout << "[12,10,16,13]" << std::endl;
  std::cout << "Actual output: " << std::endl;
  std::vector<int> s1 = solution.decrypt(v1, k1);
  std::cout << "[";
  for (int i(0); i < v1.size(); i++) {
    std::cout << s1[i];
    if (i + 1 != v1.size()) {
      std::cout << ",";
    }
  }
  std::cout << "]" << std::endl;
  return 0;
}
