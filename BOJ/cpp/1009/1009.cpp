#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int T, a, b;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> a >> b;
        int tmp = 1;
        for (int j = 0; j < b; j++)
        {
            tmp = (tmp * a) % 10;
        }
        if(tmp==0){
            tmp=10;
        }
        cout << tmp << "\n";
    }
    return 0;
}
