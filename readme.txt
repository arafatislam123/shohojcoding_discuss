problem:https://leetcode.com/problems/roman-to-integer/description/
solotion:
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                ans=ans+1;
            }
            else if(s[i]=='V')
            {
                ans=ans+5;
            }
            else if(s[i]=='X')
            {
                ans=ans+10;
            }
            else if(s[i]=='L')
            {
                ans=ans+50;
            }
           else  if(s[i]=='C')
            {
                ans=ans+100;
            }
          else  if(s[i]=='D')
            {
                ans=ans+500;
            }
            else if(s[i]=='M')
            {
                ans=ans+1000;
            }
            
        }
        return ans;
    }
};