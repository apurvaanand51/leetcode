#include <stdio.h>
#include <limits.h>
int reverse(int x){
    int rev = 0, temp = x, rem = 0;

        while(temp != 0){
            rem = temp % 10;
            temp = temp / 10;

            if ((rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) || (rev < INT_MIN / 10 || (rev ==   INT_MIN / 10 && rem < -8))) {
                return 0;
            }

            rev = rev * 10 + rem;
        }

    return rev;
}