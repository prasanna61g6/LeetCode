class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = 0;
        int mini = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
       for(int i = 0; i < n; i++) {
        maxi = nums[n - 1];
        mini = nums[0];
       }
         while(mini != 0) {
            int temp = mini;
            mini = maxi % mini;
            maxi = temp;
         }
       return maxi;
        
    }
};