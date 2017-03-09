#include "funkcje1.hpp"
#include <iostream>
using namespace std;

void vowelstoz(string &tag)
{
    for(int i=0;i < tag.size();i++)
    {
        if(tag[i]=='A'||tag[i]=='a'||tag[i]=='E'||tag[i]=='e'||tag[i]=='I'||tag[i]=='i'||tag[i]=='O'||tag[i]=='o'||tag[i]=='U'||tag[i]=='u'||tag[i]=='Y'||tag[i]=='y') tag[i]='z';
    }
}
