bool isPowerOfTwo(int n) {
    if((n%2==0)||(n==1))
    {
        for(int i=0;i<=100;i++)
        {
            if(pow(2,i)==n)
            {
                return 1;
            }
        }
    }
    return 0;
}
