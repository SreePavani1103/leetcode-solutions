class Solution {
public:
    int calPoints(vector<string>& operations) {
        int s[1001];
        int top=0;
        int n=operations.size();
        for(int i=0;i<n;i++)
        {
            char ch=operations[i][0];
            if(ch!='D' && ch!='C' && ch!='+')
            {
                top++;
                s[top]=stoi(operations[i]);
            }
            else if(ch=='C')
            {
                top--;

            }
            else if(ch=='D')
            {
                int d=s[top];
                top++;
                s[top]=2*d;
               }
               else
               {
                int k=s[top];
                int l=s[top-1];
                top++;
                s[top]=k+l;
               }
        }
        int sum=0;
        for(int i=top;i>=0;i--)
        {
            sum+=s[i];
        }
     return sum;
    }
};