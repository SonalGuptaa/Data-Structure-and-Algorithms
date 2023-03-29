int fibo(int n)
{
//Base Case 
if(n==0 || n==1)
{
    return n;
}
//Recursive Case
int f1=fibo(n-1);
int f2=fibo(n-2);
int ans=f1+f2;
return ans;
}