## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Compare characters column by column across all strings until a mismatch occurs.

### Complexity
- Time: O(S)
- Space: O(1)

### Notes
Typical: flower/flow/flight → fl. Edge: dog/racecar/car → empty string.
