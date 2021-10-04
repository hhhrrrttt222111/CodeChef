# 1 - Make a Convex Polygon
## Problem Statement
Let's say that two nonzero vectors ***v***<sub>***1***</sub> = (x<sub>1</sub>, y<sub>1</sub>) and ***v***<sub>***2***</sub> = (x<sub>2</sub>, y<sub>2</sub>) have the same direction if there exists a positive constant ***k > 0*** such that ***v***<sub>***1***</sub> = ***k⋅v***<sub>***2***</sub> (i.e., x<sub>1</sub> = k⋅x<sub>2</sub> and y<sub>1</sub> = k⋅y<sub>2</sub>). Let's define the origin point O to be (0,0).

You are given n non-zero vectors ***v***<sub>***1***</sub>, ***v***<sub>***2***</sub>, … , ***v***<sub>***n***</sub> such that no pair of them have the same direction and all of their coordinates are integers. Your task is to find n points ***P***<sub>***1***</sub>, ***P***<sub>***2***</sub>, … , ***P***<sub>***n***</sub> such that the following conditions are satisfied:
* All coordinates of ***P***<sub>***1***</sub>, ***P***<sub>***2***</sub>, … , ***P***<sub>***n***</sub> are integers.
* There exists a **strictly** convex polygon (i.e. it has positive area and no three vertices lie on the same line) with n vertices ***P***<sub>***1***</sub>, ***P***<sub>***2***</sub>, … , ***P***<sub>***n***</sub> (in some order).
* For all ***1 ≤ i ≤ n***, ***P***<sub>***i***</sub> ≠ O and the vectors ***OP***<sub>***i***</sub> and ***v***<sub>***i***</sub> have the same direction.

[Problem Link](https://www.codechef.com/problems/MAKEPOLY)
