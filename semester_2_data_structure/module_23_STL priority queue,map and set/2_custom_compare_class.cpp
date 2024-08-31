#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string s, int r, int m)
    {
        name = s;
        roll = r;
        marks = m;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        return a.marks < b.marks;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int r, m;
        cin >> s >> r >> m;
        Student obj(s, r, m);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}