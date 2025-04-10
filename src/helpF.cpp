#include"helpF.h"
#include<vector>

void merge(std::vector<int>& vec, int left, int mid, int right){
	std::vector<int> temp;
	int i = left, j = mid+1;
	while(i <= mid && j <= right){
		if(vec[i] < vec[j]){
			temp.push_back(vec[i]);
			i++;
		}else{
			temp.push_back(vec[j]);
			j++;
		}
	}
	while(i <= mid){
		temp.push_back(vec[i]);
		i++;
	}
	while(j <= right){
		temp.push_back(vec[j]);
		j++;
	}
	for(int k = 0; k < temp.size(); k++){
		vec[left+k] = temp[k];
	}
}


void mergesort(std::vector<int>& vec, int left, int right){
	if(left >= right) return;
	int mid = left + (right - left)/2;
	mergesort(vec,left, mid);
	mergesort(vec,mid+1, right);
	merge(vec, left, mid, right);
}

std::vector<int> sort(std::vector<int>& vec){
	mergesort(vec,0,vec.size()-1);
	return vec;
}


