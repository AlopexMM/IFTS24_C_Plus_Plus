#include <iostream>

using namespace std;

int main() {

    string matriz[2][3] = {{"a00","a01", "a02"},
                    {"a10", "a11", "a12"}};
    string transpuesta[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
            cout << "Transpuesta [" << i << "]" << "[" << 0 << "]:" << transpuesta[i][0] << endl;
    }
    for (int i = 0; i < 3; i++) {
            cout << "Transpuesta [" << i << "]" << "[" << 1 << "]:" << transpuesta[i][1] << endl;
    }
    return 0;
}