int findMax(vector<int> &nums, int i,int j){
    int maxi = INT_MIN;
    for(int s=i;s<j;s++){
        if(nums[s] > maxi){
            maxi = nums[s];
        }
    }
    return maxi;
}

int findMin(vector<int> &nums,int i, int j){
    int mini = INT_MAX;
    for(int s=i;s<j;s++){
        if(nums[s] < mini){
            mini = nums[s];
        }
    }
    return mini;
}

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int num;
        for(int i=0;i<n;i++){
            num = findMax(nums,0,i+1) - findMin(nums,i,n);

            if(num <= k){
                return i;
            }
        }
        return -1;
    }
};