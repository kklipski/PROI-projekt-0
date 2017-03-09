#include <iostream>
#include "funkcje1.hpp"

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
    cout<<name<<" "<<"\""<<pseudo<<"\""<<" "<<surname<<endl;
    return 0;
}
