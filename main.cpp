#include <iostream>
#include <cstdio>
using namespace std;

class menu
{
public:
    char name[30], sex, month[10], horoscope[20];
    int day;

    findHoroscope()
    {
        cout<<"\t*----------------------------------------------*\t\n"<<endl;
        cout<<"\t             Welcome to Astrologica            \t\n"<<endl;
        cout<<"\t            The premier application\t\n            \t for all your horoscopic needs. \t\n"<<endl;
        cout<<"\t                   To Begin\n             \t   Please follow the prompts \t\n"<<endl;
        cout<<"\t*----------------------------------------------*\t\n\n\n"<<endl;
        cout<<"\tPlease enter your name \t\n"<<endl;
        gets(name);
        cout<<"\tPlease enter your sex (M/F)? \t\n"<<endl;
        cin>>sex;
        cout<<"\tPlease enter your birth month \t\n"<<endl;
        cin>>month;
        cout<<"\tPlease enter your birth date\t\n"<<endl;
        cin>>day;
    }

};

int main()
{
    menu obj;
    obj.findHoroscope();
}
