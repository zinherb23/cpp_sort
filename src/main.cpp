#include<iostream>
#include<vector>
#include"helpF.h"
int main(){
	std::vector<int> v1{5,4,1,3,6,2};
	for(int i = 0; i < v1.size(); i++){
		std::cout << v1[i] << " ";
	}
	std::vector<int> v2 = sort(v1);
	for(int i = 0; i < v2.size(); i++){
		std::cout << v2[i] << " ";
	}
	return 0;
}
