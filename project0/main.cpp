#include <iostream>
#include "funkcje1.hpp"
#include "funkcje2.hpp"

using namespace std;

int main()
{
    string name, surname, pseudo;
    cout<<"Write name:"<<endl;
    cin>>name;
    cout<<"Write surname:"<<endl;
    cin>>surname;
    cout<<"Write pseudonym:"<<endl;
    cin>>pseudo;
    vowelstoz(name);
    vowelstoz(surname);
    vowelstoz(pseudo);
    reverseStr(name);
    reverseStr(surname);
    reverseStr(pseudo);
    cout<<name<<" "<<surname<<" "<<"\""<<pseudo<<"\""<<endl;
    return 0;
}
