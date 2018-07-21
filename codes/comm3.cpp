#include <iostream>

using namespace std;

bool close(int dx, int dy, int r) {
  return dx*dx + dy*dy <= r*r;
}

int main() {
  int t, r, a, b, c, d, e, f;
  cin >> t;
  while (t--) {
    cin >> r >> a >> b >> c >> d >> e >> f;
    int num = 0;
    if (close(a-c,b-d,r)) ++num;
    if (close(a-e,b-f,r)) ++num;
    if (close(c-e,d-f,r)) ++num;
    if (num > 1) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}
