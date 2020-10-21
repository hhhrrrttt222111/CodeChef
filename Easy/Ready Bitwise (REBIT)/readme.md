# Ready Bitwise Problem Code: [REBIT](https://www.codechef.com/problems/REBIT)

## Problem statements
Yukti found a strange paper with a Boolean expression written on it. Unfortunately, all the operands were missing from this expression. Being an innovative person, Yukti immediately created a riddle for her students based on this incomplete expression.

The students are given a string L describing a valid Boolean expression, where each operand (value) is replaced by the character '#'. A valid expression is defined as one of the following:

- A single term '#'.
- A string in the format "([expression1][operator][expression2])", where [expression1] and [expression2] are valid expressions and [operator] is one of the characters '&', '|' and '^' (denoting bitwise AND, OR and XOR respectively).
Each of the characters '#' in the string L should be replaced by one of the characters '0', '1', 'a' and 'A', uniformly randomly and independently. Then, the resulting expression is evaluated as follows:

- A Boolean value a (0 or 1) is chosen. Each occurrence of the character 'a' is interpreted as this value and each occurrence of 'A' is interpreted as its negation (1−a). The characters '0' and '1' are interpreted as the Boolean values 0 and 1 respectively.
- Since there are two possible values of a, we obtain two constant Boolean expressions this way. Let's denote them by G0 (when a = 0) and G1 (when a = 1).
- Let's evaluate G0 and G1.
    - If **G0=G1=0**, the value of the expression is '0'.
    - If **G0=G1=1**, the value of the expression is '1'.
    - If **G0=0** and **G1=1**, the value of the expression is 'a'.
    - If **G0=1** and **G1=0**, the value of the expression is 'A'.
Can you find the probabilities with which the expression obtained after substituting for each character '#' evaluates to these values? It can be proved that for each of these values, the probability can be expressed as a fraction **PQ**, where **P** and **Q** are integers **(P≥0, Q>0)** and **Q** is coprime with **998,244,353**. You should compute **P⋅Q^−1** modulo 998,244,353 for each of these values.
----------------
### Input
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first and only line of each test case contains a single string L.
----------------
### Output

For each test case, print a single line containing four space-separated integers ― the answers corresponding to the probabilities that the value of the Boolean expression is '0', '1', 'a' or 'A' respectively.

-----------------

### Constraints
- 1≤T≤600
- 1≤|L|≤100,000
- L contains only characters '#', '(', ')', '&', '|' and '^'
- the sum of |L| over all test cases does not exceed 106
-----------------
### Subtasks
**Subtask #1 (30 points):** |L| ≤ 300

**Subtask #2 (70 points):** original constraints

------------

### Example Input
2

\#

(#&#)

--------------

### Example Output
748683265 748683265 748683265 748683265

436731905 935854081 811073537 811073537

----------

### Explanation
**Example case 1:** The probabilities that the value of the expression is '0', '1', 'a' or 'A' are all equal to 1/4.

**Example case 2:** There can be total 16 different expressions. Out of which :

For : (1&1) ---> G0=G1=1, Probability for 1 = 1/16

(a&1) , (1&a) , (a&a) ---> G0=0 and G1=1, Probability for 'a' = 3/16

(A&1) , (1&A) , (A&A) ----> G0=1 and G1=0, Probability for 'A' = 3/16

Rest all expressions have G0=G1=0, Probability for '0' = 9/16
