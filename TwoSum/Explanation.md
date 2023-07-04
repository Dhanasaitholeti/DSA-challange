## Problem statement

```
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
```

### Normal Method:

In this method we try to bruteforce it we iterate through all the element twice and check whether they add up to target

if it does we return two elements as answer

or it the loop over with finding any pair we return empty array.

### Time complexity:

It is taking `O(n^2)` as it is iterating over the elements 2 times;
