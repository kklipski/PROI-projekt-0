#include "funkcje2.hpp"
#include <iostream>
using namespace std;

void reverseStr(string &tag)
{
    int n=tag.length();
    for(int i=0;i<n/2;i++)
    {
        swap(tag[i], tag[n-i-1]);
    }
}
