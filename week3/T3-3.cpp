#include <iostream>

using namespace std;
struct Point{
    int x,y;
};

Point mid_point(const Point& p1, const Point& p2){
    Point mid;
    mid.x=(p1.x+p2.x)/2;
    mid.y=(p1.y+p2.y)/2;
    return mid;
}
void print(Point p){
    cout << "(" <<p.x<<","<<p.y<<")";
}
int main()
{
    Point p1={2, 4};
    Point p2={8,10};
    Point mid = mid_point(p1, p2);
    print(mid);
    return 0;
}
