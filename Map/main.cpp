#include <iostream>
#include <map>

using namespace std;

int main(int argc, char** argv)
{
	pair<char, int> p1;
	map<char, int> m1;

	for(char c = 'a'; c <= 'z'; c++)
	{
		p1.first = c;
		p1.second = (int)c;
		m1.insert(p1);
	}
	
	map<char, int>::iterator it;

	for(map<char, int>::iterator it=m1.begin(); it!=m1.end(); it++ )
		cout<<(*it).first<<" "<<(*it).second<<endl;

	it = m1.find('g');
	cout<<endl<<(*it).second;
	getchar();
	return 0;
}