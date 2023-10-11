class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int n=s.size();
        while(i<=n)
        {
            int j=i;
            while(j<n && s[j]!=' ')
            {
                j++;
            }
            // if(j>=n)break;
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
        }
        return s;
    }
};
