#pragma once
#include<vector>
using namespace std;


class ShuffleArray {
	vector<int> Copy, index;
	int len = 0;
public:
	ShuffleArray(vector<int> nums) {
		Copy = nums;
		len = nums.size();
		index.resize(len);
		for (int i = 0; i <len; i++)
			index[i] = i;
	}

	/** Resets the array to its original configuration and return it. */
	vector<int> reset() {
		index.resize(len);
		for (int i = 0; i <len; i++)
			index[i] = i;
		return Copy;
	}

	/** Returns a random shuffling of the array. */
	vector<int> shuffle() {
		vector<int> res;
		int temp;
		if (index.empty()) {
			index.resize(len);
			for (int i = 0; i <len; i++)
				index[i] = i;
		}
		while (!index.empty()) {
			temp = rand() % index.size();
			res.push_back(Copy[index[temp]]);
			index.erase(index.begin() + temp);
		}
		return res;
	}
};