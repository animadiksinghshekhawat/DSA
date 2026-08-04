# Implement Lower Bound

## Problem Statement

You are given an array `arr` sorted in non-decreasing order and a number
`x`. You must return the index of the lower bound of `x`.

### Note

1.  For a sorted array `arr`, `lower_bound` of a number `x` is defined
    as the smallest index `idx` such that the value `arr[idx]` is not
    less than `x`. If all numbers are smaller than `x`, then `n` should
    be the `lower_bound` of `x`, where `n` is the size of array.
2.  Try to do this in **O(log n)**.

------------------------------------------------------------------------

## Example

**Input:**

`arr = [1, 2, 2, 3]`

`x = 0`

**Output:**

`0`

------------------------------------------------------------------------

## Detailed Explanation (Input/Output Format, Notes, Images)

Refer to the original problem statement.

------------------------------------------------------------------------

## Constraints

-   `1 <= n <= 10^5`
-   `0 <= arr[i] <= 10^5`
-   `1 <= x <= 10^5`

------------------------------------------------------------------------

## Sample Input 1

``` text
6
1 2 2 3 3 5
0
```

## Sample Output 1

``` text
0
```

------------------------------------------------------------------------

## Sample Input 2

``` text
6
1 2 2 3 3 5
2
```

## Sample Output 2

``` text
1
```

------------------------------------------------------------------------

## Sample Input 3

``` text
6
1 2 2 3 3 5
7
```

## Sample Output 3

``` text
6
```

------------------------------------------------------------------------

## Problem Link

https://www.naukri.com/code360/problems/lower-bound_8165382?utm_source=chatgpt.com&leftPanelTabValue=PROBLEM
