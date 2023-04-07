#include "Student.h"

Student::Student(const char* name)
{
    this->name = name;
    subjects[0] = "matematica";
    subjects[1] = "sport";
    subjects[2] = "romana";
    subjects[3] = "franceza";
}

const char* Student::GetName()
{
    return this->name;
}


float& Student::operator[](const char* subject)
{
    for (int i = 0; i < 4; i++)
        if (subjects[i] == subject)
            return grades[i];
}

Student::operator float()
{
    float media = 0, nr_note = 0;
    for (int i = 0; i < 4; i++)
    {
        if (grades[i])
        {
            media += grades[i];
            nr_note++;
        }
    }
    return media / nr_note;
}

void Student::PrintNote()
{
    for (int i = 0; i < 4; i++)
        if (grades[i])
        {
            std::cout << subjects[i] << " => " << grades[i] << "\n";
        }
}
