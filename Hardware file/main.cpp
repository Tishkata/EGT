#include <iostream>
#include <fstream>

#include "Tool.h"
#include "Everything.h"
#include <cstdlib>
#include <iomanip>

using namespace std;

int enterChoice();
void createTextFile(fstream&);
void updateRecord(fstream&);
void newRecord(fstream&);
void deleteRecord(fstream&);
void outputLine(ostream&, const Tool &);
int getAccount(const char * const);

enum Choices
{
    PRINT, UPDATE, NEW, DELETE, END
};
int main()
{

    ofstream toolsData("hardware.dat", ios::out);

    if(!toolsData)
    {
        cout << "File could not be opened.";
        exit(1);
    }
    Tool one;
    for(int i = 0; i < 100; i++)
    {
        toolsData.write(reinterpret_cast<const char *>(&one), sizeof(Tool));
    }

    fstream toolData("hardware.dat", ios::in | ios::out | ios::binary);
    if(!toolData)
    {
        cerr << "File could not be opened." << endl;
        exit (1);
    }

    int choice;
    while ((choice = enterChoice()) != END)
    {
        switch (choice)
        {
            case PRINT:
            createTextFile();
            printInfo(toolData);
            break;
            case UPDATE:
            updateTool(toolData);
            printInfo(toolData);
            break;
            case NEW:
            newTol();
            printInfo(toolData);
            break;
            case DELETE:
            deleteRecord(toolData);
            printInfo(toolData);
            break;
            default:
            cerr << "Incorrect choice" << endl;
            break;
        }
        toolData.clear();
    }
    return 0;
}


