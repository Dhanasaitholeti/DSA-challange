## Problem Statement

```
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.

```

## solution approach:

we are going to use list or array to solve this problem.

The problem statement clearly mentions that we need to modify the nums array until all the unique elements and after that we can put whatever we want into the array.

we make a empty list and start iterating through the nums array and we check for each elements whether the elemeent is equals value given if it is not then we add to the array

and lastly we are going to replace all the elements in the nums array and replace it with ordered value whihch are unique.

## time complexity:

This problem takes a loop through the given nums array to find the each element so that `O(n)`.

and after finding the unique elements it is going to loop again in orderedValues array so it will be `O(n)`.

hence the total TimeComplexity will be `n+n = 2n` and Timecomplexity in worstcase scenario is `O(n)`
