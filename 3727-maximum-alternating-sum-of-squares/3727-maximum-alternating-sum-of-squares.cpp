class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = abs(nums[i]);
        }

        sort(nums.begin(),nums.end());

        long long sum = 0;
        int left = 0;
        int right = nums.size()-1;

        while(left < right){
            long long l = 1LL * nums[left] * nums[left];
            long long r = 1LL * nums[right] * nums[right];

            sum += r-l;
            left++;
            right--;
        }

        if (left == right) {
            sum += 1LL * nums[left] * nums[left];
        }
        return sum;
    }
};