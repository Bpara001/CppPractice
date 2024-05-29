#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
int MinAdjSwap(std::string s) {
	int sum = 0, current=0;
	int size = s.length() - 1;
	std::unordered_map<char, int>hash;

	for (int i = 0; i < s.size(); i++) {
		hash[s.at(i)]++;
	}

	for (std::unordered_map<char, int>::iterator itr = hash.begin(); itr != hash.end(); itr++) {
		current += (itr->second & 1);
	}

	if (current > 1) {
		return -1;
	}

	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] == s[size - i])
			continue;

		int j, k;
		for (j = i + 1; j <= size - i && s[j] != s[size - i]; j++);
		for (k = size - i - 1; k >= i && s[k] != s[i]; k--);
		sum += std::min(j - i, size - i - k);
		if (j - i < size - i - k) {
			for (int p = j; p > i; p--)
				std::swap(s[p], s[p - 1]);
		}
		else {
			for (int p = k; p < size - i; p++)
				std:: swap(s[p], s[p + 1]);
		}
	}
	return sum;
}



int main() {

	std::string s = "asmma";
	std::cout<<MinAdjSwap(s);

	return 0;
}