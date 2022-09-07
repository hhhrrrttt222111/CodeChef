Problem
Each contest - there are approximately 1500 - 2000 users who participate for the 1st time and get rated.

The Chef wanted to tell new users some tricks for their 1st contest:

Before the contest - you don’t have any rating. So even if you make a single submission - you will become part of the contest rank list and you will get a rating.
If you want your rating to increase - give the entire 3 hours to the contest & don’t quit! If you keep trying till the end, and the more time you get, the more problems you can solve. That means larger rating increases!
Do not ask your friends for their code. If you copy paste their code, you will get caught during plagiarism checks and your rating will be reduced by 275 points, along with a permanent black mark on your profile.
Now to the problem:

In a contest where NN new users visited the contest,

AA users just saw the problems and didn’t make any submissions and hence won’t get any rating.
BB users who made a submission but could not solve any problem correctly. Thus, after the contest, they will get a rating in the range 800 - 1000800−1000.
Everyone else could correctly solve at least 11 problem. Thus, they will get a rating strictly greater than 10001000 after the contest.
You need to output the number of new users in the contest who, after the contest, will get a rating and also the number of new users who will get a rating strictly greater than 10001000.

Input Format
Each input file contains of a single line, with three integers N, AN,A and BB - the number of new users, the number of users who just saw the problem and didn't make any submission, and the number of users who made a submission but could not solve any problem correctly.
Output Format
Output two integers separated by a space in a single line - the number of new users who will get a rating at the end of the contest and the number of new users who will get a rating higher than 10001000.

Constraints
2 \leq N \leq 10002≤N≤1000
1 \leq A \leq 10001≤A≤1000
1 \leq B \leq 10001≤B≤1000
A + B \leq NA+B≤N
Sample 1:
Input
Output
10 3 2
7 5
Explanation:
There were 1010 new users. Among those 1010, 33 didn't make any submissions. This means that the other 10 - 3 = 710−3=7 users made submissions and will get a rating. This is the first integer of the output.

Now, among these 77 users, 22 couldn't solve any problem even though they submitted and tried. So, they will get a rating less than equal to 10001000. The other 7 - 2 = 57−2=5 users were able to solve at least 11 problem and hence will get a rating greater than 10001000. Hence, the second integer of the output is 55.

Sample 2:
Input
Output
10 4 1
6 5
Explanation:
There were 1010 new users. Among those 1010, 44 didn't make any submissions. This means that the other 10 - 4 = 610−4=6 users made submissions and will get a rating. This is the first integer of the output.

Now, among these 66 users, 11 couldn't solve any problem even though they submitted and tried. So, they will get a rating less than equal to 10001000. The other 6 - 1 = 56−1=5 users were able to solve at least 11 problem and hence will get a rating greater than 10001000. Hence, the second integer of the output is 55.

Sample 3:
Input
Output
20 1 2
19 17
Explanation:
There were 2020 new users. Among those 2020, 11 didn't make any submissions. This means that the other 20 - 1 = 1920−1=19 users made submissions and will get a rating. This is the first integer of the output.

Now, among these 1919 users, 22 couldn't solve any problem even though they submitted and tried. So, they will get a rating less than equal to 10001000. The other 19 - 2 = 1719−2=17 users were able to solve at least 11 problem and hence will get a rating greater than 10001000. Hence, the second integer of the output is 1717.

Sample 4:
Input
Output
1000 300 700
700 0
Explanation:
There were 10001000 new users. Among those 10001000, 300300 didn't make any submissions. This means that the other 1000 - 300 = 7001000−300=700 users made submissions and will get a rating. This is the first integer of the output.

Now, among these 700700 users, 700700 couldn't solve any problem even though they submitted and tried. So, they will get a rating less than equal to 10001000. The other 700 - 700 = 0700−700=0 users were able to solve at least 11 problem and hence will get a rating greater than 10001000. Hence, the second integer of the output is 00.
