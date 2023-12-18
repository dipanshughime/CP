class Solution {
public:
    int reverse(int x) {
        if (x == -2147483648) //If x is equal to the min then we can't negate it without overflowing.
            return 0;//would overflow since the desired output is -8463847412;
        bool is_negative = x < 0;
        if (is_negative)
            x = -x;
        int reverse = 0;
        
        while (x > 0) {
            int digit = x % 10;
            x = x / 10;
            if (reverse > numeric_limits<int>::max() / 10)
                return 0;//The result would overflow
            reverse = 10 * reverse;
            reverse += digit;
        }
        
        if (is_negative)
            reverse = -reverse;
        return reverse;
    }
};