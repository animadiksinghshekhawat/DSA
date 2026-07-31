# Missing and Repeating Numbers

> **Problem Link:** https://www.naukri.com/code360/problems/missing-and-repeating-numbers_873366?leftPanelTabValue=PROBLEM&customSource=studio_nav

---

## Problem Statement

You are given an array of size **`N`**. The elements of the array are in the range from **1** to **`N`**.

Ideally, the array should contain elements from **1** to **`N`**. But due to some miscalculations:

- A number **`R`** appears **twice**.
- A number **`M`** is **missing**.

Your task is to find the **missing number (`M`)** and the **repeating number (`R`)**.

### Example

**Input**
```text
N = 6
arr = {6, 4, 3, 5, 5, 1}
```

**Output**
```text
2 5
```

**Explanation**

The array should contain numbers from **1** to **6**.

- Missing number = **2**
- Repeating number = **5**

---

## Follow Up

Can you solve this problem in **O(N)** time using **O(1)** additional space?

---

## Input Format

- The first line contains an integer **`N`** denoting the size of the array.
- The second line contains **`N`** space-separated integers.

---

## Output Format

Print the missing number **`M`** and the repeating number **`R`** separated by a single space.

---

## Note

- You don't have to print anything.
- Implement the function and return a pair:
  - First element → Missing number **`M`**
  - Second element → Repeating number **`R`**

---

## Constraints

```text
2 <= N <= 5 * 10^4
1 <= data <= N
```

Where:

- **`N`** is the size of the array.
- **`data`** denotes the value of the elements.
