#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> v1(10);
	v1.push_back(2);
	v1.resize(15);
	cout<<v1.empty()<<endl;
	for(int i=0; i<v1.size(); i++)
		cout<<v1[i]<<" ";

	vector<int> v=v1;
	getchar();
	return 0;
}