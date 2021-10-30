# [Professor And Directions (DIRECTN)](https://www.codechef.com/START16C/problems/DIRECTN/)
The Professor is facing the North. Tokyo is in trouble, and she is facing the South. Professor being her guardian angel wants to help her.

So, The Professor will follow some instructions, given as a string S of length N, and will turn either left or right according to these instructions. He can save Tokyo only if after following a substring of instructions he will face in the same direction that Tokyo is facing.

Will the Professor be able to save Tokyo?
<hr>

## Input Format
The first line contains an integer <b>T</b> denoting the number of test cases. The <b>T</b> test cases then follow.<br>
The first line of each test case contains <b>N</b>.<br>
The second line contains a string that contains only <b>'L'</b> and <b>'R'</b>, where <b>'L'</b> represents left and <b>'R'</b> represents right.
<hr>

## Output Format
For each test case, output "YES" if the Professor will be able to save Tokyo and "NO" otherwise.<br>

Output is case insensitive, which means that "yes", "Yes", "YEs", "no", "nO" - all such strings will be acceptable.
<hr>

## Constraints<br>
1≤<b>T</b>≤100
2≤<b>N</b>≤10<sup>5</sup><br>
The string <b>S</b> consists of uppercase characters <b>'L'</b> and <b>'R'</b> only.<br>
The sum of <b>N</b> over all test cases does not exceed 10<sup>6</sup>.<br>
<hr>

### Sample Input 1<br>
3<br>
12<br>
LRLRRRLRLLLL<br>
2<br>
LR<br>
4<br>
LRRL<br>
### Sample Output 1 
YES<br>
NO<br>
YES
