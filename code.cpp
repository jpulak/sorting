// sort array using bubble and selection
// print status of each pass
// ch 8

#include <iostream>
using namespace std;

//bubble sort func algorithm - redundant

void bubble(int arr[], int size) 
{
    cout << "Now performing the bubble sort" << endl;
    cout << "------------------------------" << endl;
    int pass = 1;// keep track

    // go thro every element type sort
    
    for (int i = 0; i < size - 1; i++) // # of passes
    {
        for (int j = 0; j < size - 1; j++) // compare adj ele
        { 
            if (arr[j] > arr[j + 1]) // swap if current ele< next ele
            {
                swap(arr[j], arr[j + 1]); // std built in swap
            }
            
            // print current status of arr
            
            cout << "After pass " << pass++ << ": "; // Calculate pass num 
            for (int i = 0; i < size; i++) 
            {
                cout << arr[i] << " "; // print arr
            }
            cout << endl;
        }
    }
}

//selection sort func algorithm - more effective

void select(int arr[], int size) 
{
    cout << "\nNow performing the selection sort" << endl;
    cout << "---------------------------------" << endl;
    int pass = 1;

    // if smallest of 2 swap, only swap smallest ele

    for (int i = 0; i < size - 1; i++) // go thro all ele except last
    {
        int minIndex = i; // find index with min ele in unsorted part
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[j] < arr[minIndex]) // if smaller found update minIndex
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); // swap min ele with first ele of unsorted portion
        
        // print current status of arr
        
        cout << "After pass " << pass << ": ";
        for (int i = 0; i < size; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        pass++;
    }
}

//main func

int main() 
{
    //initialize vars

    int arr1[] = {105, 102, 107, 103, 106, 100, 104, 101};
    int arr2[] = {105, 102, 107, 103, 106, 100, 104, 101};
    int size = 8;
    
    //execute sorting functions

    bubble(arr1, size);
    select(arr2, size);
    return 0;
}


