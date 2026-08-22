class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int mul = 1;
        int total = 0;
        int temp = n;

        while(temp > 0){
            int rem = temp % 10;
            sum += rem;
            mul *= rem;
            temp = temp/10;
        }
        total = sum + mul;

        if(n % total == 0)return true;

        return false;
    }
};