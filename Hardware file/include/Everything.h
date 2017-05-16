#ifndef EVERYTHING_H
#define EVERYTHING_H

#include <fstream>
#include "Tool.h"
#include <cstdlib>
#include <iomanip>

using namespace std;

Tool newTol();

int enterChoice()
{
    cout << "\nEnter your choice" << endl
      << "1 - store a formatted text file of accounts" << endl
      << "    called \"print.txt\" for printing" << endl
      << "2 - update an account" << endl
      << "3 - add a new account" << endl
      << "4 - delete an account" << endl
      << "5 - end program\n? ";

   int menuChoice;
   cin >> menuChoice;
   return menuChoice;
}

void createTextFile()
{
    ofstream outPrintFile("hardware.dat", ios::out);
    if(!outPrintFile)
    {
        cerr << "File could not be created." << endl;
        exit(1);
    }
    outPrintFile << left << setw(10) << "Record " << setw(16)
      << "Name " << setw(11) << "Count " << right
      << setw(10) << "Cost " << endl;
    Tool temp;
    for(int i = 0; i < 100; i++)
    {
        outPrintFile.write(reinterpret_cast<char *>(&temp), sizeof(Tool));
    }
}
void updateTool(fstream& updateTool)
{
    Tool newTool = newTol();
    updateTool.seekg((newTool.getRecords() - 1) * sizeof(Tool));
    Tool oldTool;
    updateTool.read(reinterpret_cast<char*> (&oldTool), sizeof(Tool));
    if(oldTool.getRecords() == 0)
    {
        return;
    }
    else
    {
        updateTool.seekp((newTool.getRecords() - 1) * sizeof(Tool));
        updateTool.write(reinterpret_cast<char*> (&newTool), sizeof(Tool));
    }
}
Tool newTol()
{
    int records;
    string name;
    int count;
    float cost;

    cout << "Enter records: ";
    cin >> records;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter count: ";
    cin >> count;

    cout << "Enter cost:";
    cin >> cost;
    Tool result(records, name, count, cost);
    return result;
}
void deleteRecord(fstream& deleteFromFile)
{
    int temp;
    cin >> temp;
    while(temp < 1 || temp > 100)
    {
        cout << "Enter ID from 1 to 100: ";
        cin >> temp;
    }
    deleteFromFile.seekp((temp - 1) * sizeof(Tool));
    Tool emptyTool;
    deleteFromFile.write(reinterpret_cast<char*> (&emptyTool), sizeof(Tool));
}
void printFirst()
{
    cout << "Records  Name      Count  Cost\n";
}

void printInfo(fstream& everything)
{
    everything.seekg(0);
    printFirst();

    Tool one;
    for(int i = 0; i < 100; i++)
    {
        if(everything.eof())
            return;
        else
        {
            everything.read(reinterpret_cast<char*>(&one), sizeof(Tool));
            if(one.getRecords() != 0)
            {
                one.printInformation();
            }
        }
    }
}



#endif // EVERYTHING_H
