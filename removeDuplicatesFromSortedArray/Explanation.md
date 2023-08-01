## Problem Statement

```
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.

```

## solution approach:

we are going to use list or array to solve this problem.

The problem statement clearly mentions that we need to modify the nums array until all the unique elements and after that we can put whatever we want into the array.

we make a empty list and start iterating through the nums array and we check for each elements whether they are unique or not. by checking whether it is available in orderedvalues list since it is sorted array we have to only check the last element to determine that wheather the element is unique or not.

and lastly we are going to replace all the elements in the nums array and replace it with ordered value whihch are unique.

## time complexity:

This problem takes a loop through the given nums array to find the each element so that `O(n)`.

and after finding the unique elements it is going to loop again in orderedValues array so it will be `O(n)`.

hence the total TimeComplexity will be `n+n = 2n` and Timecomplexity in worstcase scenario is `O(n)`
