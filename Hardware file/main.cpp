#include <iostream>
#include <fstream>

#include "Tool.h"
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void createTextFile(fstream&);
Tool* newTol();
void addTool(fstream&);
void updateTool();
void deleteRecord(fstream&);
void fillFile(ofstream&);
void printFirst();
void printInfo(fstream&);

int main()
{
    fstream toolData("hardware.dat", ios::in | ios::out | ios::binary);
    if(!toolData)
    {
        cerr << "File could not be opened." << endl;
        toolData.close();
        ofstream toolCreate("hardware.dat", ios::binary);
        fillFile(toolCreate);
        toolCreate.close();
        toolData.open("hardware.dat", ios::in | ios::out | ios::binary);
    }


    addTool(toolData);

    printInfo(toolData);

    createTextFile(toolData);
    toolData.close();
    return 0;
}

void addTool(fstream& addTool)
{
    Tool* newTool = newTol();
    Tool oldTool;
    addTool.seekg((newTool->getRecords() - 1) * sizeof(Tool));
    addTool.read(reinterpret_cast<char*> (&oldTool), sizeof(Tool));
    oldTool.printInformation();

    if(oldTool.getRecords() != 0)
    {
        return;
    }
    else
    {
        addTool.seekp((newTool->getRecords() - 1) * sizeof(Tool));
        addTool.write(reinterpret_cast<char*> (newTool), sizeof(Tool));
    }
}


void fillFile(ofstream& add)
{
    Tool emptyTool;
    add.seekp(0);
    for(int i = 0; i < 100; i++)
    {
        add.write(reinterpret_cast<char*>(&emptyTool), sizeof(Tool));
    }
}

void createTextFile(fstream& stream)
{
    ofstream outPrintFile("hardware.txt");
    if(!outPrintFile)
    {
        cerr << "File could not be created." << endl;
        exit(1);
    }
    outPrintFile << left << setw(10) << "Record " << setw(16)
        << "Name " << setw(11) << "Count " << right
        << setw(10) << "Cost " << endl;
        cout << "Text file created." << endl;
        Tool temp;
        stream.seekg(0);
        stream.clear();
        while(!stream.eof())
        {
            stream.read(reinterpret_cast<char*>(&temp), sizeof(Tool));
            if(temp.getRecords() != 0)
            outPrintFile << temp.getRecords() << setw(16) << temp.getName() << setw(11) << temp.getCount() << setw(10) << temp.getCost() << endl;
        }

    outPrintFile.close();
}

void updateTool(fstream& updateTool)
{
    Tool* newTool = newTol();
    updateTool.seekg((newTool->getRecords() - 1) * sizeof(Tool));
    Tool oldTool;
    updateTool.read(reinterpret_cast<char*> (&oldTool), sizeof(Tool));
    if(oldTool.getRecords() == 0)
    {
        return;
    }
    else
    {
        updateTool.seekp((newTool->getRecords() - 1) * sizeof(Tool));
        updateTool.write(reinterpret_cast<char*> (newTool), sizeof(Tool));
    }
}

Tool* newTol()
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
    Tool* result = new Tool(records, name, count, cost);
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
    everything.clear();
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
