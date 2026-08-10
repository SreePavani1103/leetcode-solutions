int sumof(int n)
{
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        sum=sum+digit*digit;
        n=n/10;
    }
    return sum;
}
bool isHappy(int n)
{
    int s=n,f=n;
    do{
    s=sumof(s);
    f=sumof(sumof(f));
    }while(s!=f);
    return (s==1);

}