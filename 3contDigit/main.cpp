#include <unordered_set>
#include <string>
using namespace std;

int main()
{
	string strr = to_string(1.11);
	int y = std::stoi("1999");
	int k = 0,n=19;
	unordered_multiset<char> unSet;
	while (n>=0)
	{
		string  str = std::to_string(n);
		for(auto i : str)
		{
			unSet.insert(i);
		}
		n--;
	}
	char key = *(std::to_string(k)).c_str();
	int count = unSet.count(key);
	return count;
}