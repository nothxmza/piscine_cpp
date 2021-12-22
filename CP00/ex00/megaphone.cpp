#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string s;
    if(argc < 2)
            cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    for(int i = 1; argv[i];i++)
    {
        s = argv[i];
        transform(s.begin(), s.end(),s.begin(),::toupper);
        cout << s;
    }
}