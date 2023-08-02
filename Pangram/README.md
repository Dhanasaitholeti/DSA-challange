## Problem Statement

```
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

```

## solution approach:

we are going to use hashmap or objects for this problem and storing all the alphabets as keys and as the initial value.

we iterate through the given string and mark every element seen as 1.

after that we initialize the loop and check if we can find 0 for any element in the hashmap.

if we find 0 then we return false.if not at the end of the loop we return true.

## time complexity:

This problem takes a loop through the given string to find the alphabets and loop throught the alphabets hashmap which is the length 26 at every scenario so.

(n+26) will be the time complexity but as aympotic notation after ignoring constats it is `O(n)`
