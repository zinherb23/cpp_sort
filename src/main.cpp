#include<iostream>
#include<vector>
#include"ms_bu.h"
int main(){
	std::vector<int> v1{5,4,1,3,6,2};
	for(int i = 0; i < v1.size(); i++){
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;
	mergesort_divid(v1);
	for(int i = 0; i < v1.size(); i++){
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
