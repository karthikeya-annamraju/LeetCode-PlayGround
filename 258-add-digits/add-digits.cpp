class Solution {
public:
    
    int sumOfDigits(int n) {
        int digitSum = 0;
        while (n > 0) {
            digitSum += n%10;
            n/=10;
        }
        // cout << digitSum << endl;
        if (digitSum > 9) return sumOfDigits(digitSum);
        return digitSum;
    }
    
    int addDigits(int num) {
        return sumOfDigits(num);
    }
};