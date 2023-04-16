#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Contact
{
    string name;
    string address;
    string phone;
};

void Add(Contact data);
void Search(string data);
void Display();
ofstream output;
ifstream Input;

int main()
{
    string input;
    output.open("Records.txt", ios::app);
    Input.open("Records.txt");
    cout << "Press 1 and hit enter to add a new record\n";
    cout << "Press 2 and hit enter to search a record\n";
    cout << "Press 3 and hit enter to delete an existing record\n";
    cout << "Press 4 and hit enter to update an existing record\n";
    cout << "Press 5 and hit enter to display all the records\n";
    do
    {
        cout << "\nType the option number : ";
        cin >> input;
        cin.ignore();

        if(input == "1")
        {
            Contact record;
            cout << "Type name : ";
            getline(cin, record.name);
            cout << "Type address : ";
            getline(cin, record.address);
            cout << "Type phone : ";
            getline(cin, record.phone);
            Add(record);
        }
        else if(input == "2")
        {
            string name;

            cout << "Type name to search : ";
            getline(cin, name);
            Search(name);
        }
        else if(input == "3")
        {
            //delete
        }
        else if(input == "4")
        {
            //update
        }
        else if(input == "5")
        {
            Display();
        }
    }while(input != "exit");


    return 0;
}

void Add(Contact data)
{
    output << data.name << "     " << data.address << "     " << data.phone;
    output << '\n';
    cout << "Record is now written in the file\n\n";
}

void Search(string data)
{
    string line;
    while(getline(Input, line))
    {
        if(line.find(data) > 1000)
        {

        }
        else
        {
            cout << line << endl;
        }

    }
}

void Display()
{
    string line;
    while(getline(Input, line))
    {
        cout << line << endl;
    }
    cout << endl;
}

