# Stack Overflow Error in Recursive Function
This repository demonstrates a stack overflow error that can occur in recursive functions in Hack. The `foo` function calculates the factorial of a number using recursion.  For larger input values, this leads to exceeding the maximum recursion depth, resulting in a stack overflow error. The solution demonstrates an iterative approach to avoid this issue.

## How to Reproduce
1. Clone the repository.
2. Compile and run `bug.hh`. You will observe that for large input values (e.g., 50000) the program crashes due to stack overflow.
3. Run `bugSolution.hh` to see the iterative solution that correctly calculates factorials without stack overflow.

## Solution
The solution uses iteration instead of recursion, which avoids the stack overflow issue entirely. The iterative approach is more memory-efficient for calculating factorials of large numbers.