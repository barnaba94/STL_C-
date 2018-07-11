#include <iostream>
#include <set>

using namespace std;

int main(int argc, char** argv)
{
	set<int> s1;

	for(int i=0; i<10; i++)
		s1.insert( i );

	set<int>::iterator it;
	it = s1.find(6);

	s1.erase(it);

	for(set<int>::iterator it1 = s1.begin() ; it1 != s1.end(); it1++)
		cout<<*it1<<" ";

	getchar();
	return 0;
}