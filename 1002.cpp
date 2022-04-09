#include <iostream>
#include <math.h>

using namespace std;

int getDistance(int x1, int y1, int x2, int y2) {
  int dx = x2 - x1;
  int dy = y2 - y1;

  return sqrt(dx * dx + dy * dy);
}

int main(void) {
  int x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1;
  cin >> x2 >> y2 >> r2;

  if (r1 > r2) {
    swap(r1, r2);
  }
  int add = r2 + r1;
  int sub = r2 - r1;
  double d = getDistance(x1, y1, x2, y2);

  if (add < d) {
    cout << "not overlapped";
  }
  else {
    cout << "overlapped";
  }
  return 0;
}