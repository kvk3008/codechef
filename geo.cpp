#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
   int test;
    cin >> test;
    while(test--)
    {
       int i,px,py,rx,ry;
       rx=0,ry=0;
       for(i=1;i<=2;i++)
       {
        cin >> px;
        cin >> py;
        rx=i*pow(-1,i)*px+ rx;
        ry=i*pow(-1,i)*py+ ry;
       }
       cout << rx << " " << ry << endl;
    }
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

