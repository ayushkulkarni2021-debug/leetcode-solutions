## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
Repeatedly inspect the middle of a sorted array and discard half of the search space.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Typical: [-1,0,3,5,9,12], target 9 → 4. Edge: [5], target 2 → -1.
