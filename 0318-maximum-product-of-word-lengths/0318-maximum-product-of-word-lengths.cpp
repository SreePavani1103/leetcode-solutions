class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int>mask;
        vector<int>len;
        for(int i=0;i<words.size();i++)
        {
            int m=0;
            for(int j=0;j<words[i].size();j++)
            {
                m|=(1<<(words[i][j]-'a'));
            }
            mask.push_back(m);
            len.push_back(words[i].size());
        }
        int m=0;
        for(int i=0;i<mask.size();i++)
        {
            for(int j=i+1;j<mask.size();j++)
            {
                if((mask[i]&mask[j])==0)
                {
                    m=max(len[i]*len[j],m);
                }
            }
        }
        return m;
    }
};