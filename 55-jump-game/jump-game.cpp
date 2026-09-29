class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump = 0;
        for(int i=0;i<nums.size();i++) {
            if(i > jump) {
                return false;
            }
            jump = max(jump, i+nums[i]);
            if(nums.size()==1 && nums[i]==0) return true;
        }
        return jump;
    }
};