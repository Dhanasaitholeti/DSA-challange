## Problem statement

```
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
```

### Normal Method approach:

In this method we try to bruteforce it we iterate through all the element twice and check whether they add up to target

if it does we return two elements as answer

or it the loop over with finding any pair we return empty array.

### Time complexity:

It is taking `O(n^2)` as it is iterating over the elements 2 times;

### optimized method approach:

In this method we are using the Hashmaps

first we itarate through array and find that if target - iterative elemnt and if hte element is in hashmap we return element in hashmap and presnt element

if it is not in hashmap then we add the element in hashmap and the value as their location in the array.

### Time complexity

As we are iterating throug the array for only one time the time complexity is reduced from `O(n^2)` from normal method to `O(n)`
