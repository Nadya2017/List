#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst;
    for (int i = 0; i < 7; i++)
    {
        lst.push_back(rand() % 20 - 15);
    }

    cout << "Spisok: ";

    list<int> :: iterator it = lst.begin();

    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " -> ";
    }

    cout << "NULL" << "\n";

    list<int> :: iterator it_1 = lst.begin();

    cout << "Spisok (udalili '-' elementy): ";

    while(it_1 != lst.end())
    {
        if (*it_1 <0)
        {
            it_1 = lst.erase(it_1);
        }
    else
        it_1++;
    }

    for (it_1 = lst.begin(); it_1 != lst.end(); it_1++)
    {
        cout << *it_1 << " -> ";
    }

    cout << "NULL" << "\n";

    return 0;
}
