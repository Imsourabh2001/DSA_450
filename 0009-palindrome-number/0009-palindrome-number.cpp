class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int y=x;
        long num=0;
        while(y)
        {
            num=num*10+y%10;
            y/=10;
        }
        if(num==x) return true;
        else return false;
    }
};