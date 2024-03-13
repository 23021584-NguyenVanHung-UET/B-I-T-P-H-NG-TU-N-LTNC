#include <iostream>

using namespace std;
struct Point{
    int x,y;
};

void TruyenThamTri(Point p)
{
    p.x=20;
    p.y=22;
}
void TruyenThamChieu(Point& p)
{
    p.x=30;
    p.y=32;
}
void print(Point p)
{
    cout << p.x <<" "<<p.y;
}
int main()
{
    Point p;
    p.x=10;
    p.y=12;
    cout << "1.";
    print(p);
    cout <<"Truyen bang tham tri:";
    TruyenThamTri(p);
    print(p);
    cout << "Truyen bang tham chieu:";
    TruyenThamChieu(p);
    print(p);

    return 0;
}
