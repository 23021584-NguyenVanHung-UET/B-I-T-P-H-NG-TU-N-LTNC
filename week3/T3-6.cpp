#include <iostream>

using namespace std;

struct Rect {
  int x;
  int y;
  int width;
  int height;
};

struct Ship {
  Rect rect;
  string id;
  int dx;
  int dy;

  void move() {
    rect.x += dx;
    rect.y += dy;
  }
};

void display(const Ship& ship) {
  cout << "SO HIEU: " << ship.id << endl;
  cout << "TOA DO: (" << ship.rect.x << ", " << ship.rect.y << ")" << endl;
}

int main() {
  Ship ship1;
  ship1.id = "ABC123";
  ship1.rect.x = 10;
  ship1.rect.y = 20;
  ship1.rect.width = 50;
  ship1.rect.height = 30;
  ship1.dx = 5;
  ship1.dy = 3;

  ship1.move();
  display(ship1);

  return 0;
}
