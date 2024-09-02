#include <iostream>
#include <vector>
using namespace std;

void insertMaxHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int currentIndex = v.size() - 1;

    while (currentIndex != 0)
    {
        int parentIndex = (currentIndex - 1) / 2;
        if (v[parentIndex] < v[currentIndex])
            swap(v[parentIndex], v[currentIndex]);
        else
            break;
        currentIndex = parentIndex;
    }
}

void deleteFromMaxHeap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int current = 0;
    while (1)
    {
        int leftIndex = current * 2 + 1;
        int rightIndex = current * 2 + 2;
        int size = v.size() - 1;
        if (leftIndex <= size && rightIndex <= size)
        {
            if (v[leftIndex] >= v[rightIndex] && v[leftIndex] > v[current])
            {
                swap(v[leftIndex], v[current]);
                current = leftIndex;
            }
            else if (v[rightIndex] >= v[leftIndex] && v[rightIndex] > v[current])
            {
                swap(v[rightIndex], v[current]);
                current = rightIndex;
            }
            else
                break;
        }
        else if (leftIndex <= size)
        {
            if (v[leftIndex] > v[current])
            {
                swap(v[leftIndex], v[current]);
                current = leftIndex;
            }
            else
                break;
        }
        else if (rightIndex <= size)
        {
            if (v[rightIndex] > v[current])
            {
                swap(v[rightIndex], v[current]);
                current = rightIndex;
            }
            else
                break;
        }
        else
        {
            break;
        }
    }
}

void print(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertMaxHeap(v, x);
    }
    print(v);
    deleteFromMaxHeap(v);
    print(v);
    deleteFromMaxHeap(v);
    print(v);
    return 0;
}