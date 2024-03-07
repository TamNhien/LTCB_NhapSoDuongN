#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong cac so duong: ";
    cin >> n;

    cout << "Nhap " << n << " so duong :\n";
    for (int i = 0, num; i < n && cin >> num && num >= 0; ++i) {}

    return 0;
}
