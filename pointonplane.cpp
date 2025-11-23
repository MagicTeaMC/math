#include <iostream>

using namespace std;

int main() {
    int vx, vy, vz;
    int px, py, pz;

    cin >> vx >> vy >> vz;
    cin >> px >> py >> pz;

    int x, y, z;
    cin >> x >> y >> z;

    if ((x-px)/vx==(y-py)/vy && (y-py)/vy==(z-pz)/vz) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
