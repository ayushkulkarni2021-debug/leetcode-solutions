## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Use a stack to store opening brackets and match every closing bracket with the latest opening bracket.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
Typical: ()[]{} → true. Edge: (] → false.
