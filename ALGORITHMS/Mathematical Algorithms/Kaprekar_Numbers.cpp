// This is the C++ code to check whether a given number is Kaprekar or not.

#include <bits/stdc++.h>
class Kaprekar_Number
{
    int num;

public:
    Kaprekar_Number(int n)
    {
        num = n;
    }

    // Calculate the total number of digits present in the number.
    int no_of_digits()
    {
        int cnt = 0, tmp = num;
        while (tmp)
        {
            tmp = tmp / 10;
            cnt++;
        }
        return cnt;
    }
    // Check whether the number is Kaprekar or not.
    int check_kaprekar(int cnt, int s, int num)
    {
        int i = 0, a[cnt], prev = 0, next = 0, tmp = s;
        while (tmp != 0)
        {
            a[i] = tmp % 10;
            tmp = tmp / 10;
            i++;
        }
        for (i = cnt - 1; i >= cnt - (cnt / 2); i--)
        {
            prev = prev * 10 + a[i];
        }
        while (i >= 0)
        {
            next = next * 10 + a[i];
            i--;
        }

        if (prev + next == num)
            return 1;
        else
            return 0;
    }
};

int main(int argc, char *argv[])
{
    int num, cnt, res, s;
    cout << "Enter a number: ";
    cin >> num; // If the number is 9
    s = num * num;
    Kaprekar_Number kn(s);
    cnt = kn.no_of_digits();
    res = kn.check_kaprekar(cnt, s, num);
    if (res)
        cout << num << " is a Kaprekar Number" << std::endl; //Then output is 9 is a Kaprekar Number
    else
        cout << num << " is not a Kaprekar Number" << std::endl;
    return 0;
}
