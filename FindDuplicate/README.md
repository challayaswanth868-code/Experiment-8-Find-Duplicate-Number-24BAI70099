# Experiment 8 - Find the Duplicate Number

## Problem

Given an array of integers containing n + 1 integers where each integer is in the range [1, n], find the one duplicate number.

The solution should not modify the array and should use only constant extra space.

## Approach

This experiment uses **Floyd's Tortoise and Hare Cycle Detection Algorithm**.

The array can be treated as a linked list where each value points to the next index. Since one number is duplicated, a cycle is guaranteed to exist.

### Algorithm

1. Initialize two pointers, `slow` and `fast`.
2. Move `slow` one step at a time.
3. Move `fast` two steps at a time.
4. Continue until both pointers meet.
5. Reset `slow` to the first element.
6. Move both pointers one step at a time.
7. The point where they meet is the duplicate number.

## Test Cases

| Input | Duplicate |
|---|---:|
| [1, 3, 4, 2, 2] | 2 |
| [3, 1, 3, 4, 2] | 3 |
| [3, 3, 3, 3, 3] | 3 |
| [1, 1] | 1 |
| [2, 5, 9, 6, 9, 3, 8, 9, 7, 1] | 9 |

## Complexity

- Time Complexity: **O(n)**
- Space Complexity: **O(1)**

## Result

The duplicate number was successfully identified for all test cases using Floyd's Cycle Detection Algorithm.

## Language

C++