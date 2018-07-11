#include <iostream>
using namespace std;

template<class T>
class dupa
{
public:
	T a[2];
	T add();
	dupa();
};

template<class T>
dupa<T>::dupa()
{
	cin>>a[0]>>a[1];
}

template<class T>
T dupa<T>::add()
{
	return a[0] + a[1];
}

int main(int argc, char** argv)
{
	dupa<int> p1;
	cout<<p1.add();
	getchar();getchar();
	return 0;
}