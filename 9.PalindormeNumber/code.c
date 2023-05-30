#include <stdio.h>
#include <math.h>

int isPalindrome(int x) {
    if ((x < 0) || (x > pow(2, 31) - 1))
        return 0;
    else if (x >= 0) 
        if (x < 10)
            return 1;
    else {
        int c = (int)floor(log10(x));
        int d = pow(10, c);

        if ((x % 10) == (x / d)) {
            if ((c == 1) || (c == 2))
                return 1;
            else {
                d /= 10;

                x /= 10;
                int y = x / d;
                x = x - y * d;

                c = (int)floor(log10(x));
                
                if (d > 10)
                    if (c == 0)
                    return 1;

                d = (d / 10) / pow(10, c);

                if (x % d == 0)
                    x /= d;

                return isPalindrome(x);
            }
        }
    }
    return 1;
}

int main(int argc, char* argv[]) {
    if (isPalindrome((int)*argv[1]) == 1)
        printf("%s\n is a palindrome number.", argv[1]);
    else
        printf("%s\n is Not a palindrome number.", argv[1]);

    return 0;
}