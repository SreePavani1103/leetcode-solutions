class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        if(n<8)
        return n;
        else if(n/8==1 )
        {
            return 8+(n-8)*2;
        }
        else if(n/8==2)
        {
           return  (n/8)*(n-8)+(n-8);
        }
        else
        return (n/8)*(n-8)+n%8;
        //n%8;
    }
};