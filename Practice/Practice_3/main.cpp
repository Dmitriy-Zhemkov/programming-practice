#include <iostream>
#include <stdlib.h>

using namespace std;

int GetRandomNumberInt(int min, int max) {
    int num = min + rand()%(max - min +1);
    return num;
}
float GetRandomNumberFloat(float min, float max) {
    float flo =  min + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(max-min)));
    return flo;
}

int main() {
    int i;
    float f;
    int number;
    srand(time(NULL));
    for (int i=0; i < 100; i++) {
        number = GetRandomNumberInt(-100, 100);
        cout << "int number = " << number << endl;
        f = GetRandomNumberFloat(0,1);
        cout << "float number = " << f << endl;
    }
    return 0;
}