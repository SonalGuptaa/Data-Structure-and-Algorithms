  int countPrimes(int n) {
        if(n==0 && n==1)
        {
            return 0;
        }
        int cnt=0;
        if(n%2==0 && n%2==0)
        {
            return 0;
        }
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0 || n%(i+1)==0)
            {
                return false;
            }
            return true;
        }
    }