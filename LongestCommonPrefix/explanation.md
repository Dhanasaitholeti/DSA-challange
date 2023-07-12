# Problem statement

```
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
```

## solution:

This problem can be solved by first sorting the given array of strings in lexographicacl order.

then camparing the first and last elements.

Then return the common string between those two elements.

## Time complexity:

It takes `O(n^2)` for this solution because it is sorted using the `selection sort`
using the `quicksort` or `mergesort` will reduce the complexity to `O(n logn)`
