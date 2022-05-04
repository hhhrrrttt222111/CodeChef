# [Boredom](https://codeforces.com/contest/455/problem/A)

Alex doesn't like boredom. That's why whenever he gets bored, he comes up with games. One long winter evening he came up with a game and decided to play it.

Given a sequence a consisting of n integers. The player can make several steps. In a single step he can choose an element of the sequence (let's denote it ak) and delete it, at that all elements equal to ak + 1 and ak - 1 also must be deleted from the sequence. That step brings ak points to the player.

Alex is a perfectionist, so he decided to get as many points as possible. Help him.

## Input
The first line contains integer n (1 ≤ n ≤ 10^5) that shows how many numbers are in Alex's sequence.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 10^5).

## Output
## My Solution
- First I go through the array and create a new array of the frequencies of each number in their respective index, for example the frequency of the number 7 is stored at index 7 in the array.
- I then go through that array and build up the sum by choosing to add either the current number or the previous number depending on which is bigger.