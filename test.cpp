#include <iostream>
#include <algorithm>
#define TEST_NUM 50
using namespace std;


int main(){
	size_t array[TEST_NUM];

	for(int i=0;i<TEST_NUM;i++)
		array[i]=TEST_NUM-i;

	cout<<"=============\n";
	cout<<"BEFORE   SORT\n";
	cout<<"=============\n";
	for(int i=0;i<TEST_NUM;i++)
		cout<<array[i]<<", " ;
	cout<<endl;

	for(int i=0;i<TEST_NUM;i++)
		std::sort(array, array+ TEST_NUM ) ;
	

	cout<<"=============\n";
	cout<<"AFTER    SORT\n";
	cout<<"=============\n";
	for(int i=0;i<TEST_NUM;i++)
		cout<<array[i]<<", " ;
	cout<<endl;


}
