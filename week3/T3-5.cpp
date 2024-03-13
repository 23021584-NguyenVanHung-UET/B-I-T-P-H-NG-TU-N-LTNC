#include <iostream>

using namespace std;
struct Point{
    int x,y;
};
struct Rect{
    int x,y,w,h;
    bool contains(const Point& p) const {
        if (p.x>=x && p.x <= x+w &&p.y>=y&&p.y<=y+h)
            return true;
        else return false;
    }
};
int main()
{
    Rect rect;
    Point pInside, pOutside;
    cin >> rect.x >> rect.y >> rect.w >> rect.h;
    cin >> pInside.x >> pInside.y;
    cin >> pOutside.x >> pOutside.y;
    cout << (rect.contains(pInside)? "true" : "false") << endl;
    cout << (rect.contains(pOutside)?"true":"false") << endl;
    return 0;
}
