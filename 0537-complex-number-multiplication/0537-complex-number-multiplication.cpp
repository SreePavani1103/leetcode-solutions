class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a,b,c,d;
        a=stoi(num1.substr(0,num1.find('+')));
        b=stoi(num1.substr(num1.find('+')+1,num1.size()));
        c=stoi(num2.substr(0,num2.find('+')));
        d=stoi(num2.substr(num2.find('+')+1,num2.size()));
        int k=a*c-b*d;
        int l=a*d+b*c;
        
        return to_string(k)+"+"+to_string(l)+"i";
    }
};