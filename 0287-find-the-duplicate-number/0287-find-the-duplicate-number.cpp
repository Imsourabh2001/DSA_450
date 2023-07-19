class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> tmp;
        tmp=nums;
        int ans;
        sort(tmp.begin(),tmp.end());
        for(int i=1;i<tmp.size();i++)
        {
            if(tmp[i-1]==tmp[i])
            {
                ans=tmp[i];
                break;
            }
            
        }
        return ans;
    }
};