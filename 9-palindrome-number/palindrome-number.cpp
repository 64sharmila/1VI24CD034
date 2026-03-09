class Solution {
public:
    bool isPalindrome(int x) {                                    //checks if the number x is palindrome.
        if(x < 0 || (x % 10 == 0 && x != 0))                      //negative numbers cannot be palindrome.
            return false;

        int rev = 0;

        while(x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        return (x == rev || x == rev / 10);
    }
};