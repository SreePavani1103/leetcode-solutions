class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        int l=numRows;
        if(l==1 || n<=l)
        return s;
        int id=0;//to track characters in the string
        int j=0;//to track the rows  in vector of strings
        int dir=1;//decide whether to go up or down to go up dir=-1 down dir=1
        vector<string>v(l);
        while(id<n)
        {
            v[j]+=s[id];//adding current character ti the suitable row
            id++;
            if(j==0)//if j is at the fisrt row 
            {
                dir=1;//to go down we have to increment j
            }
            if(j==l-1) //if it reaches the last row
            {
                dir=-1;// to got up we have to decrement j
            }
            j+=dir;//increment or decrement j according to condition
        }
        string s1="";
        for(int i=0;i<v.size();i++)
        {
            s1+=v[i];
        }
        return s1;
    }
};