






//Find Minimum Program
//Jordan Brown

#include<iostream>
using namespace std;

int find_min (int list[], int size)
{

    int min_so_far = list[0];

    for (int i=0; i<size; i++)
        if(list[i]<min_so_far)
        min_so_far = list[i];
    return min_so_far;
}

int main ()
{
    int smallest,  a, b, c, d, e;
    cout << "Enter 5 Numbers: " << endl;
    cin >> a >> b >> c >> d >> e;


    int size = 5;
    int array[5] = {a, b, c, d, e};

    smallest = find_min(array, size);
    cout << "\nThe smallest value is: " << smallest << endl;
    return 0;
}
