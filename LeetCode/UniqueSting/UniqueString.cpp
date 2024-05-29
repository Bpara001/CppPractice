#include <iostream> 
#include <unordered_map>
#include <queue>
#include <string>


int IsUnique(std::string s) {
	int total = 0;
	int	curr = 0;
	std::unordered_map<char, int> hash;

	for (int i = 0; i < s.size(); i++) {
		hash[ s.at(i) ] += 1;
	}

	std::priority_queue<int> q;

	for (std::unordered_map<char, int>::iterator itr = hash.begin(); itr != hash.end(); itr++) {
		q.emplace(itr->second);
	}

	while (!q.empty()) {
		curr = q.top();
		q.pop();
		if (q.empty()) {
			break;
		}
		else if ( curr == q.top() && curr !=0 ) {
			total += 1;
			curr--;
			q.emplace(curr);
		}
		
	}
	
	return total;
}


int main() {

	std::string s = "ceabaacb";
	std::cout<<IsUnique(s);

	
	

	return 0;
}