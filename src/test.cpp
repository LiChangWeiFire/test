//============================================================================
// Name        : test.cpp
// Author      : lcw
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


//-------------------普通冒泡排序算法--------------

void mySwap(int &a, int &b) {
  int temp = a;
	a = b;
	b = temp;
	
}
 
void bubbleSort(int arr[],int length)
{
	for (int i = 0; i < length-1 ; i++){
		for (int j = 0; j < length-1  - i; j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;   
			}
		}
	}
}
//-----------------优化冒泡排序------------记录每轮是否进行过交换//
void bubbleSort_better(int arr[], int length)
{
	bool isSorted = false;
	for (int i = 0; i < length - 1; i++){
		isSorted = false;
		for (int j = 0; j < length - 1 - i; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				isSorted = true;
			}
		}
		if (isSorted) break;
	}
 
}

int main() {
	int arr[] = { 9,1,2,3,4,6,6,7,7 };
	int length = sizeof(arr) / sizeof(arr[0]);
	//bubbleSort(arr,length);;
	bubbleSort_better(arr, length);
	for (int i=0;i<9;i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}
