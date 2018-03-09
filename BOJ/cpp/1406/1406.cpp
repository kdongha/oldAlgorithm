#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    vector<char> v;
    int N;
    cin >> s;
    copy(s.begin(), s.end(), back_inserter(v));
    cin >> N;
    vector<char>::iterator position = v.end();
    for (int i = 0; i < N; i++)
    {
        char tmp;
        cin >> tmp;
        if (tmp == 'P')
        {
            cin >> tmp;
            position = v.insert(position, tmp) + 1;
        }
        else if (tmp == 'L')
        {
            if (position != v.begin())
            {
                position -= 1;
            }
        }
        else if (tmp == 'D')
        {
            if (position != v.end())
            {
                position += 1;
            }
        }
        else if (tmp == 'B')
        {
            if (position != v.begin())
            {
                position=v.erase(position - 1);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << "\n";
    return 0;
}