## Problem statement

```
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.

Open brackets must be closed in the correct order.

Every close bracket has a corresponding open bracket of the same type.
```

### solution:

we use STACK DataStructure for this problem

first we iterate through the input string and check the character is a opeining bracket if it is then we push that character into the stack

or if it is a closing bracket

then we first check if the stack is empty if it is we return false

or we take the top element in stack and check weather it mathches with current bracket if it does we pop that opoening bracket

then at last we return the length of the stack

### Time complexity:

It is taking `O(n)` time complexity
