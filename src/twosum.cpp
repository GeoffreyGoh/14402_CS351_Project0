//TwoSumArray and TwoSumHashMap implementations    
#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<int> TwoSumArray(const std::vector<int>& nums, int target) {
   for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
         if (nums[i] + nums[j] == target) {
            return {i, j};
         }
      }
   }
   return {};
}

std::vector<int> TwoSumHashMap(const std::vector<int>& nums, int target) {
   std::unordered_map<int, int> seen;
   for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      if (seen.find(complement) != seen.end()) {
         return {seen[complement], i};
      }
      seen[nums[i]] = i;
   }
   return {};
}