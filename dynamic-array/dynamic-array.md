# Dynamic Array

## Problem
Create and manipulate a collection of sequences using queries and the XOR operation to determine the sequence index.

## HackerRank
- Platform: HackerRank
- Difficulty: Easy
- Language: C++11

## Approach
1. Create `n` empty sequences.
2. For each query, calculate the index using `(x ^ lastAnswer) % n`.
3. For type 1 queries, append `y` to the selected sequence.
4. For type 2 queries, retrieve the required element and update `lastAnswer`.
5. Store each `lastAnswer` in the result array.

## Time Complexity
O(N + Q)

## Space Complexity
O(N)

## Result
Accepted on HackerRank.