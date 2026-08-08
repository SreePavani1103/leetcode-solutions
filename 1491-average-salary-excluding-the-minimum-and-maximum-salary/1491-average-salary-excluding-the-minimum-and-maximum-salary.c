double average(int* salary, int salarySize) {
    int min=salary[0];
    int max=salary[0];
    int sum=0;
    for(int i=0;i<salarySize;i++)
    {
            sum=sum+salary[i];
        if(salary[i]>min)
        {
            min=salary[i];
        }
        if(salary[i]<max)
        {
            max=salary[i];
        }
    }
    int k=sum-(min+max);
    return k/(double)(salarySize-2);

}