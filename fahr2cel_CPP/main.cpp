#include <iostream>

using namespace std;

inline double fahr2Cels(double x)
{
    return 5./9*(x-32);
}

int main()
{
    const int lower = -120;
    const int upper = 80;
    const int step = 10;

    for(int i=lower; i<= upper; i+=step)
    {
        cout<<i<<"Fahr\t"<<fahr2Cels(i)<<"Celsius"<<endl;
    }

    return 0;
}
