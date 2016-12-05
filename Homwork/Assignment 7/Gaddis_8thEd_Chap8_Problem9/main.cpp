/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on December 2nd, 2016, 1:30 PM
 * Purpose: Sorting Benchmarks
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
void displayAry(int [], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int SIZE=20;
    int array1[SIZE]={85,22,33,44,55,66,77,41,52,63,
                      12,23,78,89,63,25,52,36,27,99};
    int array2[SIZE]={36,84,52,11,33,65,25,26,42,62,
                      75,95,77,64,83,21,30,67,55,88};

        cout << "Contents of the first array before bubble sort.\n";
	displayAry(array1, SIZE);

	cout << "Bubble sort the first array in ascending order.\n";
	bubbleSort(array1, SIZE);
        
        cout << "Contents of the first array after bubble sort.\n";
	displayAry(array1, SIZE);

	cout << "Contents of the second array before selection sort.\n";
	displayAry(array2, SIZE);

	cout << "Selection sort the second array in ascending order.\n";
	selectionSort(array2, SIZE);
        
        cout << "Contents of the second array after selection sort.\n";
	displayAry(array2, SIZE);
    //Output Located Here
    
    
    
    //Exit
    return 0;
}
void displayAry(int a[], int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}
void bubbleSort(int array[], int size)
{
	int temp;
	bool swap;

	do
	{	swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
			
		}
	} while (swap);
}
void selectionSort(int array[], int size)
{
	int startScan, minIndex, minValue;

	for (int startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
		
	}
}