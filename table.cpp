#include "table.h"
Table::Table()
{
    //constructor
}
Table::Table(const Table &table)
{
    this->data[TABLE_SIZE] = table.data[TABLE_SIZE];
    this->count = table.count;
}
Table::~Table()
{
    //destructor
}
void Table::print()
{
    cout << "TABLE" << endl;

    cout << endl;

    for(int key = 0;key < this->TABLE_SIZE;key++)
    {
        this->data[key].print();
    }

    cout << endl;
}
void Table::read(string file_name)
{
    //defining file init + open via member call
    ifstream file;
    file.open(file_name.c_str());

    //handle if opening file error w/ conditional logic
    if(file.fail())
    {
        //give a nice error statement in CLI
        cout << "Failed opening person.txt file" << endl;
    }
    else
    {
        //container string to utilize while logic
        string fileLine;

        //integer to reference array of Persons
        int key = 0;

        //temp vars
        string tempFirstName;
        string tempLastName;
        int tempBirthYear;
        int tempDeathYear;
        string tempContribution;

        //opted to go with while loop as file may be longer than array size
        //reads line till eof or breaks out when array filled
        //noting that !file.eof() is not as efficient.
        while(file >> tempFirstName)
        {
            //error provention of array out of bounds excpetion
            if(key == this->TABLE_SIZE)
            {
                //give a nice error statement in CLI
                cout << "data array no longer able to store people" << endl;

                //exit while loop
                break;
            }

            //set temp vars
            file >> tempLastName;
            file >> tempBirthYear;
            file >> tempDeathYear;
            file.ignore();

            //file ignore to skip whitespace + getline to get rest of line
            getline(file, tempContribution);

            //set all respective vars with methods
            this->data[key].setFirstName(tempFirstName);
            this->data[key].setLastName(tempLastName);
            this->data[key].setBirth(tempBirthYear);
            this->data[key].setDeath(tempDeathYear);
            this->data[key].setContribution(tempContribution);

            //increment key
            key++;

            //update count var with key
            this->setCount(key);
        }
    }

    //be nice and close the file
    file.close();
}
void Table::searchFirstName(const string firstName)
{
    if(this->DEBUG)
    {
        cout << "Searching firstNames for: " << firstName << endl << endl;
    }

    for(int z = 0;z < this->getCount();z++)
    {
        if(this->data[z].getFirstName() == firstName)
        {
            this->data[z].print();
        }
    }

    if(this->DEBUG)
    {
        cout << endl;
    }
}
void Table::searchLastName(const string lastName)
{
    if(this->DEBUG)
    {
        cout << "Searching lastNames for: " << lastName << endl << endl;
    }

    for(int z = 0;z < this->getCount();z++)
    {
        if(this->data[z].getLastName() == lastName)
        {
            this->data[z].print();
        }
    }

    if(this->DEBUG)
    {
        cout << endl;
    }
}
void Table::searchYear(const int low, const int high)
{
    if(this->DEBUG)
    {
        cout << "Searching birthYear & deathYear between years: ";
        cout <<  low << " and " << high << endl << endl;
    }

    for(int z = 0;z < this->getCount();z++)
    {
        if(low < this->data[z].getBirth() && high > this->data[z].getBirth())
        {
            this->data[z].print();
        }
        else if(low < this->data[z].getDeath() && high > this->data[z].getDeath())
        {
            this->data[z].print();
        }
    }

    if(this->DEBUG)
    {
        cout << endl;
    }
}
void Table::setCount(const int count)
{
    this->count = count;
}
int Table::getCount()
{
    return this->count;
}
