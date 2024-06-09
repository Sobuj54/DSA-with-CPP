#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "sobuj";
    string b = "ahmed";
    cout << s + " " + b << endl; // string concatenation using + operator
    s.push_back('a');            // adds a single character at the end of string
    cout << s << endl;
    s.pop_back(); // removes an character from last index
    cout << s << endl;

    string h = "helloworld";
    cout << "before erasing : " << h << endl;
    h.erase(4, 2); // erase takes start index and how many character to delete
    cout << "after erasing: " << h << endl;

    h.replace(2, 1, "heh"); // it takes start index,length and what to replace with
    cout << "after replace: " << h << endl;

    h.insert(5, "sobuj"); // insert in 5th index
    cout << "after insert: " << h << endl;
    return 0;
}