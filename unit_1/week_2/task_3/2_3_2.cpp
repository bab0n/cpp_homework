#include <iostream>


void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}


void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}


int main()
{
    int num;
    std::cout << "Enter number of elements to be sorted: ";
    std::cin >> num;
    int myarray[num];
    for (int i = 0; i < num; i++) { 
        std:: cout<<"> ";
        std::cin >> myarray[i];
    }
    merge_sort(myarray, 0, num-1);
    std::cout << "Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        std::cout<<myarray[i]<<" ";
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}