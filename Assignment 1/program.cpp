#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> myVec;
	vector<int>::iterator myVecIter;

	myVec.push_back(2);
	myVec.push_back(14);
	myVec.push_back(1);
	myVec.push_back(7);
	myVec.push_back(10);
	myVec.push_back(9);

	// finding min and max
	int min;
	int max;

	for (myVecIter = myVec.begin(); myVecIter != myVec.end(); myVecIter++)
	{
		if (min == 0){
			min = *myVecIter;
		}

		if (min > *myVecIter) {
			min = *myVecIter;
		}

		if (max < *myVecIter) {
			max = *myVecIter;
		}

		cout << *myVecIter << endl;
	}



	cout << min << " " << max << endl;

	return 0;
}