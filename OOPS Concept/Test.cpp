#include<bits/stdc++.h>
using namespace std;
 
class Test{
   public:
      Test()
      {
        cout<<"Default";
      }
      Test(int x)
      {
        cout<<"Parametrized";
      }
};
class Main{
    Test t;
    public:
      Main()
      {
        t=Test(10);
      }
};
int main()
{
    Main m;
    return 0;
}
