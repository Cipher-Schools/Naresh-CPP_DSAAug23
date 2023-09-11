class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        
        // / % 10
        
        int sum = 0;
        
        while(N > 0) {
            int rem = N % 10;
            sum = sum + rem;
            N = N / 10;
        }
        
        int rev = 0;
        int temp = sum;
        while(sum > 0) {
            int rem = sum % 10;
            rev = rev * 10 + rem;
            sum = sum / 10;
        }
        
        if(rev == temp) {
            return 1;
        }
        
        return 0;
        
        
        
    }
};