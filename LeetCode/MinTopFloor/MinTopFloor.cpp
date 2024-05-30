//
// Created by Jesse on 5/28/2024.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:
    int minCostClimbingStairs(vector<int> &cost) {
        cost.push_back(0);

        for (unsigned i = cost.size() - 3; i < cost.size() - 1; i--) {
            cost[i] += min(cost[i + 1], cost[i + 2]);
        }

        return min(cost[0], cost[1]);
    }
};

int main() {

    vector<int> v = {1, 100, 1, 100, 1, 1, 100, 1};
    Solution *s = new Solution;
    cout << s->minCostClimbingStairs(v);

    return 0;
}

