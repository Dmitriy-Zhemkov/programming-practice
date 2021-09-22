#include <iostream>
#include <vector>
#include <tuple>
#include <numeric>

using namespace std;

auto GetRandomNumbers(int min, int max) {
    int num = min + rand()%(max - min +1);
    float flo =  float(0.0) + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(float(1.0)-float(0.0))));
    return std::make_tuple(num, flo);
}

int main() {
    srand(time(NULL));
    int arr[]
    std::vector<int> vector_int;
    std::vector<float> vector_float;
    double sum = 0;
    for (int i=0; i < 100; i++) {
        auto [number, f]= GetRandomNumbers(-100, 100);
        cout << "int number = " << number << endl;
        cout << "float number = " << f << endl;
        vector_int.push_back(number);
        vector_float.push_back(f);
        sum += number;
    }
    float mean_int = std::accumulate(vector_int.begin(), vector_int.end(), 0.0) / vector_int.size();
    float mean_float = std::accumulate(vector_float.begin(), vector_float.end(), 0.0) / vector_int.size();
    cout << "mean_int = " << mean_int << endl << "mean_float = " << mean_float << endl;
    auto disp_int = 0;
    auto disp_float = 0.0;
    for(int i = 0; i < vector_int.size(); i++ )
    {
        disp_int += ( vector_int[i] - mean_int ) * ( vector_int[i] - mean_int );
        disp_float += ( vector_float[i] - mean_float ) * ( vector_float[i] - mean_float );
    }
    disp_int /= (vector_int.size()- 1 );
    disp_float /= (vector_float.size()- 1);
    cout << "dispersion_int = " << disp_int << endl << "dispersion_float = "  << disp_float << endl;
    return 0;
}