#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> v1;
	
	for(int i = 0; i < 10; i++)
		v1.push_back(10 - i);
	
	/*for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		cout<<*it<<endl;*/

	cout<<endl;

	set<int> s1;

	copy(v1.begin(), v1.end(), std::inserter(s1, s1.begin() ) );

	//for( set<int>::iterator its = s1.begin(); its != s1.end(); its++ )
	//	cout<<*its<<endl;

	vector<int>::iterator itr1;
	itr1 = find(v1.begin(), v1.end(), 9 );
	sort(v1.begin(), v1.end());

	for(vector<int>::iterator it1 = v1.begin(); it1 != v1.end(); it1++ )
		cout<<*it1<<" ";
	getchar();
	return 0;
}