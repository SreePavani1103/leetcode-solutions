class Solution {
public:
    bool judgeCircle(string moves) {
        int k=0;
        int l=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='L')
            {
                l++;
            }
            if(moves[i]=='R')
            {
                l--;
            }
           if(moves[i]=='U')
           {
            k++;
           }
           if(moves[i]=='D')
           {
            k--;
           }
        }
        return k==0 && l==0;
    }
};