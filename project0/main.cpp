#include <iostream>
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
    reverseStr(name);
    reverseStr(surname);
    reverseStr(pseudo);
    cout<<name<<" "<<surname<<" "<<"\""<<pseudo<<"\""<<endl;
    return 0;
}
