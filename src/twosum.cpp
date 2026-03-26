#include <vector>
#include <unordered_map>
#include <algorithm>

// Approach 1: Using sorted array (two pointers)
std::vector<int> twoSumArray(std::vector<int>& nums, int target) {
    std::vector<int> indices(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        indices[i] = i;
    }
    
    std::sort(indices.begin(), indices.end(), [&](int a, int b) {
        return nums[a] < nums[b];
    });
    
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[indices[left]] + nums[indices[right]];
        if (sum == target) {
            return {indices[left], indices[right]};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {};
}

// Approach 2: Using hash table
std::vector<int> twoSumHashTable(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
}