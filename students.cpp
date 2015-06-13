#include <iostream>
#include <string>

using namespace std;

int main()
{
    //  student details
    int marks[3];
    string name[30];
    string language[30];

    //  counter variables
    int i, j;
    int number_of_students;

    //  get number of students
    cout << "How many students do you want to take records for?: ";
    cin >> number_of_students;


    // key in students details
    for(i = 1; i <= number_of_students; i++)
    {
        cout << "Student's number "<< i << "'s name?: ";
        cin >> name[i];

        cout << "What programming language does " << name[i] << " like?: ";
        cin >> language[i];

        cout << "How many marks did " << name[i] << " get in " << language[i] << "?: ";
        cin >> marks[i];

        if(i != number_of_students)
        {
            cout << "=======================" << endl;
            cout << "Key in student number " << i + 1 << " details" << endl;
        }
        else
        {
            cout << "\n=======================" << endl;
            cout << "====================RESULTS=======================" << endl;
        }
    }



    // dispaly students details
    cout << "NAME \t\t PROGRAMMING LANGUAGE \t\t MARKS\n\n";
    for(j = 1; j <= number_of_students; j++)
    {
        cout << name[j] << "\t\t" << language[j] << "\t\t\t\t" << marks[j] << "\n";
    }

    return 0;
}