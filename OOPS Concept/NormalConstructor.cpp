#include<bits/stdc++.h>
using namespace std;
class Point
{
    private:
      int x,y;
    public:
      Point()
      {
        x=0;
        y=0;
      }
      Point(int x1,int y1)
      {
        x=x1;
        y=y1;
      }
      void print()
      {
        cout<<x<<" "<<y<<endl;
      }
};

int main()
{
    Point p1,p2(5,10);
    p1.print();
    p2.print();

    // Dynamically Allocation
    Point *ptr = new Point(10,20);
    ptr->print();
    return 0;


}