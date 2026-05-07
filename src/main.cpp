// Main program: demonstrates TwoSumArray and TwoSumHashMap
#include <iostream>
#include <string>
#include <vector>

std::vector<int> TwoSumArray(const std::vector<int>& nums, int target);
std::vector<int> TwoSumHashMap(const std::vector<int>& nums, int target);

static void print(const std::string& label, const std::vector<int>& result) {
   std::cout << label << ": ";
   if (result.empty()) {
      std::cout << "no pair found";
   } else {
      std::cout << "[" << result[0] << ", " << result[1] << "]";
   }
   std::cout << "\n";
}

int main() {
   std::vector<int> nums = {2, 7, 11, 15};
   int target = 9;

   print("TwoSumArray  ", TwoSumArray(nums, target));
   print("TwoSumHashMap", TwoSumHashMap(nums, target));

   return 0;
}