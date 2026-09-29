# Rat In a Maze

**Hard**


## Problem statement

You are given a ***N*N**\* maze with a rat placed at
***'mat\[0\]\[0\]'***. Find all paths that rat can follow to reach its
destination i.e. mat\[N-1\]\[N-1\]. The directions in which the rat can
move are 'U'(up), 'D'(down), 'L' (left), 'R' (right).

In the given maze, each cell can have a value of either 0 or 1. Cells
with a value of 0 are considered blocked, which means the rat cannot
enter or traverse through them. On the other hand, cells with a value of
1 are open, indicating that the rat is allowed to enter and move through
those cells.

**Example:**

``` text
mat:{{1, 0, 0, 0},
     {1, 1, 0, 1}, 
     {1, 1, 0, 0},
     {0, 1, 1, 1}}

All possible paths are:
DDRDRR (in red)
DRDDRR (in green)
```

**Detailed explanation ( Input/output format, Notes, Images )**

**Sample Input 1:**

``` text
3
1 1 1
1 0 1
1 1 1
```

**Sample Output 1:**

``` text
DDRR
RRDD
```

**Explanation of Sample Input 1:**

``` text
Only 2 path is possible.
```

**Sample Input 2:**

``` text
2
1 1
1 0
```

**Sample Output 2:**

``` text
-1
```

**Explanation of Sample Input 2:**

``` text
No path exists.
```

**Constraints:**

``` text
2 <= N <= 5
0 <= mat[i][j] <= 1
```

**Time Limit:** 1 sec

## Problem Link

https://www.naukri.com/code360/problems/rat-in-a-maze-\_8842357
