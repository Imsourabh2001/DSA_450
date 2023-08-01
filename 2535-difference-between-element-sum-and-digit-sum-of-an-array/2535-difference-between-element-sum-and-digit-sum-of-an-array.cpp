class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        int digitSum=0;
        int n;
        for(int i=0;i<nums.size();i++) elementSum+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            n=nums[i];
            while(n>0)
            {
                digitSum+=n%10;
                n=n/10;
            }
            
        }
        return abs(elementSum-digitSum);
    }
};