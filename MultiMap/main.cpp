#include <iostream>
#include <map>

using namespace std;

int main(int argc, char** argv)
{
	pair<char, int> p1;
	multimap<char, int> m1;

	for(char c = 'a'; c <= 'z'; c++)
	{
		p1.first = c;
		p1.second = (int)c;
		m1.insert(p1);
	}

	//add second value to argument
	p1.first = 'c';
	p1.second = 1000;
	m1.insert(p1);

	multimap<char, int>::iterator it;

	for(multimap<char, int>::iterator it=m1.begin(); it!=m1.end(); it++ )
		cout<<(*it).first<<" "<<(*it).second<<endl;

	it = m1.find('g');
	cout<<endl<<(*it).second;

	it = m1.find('c');
	cout<<endl<<(*it).second<<" "<<(*it++).second;
	getchar();
	return 0;
}
