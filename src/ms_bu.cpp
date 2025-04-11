#include<vector>
#include"ms_bu.h"

void mergesort_conquer(std::vector<int>& nums, int left, int mid, int right){
	int j = left;
	int k = mid + 1;
	std::vector<int> temp;
	while(j <= mid && k <= right){
		if(nums[j] < nums[k]){
			temp.push_back(nums[j]);
			j++;
		}else{
			temp.push_back(nums[k]);
			k++;
		}
	}
	while(j <= mid){	
		temp.push_back(nums[j]);
		j++;
	}
	while(k <= right){	
		temp.push_back(nums[k]);
		k++;
	}
	for(int l = 0; l < temp.size(); l++){
		nums[left+l] = temp[l];
	}
}



void mergesort_divid(std::vector<int>& nums){
	int n = nums.size();
	for(int i = 1; i < n; i = i * 2){
		for(int j = 0; j < n - i; j += i * 2){
			int k = j + i - 1;
			int l = j + i * 2 - 1;
			mergesort_conquer(nums, j, k, l);
		}
	}
}
