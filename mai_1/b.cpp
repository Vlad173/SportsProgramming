#include <iostream>
#include <cmath>

using namespace std;

double length(int ax, int ay, int bx, int by)
{
    return sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by)); 
}

int main()
{
    int ax, ay, bx, by;
    double k;
    cin >> ax >> ay >> bx >> by >> k;
    double ab = length(ax, ay, bx, by);
    double cd = ab * k; 
    
    return 0;
}
