// C13-Basic-Student-Class-App.cpp 

#include <iostream>
#include "Student.h"
#include <vector>

void showDatabase(vector<Student>& db);
void addMoreData(vector<Student>& db);
vector<Student>  selectBySection(vector<Student>& db, int section);

// ------------------------------------------------
int main()
{
    Student s1;
    cout << s1.toString() << endl;

    s1.setName("Julio Cuervo");
    s1.setSection(123456);
    cout << s1.toString() << endl;

    Student s2("Sara Lee", 777);
    cout << s2.toString() << endl;

    Student s3("Hermione Granger", 555);

    vector<Student> db;
    db.push_back(s1);
    db.push_back(s2);
    db.push_back(s3);

    showDatabase(db);

    addMoreData(db);
    showDatabase(db);

    vector<Student> result = selectBySection(db, 777);

}

// ------------------------------------------------
vector<Student> selectBySection(vector<Student>& db, int section)
{
    vector<Student> result;
    for (int i = 0; i < db.size(); i++)
    {
        if (db[i].getSection() == section)
            result.push_back(db[i]);
    }
    return result;
}


void addMoreData(vector<Student>& db)
{
    string nameValue;
    int    sectionValue;
    string line;
    do
    {
        cout << "Enter student name [xxx to end]: ";
        getline(cin, nameValue);
        if (nameValue == "xxx") break;

        getline(cin, line);
        sectionValue = stoi(line);

        Student newStudent(nameValue, sectionValue);
        db.push_back(newStudent);

    } while (true);
}


void showDatabase(vector<Student>& db)
{
    cout << "\nStudent Database\n";
    for (int i = 0; i < db.size(); i++)
    {
        cout << db[i].toString() << endl;
    }
}
