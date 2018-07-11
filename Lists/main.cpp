#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	list<int> l1;

	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	
	list<int>::iterator itr=find(l1.begin(), l1.end(), 3 );
	l1.insert(itr, 5);

	itr = find(l1.begin(), l1.end(), 5);
	l1.erase(itr);

	for(list<int>::iterator it = l1.begin(); it != l1.end(); it++)
		cout<<*it<<" ";

	getchar();
	return 0;
}