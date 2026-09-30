# Time Conversion

## Problem
Convert a 12-hour AM/PM time format to 24-hour military time format.

## HackerRank
- Platform: HackerRank
- Difficulty: Easy
- Language: C++11

## Approach
1. Extract the hour and AM/PM period.
2. Convert `12 AM` to `00`.
3. Convert PM hours except `12 PM` by adding 12.
4. Keep the minutes and seconds unchanged.

## Time Complexity
O(1)

## Space Complexity
O(1)

## Result
Accepted on HackerRank.