# Diagonal Difference

## Problem
Given a square matrix, calculate the absolute difference between the sums of its two diagonals.

## HackerRank
- Platform: HackerRank
- Difficulty: Easy
- Language: C++11

## Approach
1. Traverse the matrix once.
2. Add `arr[i][i]` to the primary diagonal sum.
3. Add `arr[i][n-1-i]` to the secondary diagonal sum.
4. Return the absolute difference between the two sums.

## Time Complexity
O(N)

## Space Complexity
O(1)

## Result
Accepted on HackerRank.