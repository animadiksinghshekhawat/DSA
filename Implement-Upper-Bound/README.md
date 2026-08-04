# Implement Upper Bound

## Problem Statement

You are given a sorted array `arr` containing `n` integers and an
integer `x`. Implement the **upper bound** function to find the index of
the upper bound of `x` in the array.

### Note

1.  The upper bound in a sorted array is the index of the first value
    that is greater than a given value.
2.  If the greater value does not exist then the answer is `n`, where
    `n` is the size of the array.
3.  Try to write a solution that runs in **O(log n)** time complexity.

------------------------------------------------------------------------

## Example

**Input:**

`arr = {2, 4, 6, 7}`

`x = 5`

**Output:**

`2`

------------------------------------------------------------------------

## Detailed Explanation (Input/Output Format, Notes, Images)

Refer to the original problem statement.

------------------------------------------------------------------------

## Constraints

-   `1 <= n <= 10^5`
-   `1 <= x <= 10^9`
-   `1 <= arr[i] <= 10^9`

**Time Limit:** 1 second

------------------------------------------------------------------------

## Sample Input 1

``` text
5 7
1 4 7 8 10
```

## Sample Output 1

``` text
3
```

------------------------------------------------------------------------

## Sample Input 2

``` text
5 10
1 2 5 6 10
```

## Sample Output 2

``` text
5
```

------------------------------------------------------------------------

## Sample Input 3

``` text
7 5
1 5 5 7 7 9 10
```

## Sample Output 3

``` text
3
```

------------------------------------------------------------------------

## Problem Link

https://www.naukri.com/code360/problems/implement-upper-bound_8165383?leftPanelTabValue=PROBLEM
