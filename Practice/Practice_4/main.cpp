#include <iostream>
#include <math.h>

using namespace std;

float func_Px(float x, float y)
{
    return -2*x-2*pow(y,2) + 2 +4*x*y+4*pow(x,3);
}
float func_Py(float x, float y)
{
    return -4*x*y+4*pow(y,3)-2*y+2*pow(x,2)-2;
}
void calcul_anti_grad(float* arr,float x, float y, int k, float eps = 0.05)
{
    float xk, yk;
    for (int i = 1; i <= k; i++)
    {
        xk = x - eps*func_Px(x,y);
        yk = y - eps*func_Py(x,y);
        x = xk;       
        y=yk;
    }
    arr[0] =x;
    arr[1] =y;
}
int main(void)
{
    float arr[2];
    calcul_anti_grad(arr,0,0,100);
    cout << arr[0] << " " <<arr[1] << endl;
}