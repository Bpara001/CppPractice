#include <iostream>
#include <string.h>
#include "vector"
#include "map"
#include "queue"
using namespace std;
vector<int> SubArraySum(vector<int> v) {
	vector<int> results;
	map<int, int> hash;
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] > 10) {
			hash[((v[i] / 10) % 10)]++;
			hash[(v[i] % 10)]++;
		}
		else {
			hash[(v[i] % 10)]++;
		}
	}

	priority_queue<pair<int, int>> pq;
	for (auto i : hash) {
		cout << i.first << ": " << i.second << endl;
		pq.push(make_pair(i.second, i.first));
	}

	int condition = pq.top().first;
	for (int i = 0; i < pq.size(); i++) {
		if (pq.top().first == condition) {
			results.push_back(pq.top().second);
			pq.pop();
		}
		else {
			break;
		}
	}
	reverse(results.begin(), results.end());
	return results;

}

int main() {
	vector<int> v = { 11,22,30,3,7 };
	vector<int> results;
	results = SubArraySum(v);

	cout << "Final Vector: " << endl;

	for (int i = 0; i < results.size(); i++) {
		cout << results[i] << endl;
	}
	return 0;
}

