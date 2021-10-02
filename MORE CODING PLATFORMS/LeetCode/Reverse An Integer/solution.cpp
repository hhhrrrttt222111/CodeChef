class Solution {
public:
    int reverse(int x) { //declaring a function called reverse
        long long res = 0; //declaring res as long long in order to pass test cases whose values length is more than int
        while(x) { //infinite loop
            res = res*10 + x%10; //adds last value of given value to res
            x /= 10; //remove the last element after adding it to res
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res; //ternary if-else expression for range -2^31 <= x <= 2^31 - 1 (if this condition does'nt satisfy it returns value as 0)
    }
};