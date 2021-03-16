#include <iostream>
#include <vector>
#include <climits>
#define Max_Chars 256
using namespace std;

bool Constructor(string s1, string s2) {
	if (s1.length() != s2.length()) {
		return false;
	}
	bool arr_b[Max_Chars];
	int arr_v[Max_Chars];
	memset(arr_b, false, sizeof(arr_b));
	memset(arr_v, -1, sizeof(arr_v)); \
		for (unsigned i = 0; i < s2.length(); i++) {
			if (s1[i] == s2[i]) {
				continue;
			}
			else if (arr_v[int(s1[i])] == -1) {
				if (arr_b[s2[i]] == true) {
					return false;
				}
				arr_b[s2[i]] = true;
				arr_v[s1[i]] = s2[i];
			}
			else if (arr_v[s1.at(i)] != s2.at(i)) {
				return false;
			}
		}
	return true;
}

int main() {

	string s1 = "aaba", s2 = "xxya";
	cout << Constructor(s1, s2);


	return 0;
}