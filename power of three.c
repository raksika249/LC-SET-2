bool isPowerOfThree(int n) {
    if((n%3==0)||(n==1))
    {
        for(int i=0;i<=100;i++)
        {
            if(pow(3,i)==n)
            {
                return 1;
            }
        }
    }
    return 0;
}
