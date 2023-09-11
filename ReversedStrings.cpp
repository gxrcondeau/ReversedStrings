#include <string>

using namespace std ; 

string reverseString (string str )
{
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    reverseString("world");
    return 0;
}
