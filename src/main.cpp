//main program to call the two sum function
#include <iostream>
#include <vector>
using namespace std;

int twoSum(vector<int>& nums, int target) {
   for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
         if (nums[i] + nums[j] == target) {
            return i * 10 + j; // or return as pair/vector
         }
      }
   }
   return -1; // not found
}

int main() {
   vector<int> nums = {2, 7, 11, 15};
   int target = 9;
   
   int result = twoSum(nums, target);
   
   if (result != -1) {
      cout << "Indices: " << result / 10 << ", " << result % 10 << endl;
   } else {
      cout << "No two sum found" << endl;
   }
   
   return 0;
}