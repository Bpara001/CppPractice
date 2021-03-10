
#include<iostream>
#include <map>
using namespace std;


void longestSubarray(int* A, int N, int X)
{
	int start = 0, current = 0, end = 0,length =0;
	map<int, int>hash;

	for (; end < N; end++) {
		hash[A[end]]++;

		int min = hash.begin()->first;
		int max = hash.rbegin()->first;
		if(max-min <=X){
			if (length < end - current + 1) {
				length = end - current + 1;
				start = current;
			}
		}
		else {
			while (current < end) {
				hash[A[current]]--;
				if (hash[A[current]] == 0) {
					hash.erase(hash.find(A[current]));
				}
				current++;
				int min = hash.begin()->first;
				int max = hash.rbegin()->first;
				if (max - min <= X) {
					break;
				}
			}
		}
	}
	for (int i = start; i < start + length; i++) {
		cout << A[i] << " ";
	}
	cout << endl << length;
}

// Driver Code
int main()
{
	int arr[] = { -1, 4, 6, 2, 8, 4, 7, 12, 1, 2, 3, 4, 5, 6, 7 } , X = 5;  
	// Answer =6
	//{ 1, 2, 3, 4 ,5 ,6 }
	int n = sizeof(arr) / sizeof(arr[0]);

	longestSubarray(arr, n, X);

	return 0;
}