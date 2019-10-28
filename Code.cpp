/////////////////////////////////////////////////
/////// MUHAMMAD AMMAR LAB 06 //////////////////
///////////////// 258341 //////////////////////

//Including Libararies
#include <iostream>
#include <stdlib.h> // For rand() function
#include <vector> // Using vector for storing the result
#include <time.h>
#include <algorithm>
//Namespace 
using namespace std;
/////////////////////////////////////////////////
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/////////////////////////////////////////////////
vector<int> movMin(vector<int> vec)
{
	int i, j;
	for (i = 0; i < vec.size() - 1; i++)

	//Sorting  
	for (j = 0; j < vec.size() - i - 1; j++)
	{
		if (vec[j] > vec[j + 1])
			swap(&vec[j], &vec[j + 1]);
	}
	//Displaying output of Bubblesort
	cout << "Sorted by Bubble sort :\n";
	for (int z = 0; z < vec.size(); z++)
	{//Printing on Screen
		cout << " " << vec[z];
	}
	cout << endl << endl;
	return vec;
}
/////////////////////////////////////////////////
vector<int> testmovMin(vector<int> vec)
{
	//Sorting by sort function
	sort(vec.begin(), vec.end());
	cout << "Sorted by sort function:\n";
	//Displaying output of Sort function
	for (int z = 0; z < vec.size(); z++)
	{//Printing o screen 
		cout << " " << vec[z];
	}
	cout << endl << endl;

	return vec;
}
//////////////////////////////////////////////////
///////   Compare function    ///////////////////
////////////////////////////////////////////////
int main()
{
	vector<int> v, vx, vy;//vector
	int out;
	srand(time(NULL));//Seeding
	for (int i = 0; i < 10; i++)
	{
		out = rand() % 100 + 1;//Random numbers
		v.push_back(out); //Pushing intto vector
	}
	sort(v.begin(), v.end());
	//Inserting an unsorted element at the end of Sorted numbers
	v.push_back(15);
	cout << "Sorted numbers with last unsorted element:\n";
	for (int z = 0; z < v.size(); z++)
	{
		//Diplaying Sorted numbers with last unsorted element
		cout << " " << v[z];
	}
	cout << endl << endl;
	//Calling movMin Function
	vx = movMin(v);
	//Calling testmovMin Function
	vy = testmovMin(v);
	if (compare(vx, vy))
	{ //Test passed
		cout << endl <<"True" << endl<<"Test case passed\n\n\n";
	}
	else 
		//When test fails
		cout << endl << "false" << endl<<"Test case failed\n\n";
	return 0;
}
