#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char** argv)
{
	deque<int> v1;

	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_front(1);

	for(int i=0; i<v1.size(); i++)
		cout<<v1[i]<<" ";

	getchar();
	return 0;
}