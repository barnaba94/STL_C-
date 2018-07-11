#include <iostream>

using namespace std;

template<typename T>
T add(T a, T b)
{
	return a+b;
}

int main(int argc, char** argv)
{
	int a = 3;
	int b = 4;
	cout<<add<int>(a, b)<<endl;

	float a1 = 3.5;
	float b1 = 4.1;
	cout<<add<float>(a1, b1)<<endl;
	getchar();
	return 0;
}