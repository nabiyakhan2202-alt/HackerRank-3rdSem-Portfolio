# Sparse Arrays

## Problem
Given a list of strings and a list of queries, determine how many times each query string occurs in the original list.

## HackerRank
- Platform: HackerRank
- Difficulty: Medium
- Language: C++11

## Approach
1. Create a frequency map using `unordered_map`.
2. Count the occurrence of every string in `stringList`.
3. For each query, look up its frequency in the map.
4. Store and return the results.

## Time Complexity
O(N + Q)

## Space Complexity
O(N)

## Result
Accepted on HackerRank.