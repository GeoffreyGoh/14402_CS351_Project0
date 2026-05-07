# Time and Space Complexity Documentation

## Approach 1: twoSumArray (Brute Force - Nested Loop)
- **Time Complexity:** O(n²)
  - Outer loop: O(n) iterations
  - Inner loop: O(n) iterations
  - Total: n × n = O(n²)
- **Space Complexity:** O(1)
  - Only uses constant extra space for pointers and variables
  - No data structures allocated based on input size

**Pros:** Simple, no extra space required
**Cons:** Slow for large inputs

## Approach 2: twoSumHashTable (Hash Map / Unordered Map)
- **Time Complexity:** O(n)
  - Single pass through array: O(n)
  - Hash map lookup/insertion: O(1) average case
  - Total: O(n)
- **Space Complexity:** O(n)
  - Hash map stores up to n entries
  - Worst case: O(n) for storing all elements

**Pros:** Fast, linear time complexity
**Cons:** Uses additional space proportional to input size

---

## Comparison Summary
| Approach | Time | Space | Best For |
|----------|------|-------|----------|
| Brute Force Array | O(n²) | O(1) | Small arrays, memory-constrained systems |
| Hash Table | O(n) | O(n) | Large arrays, performance-critical applications |

Where n = number of elements in the input array.
