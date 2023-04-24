#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <map>
using namespace std;
void printmap(bigmap[]) {
  for (int y = 0; y < 20; y++) {
    for (int x = 0; x < 20; x++) {
      cout << bigmap[x][y] << "";
    }
    cout << endl;
  }
}

int main() {
    int length = 0, width = 0;
    while (length < 20) {
        cout << "Please enter map length (must be greater or equal to 20) 🐺: ";
        cin >> length;
        if (length < 20) {
            cout << "Please enter map length greater or equal to 20 😐\n";
        }
    }
    while (width < 20) {
        cout << "Please enter map width (must be greater or equal to 20) 🐺: ";
        cin >> width;
        if (width < 20) {
            cout << "Please enter map width greater or equal to 20 😐\n";
        }
    }
    string bigmap[20][20];
    for (int y = 0; y < 20; y++) {
        for (int x = 0; x < 20; x++) {
            if (x == 0 || x == 20-1 || y == 0 || y == 20-1) {
                bigmap[x][y] == "🍁";
            }
        }
    }
    printmap(bigmap[]);
}
