#include <QCoreApplication>

float rec1(float);
float rec2(float);

float rec1(float i)
{
    if (i == 0) return 1;
    return (1-rec2(i))*rec1(i-1);
}

float rec2(float j)
{
    if (j == 0) return 0;
    return j/365*(1-rec2(j-1));
}

int main()
{
    for (float i = 1; i <= 200; i++)
        printf("%3.f: %f\n", i+1, rec2(i)*rec1(i-1));
    return 0;
}
