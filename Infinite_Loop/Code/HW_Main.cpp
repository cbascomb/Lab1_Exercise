#include <iostream>

using namespace std;

// Variable - START
//	define variables that are global between the two Variable markers

// Variable - END

// Function/Method Declaration - START
//	define function/method declaration signatures between the two markers
void sort(int arr[], int size);
void display(int arr[], int size);
// Function/Method Declaration - END

int main() {
	//declare size of the array
	int size;
	//declare array of integer type
	//we don't create the array yet as we don't know the size of it
	int* arr;
	//ask the size of the array
	cout << "How many integers do you want to enter ? ";
	//read the size of the array
	cin >> size;
	//create array with given size
	arr = new int[size];
	//now we fill the array
	cout << "Now enter " << size << " integers (in one or several lines)" << endl;
	for (int i = 0; i < size; i++) cin >> arr[i];
	//display entered integers
	cout << "Unsorted array:"<<endl;
	display(arr, size);
	//sort the elements using swap algorithm
	sort(arr, size);
	//display after the sort
	cout << "Sorted array:" << endl;
	display(arr, size);

	return 0;
}

// Function/Method Definition - START
//	define function/method declaration signatures between the two markers

void sort(int arr[], int size)
{
	//outer loop
	for (int i = 0; i < size; i++)
	{
		//inner loop start from next element after outer loop variable
		for (int k = i + 1; k < size; k++)
		{
			//if element in outer loop index is greater than
			//element in inner loop index, we need to swap them using 
			//swap algorithm
			if (arr[i] > arr[k])
			{
				//to swap elements in indexes i and k,
				//first we remember element in index i
				int tmp = arr[i];
				//then assign element from index k to index i
				arr[i] = arr[k];
				//now assign remembered element to index k
				arr[k] = tmp;
			}
		}
		//after each inner loop, element in index i will be the smallest from right side
		
	}
	//after outer loop finishes, we will have sorted array
	//since arrays are passed by reference even though we pass them by value
	//we don't have to return anything, passed array will change after sort	
}

//display array elements
void display(int arr[], int size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
}
// Function/Method Definition - END
