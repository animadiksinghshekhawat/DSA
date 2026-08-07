# Find out how many times the array is rotated

## Problem Statement

You are given an array **`arr`** having **`n` distinct integers** sorted in ascending order. The array is right rotated **`r`** times.

Find the minimum value of **`r`**.

Right rotating an array means shifting the element at the **`i`th** index to **`(i+1) mod n`** index, for all `i` from `0` to `n-1`.

## Example

```text
Input: n = 5, arr = [3, 4, 5, 1, 2]

Output: 3
```

### Explanation

If we rotate the array `[1, 2, 3, 4, 5]` right **3** times, then we will get the array `[3, 4, 5, 1, 2]`.

Thus, `r = 3`.

## Detailed Explanation

### Sample Input 1

```text
4
2 3 4 1
```

### Sample Output 1

```text
3
```

### Explanation

If we right rotate the array `{1, 2, 3, 4}` by **3** times, then we will get `{2, 3, 4, 1}`.

Thus, `r = 3`.

### Sample Input 2

```text
3
1 2 3
```

### Sample Output 2

```text
0
```

### Explanation

If we right rotate the array `{1, 2, 3}` by **0** times, then we will get `{1, 2, 3}`.

Thus, `r = 0`.

## Expected Time Complexity

Can you solve this in **O(log n)** time complexity?

## Constraints

```text
1 <= n <= 10^5
1 <= arr[i] <= 10^9
Time Limit: 1 sec
```

## Problem Link

[Code360 — Find out how many times the array is rotated](https://www.naukri.com/code360/problems/rotation_7449070?utm_source=chatgpt.com&leftPanelTabValue=PROBLEM)
