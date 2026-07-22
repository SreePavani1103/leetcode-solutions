class Solution {
public:
void expression(string s,int &l ,int &r)
{
    int n=s.size();
    int sign=1;
    
    int i=0;
    while(i<n)
    {
        bool yes=false;
          if(s[i]=='+')
          {
            sign=1;
            i++;
          }
          if(s[i]=='-')
          {
            sign=-1;
            i++;
          }
          int num=0;
          while(i<n && isdigit(s[i]))
          {
              num=num*10+(s[i]-'0');
              yes=true;
              i++;
          }
          if(i<n && s[i]=='x')
          {
            if(!yes)
            {
                num=1;
            }
          
            l+=num*sign;
             i++;
          }
             else
             {
                 r+=num*sign;
             }
          
    }
}
    string solveEquation(string equation) {
        string s=equation;
        int pos=s.find("=");
        string l=s.substr(0,pos);
        string r=s.substr(pos+1);
        int c1=0,n1=0,c2=0,n2=0;
        expression(l,c1,n1);
        expression(r,c2,n2);
        int k1=c1-c2;
        int k2=n1-n2;
        
          if(k1==0)
          {
            if(k2==0)
            {
          return "Infinite solutions";
            }
            else
            return "No solution";
          }
          return "x="+to_string((-k2)/k1);
    }
};