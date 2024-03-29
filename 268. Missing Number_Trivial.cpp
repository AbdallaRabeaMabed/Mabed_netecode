class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(int i =0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        for(int i =0; i <= n; i++)
        {
            if(!mp[i])
                return i;
        }
        return -1;
    }
};
