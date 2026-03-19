# Two Sum

## Description
Two Sum is a classic coding problem where you need to find two numbers in an array that add up to a target sum. Given an array of integers and a target value, return the indices of the two numbers that add up to the target. Each input has exactly one solution, and you cannot use the same element twice.

## Example
Input: `nums = [2, 7, 11, 15]`, `target = 9`
Output: `[0, 1]`
Explanation: `nums[0] + nums[1] = 2 + 7 = 9`

## Requirements

### Programming Language & Libraries
- C++20 standard
- STL `vector` for array operations

### Implementation Approaches
1. **TwoSumArray**: Brute force O(n²) approach using nested loops
2. **TwoSumHashTable**: Optimized O(n) approach using hash table (unordered_map)

### Test Cases
- Basic case: `nums = [2, 7, 11, 15]`, `target = 9` → `[0, 1]`
- Negative numbers: `nums = [-1, -2, -3, 5, 7]`, `target = 4`
- Duplicate values: `nums = [3, 3]`, `target = 6` → `[0, 1]`
- Large numbers and array sizes

### Continuous Integration
- Automated testing with GitHub Actions
- Build and test pipeline on every push/pull request

### Containerization
- Docker support for consistent development and deployment environment
- Dockerfile for building and running the application