#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    //declare an int type variable where the amount of contacts added will be saved
    const int amount = 1;
    //declare a string variable "names"
    string names;
    //create a sturcture called info where we will store all the data
    struct info
    {
        //Declare a char num variable witha maximum of 30 letters
        char name[30];
        //Declare an integer type variable to store the nunbers
        int num;
        //Declare a string type variable to store birthdayss
        string birthday;
        //Declare variable int to store age 
        int age;
    };
    info contact[amount];
    int t = 1;
    while (t == 1)

    {
        //make an integer value called "choice
        int choice;
        //User prompts
        cout << " " << endl;
        cout << "1. Add a Contact" << endl;
        cout << "2. Delete a Contact" << endl;
        cout << "3. Search a Contact" << endl;
        cout << "4. Exit" << endl;
        cout << "Please choose the given function above : " << endl;
        //store the inout from the user in the choice variable 
        cin >> choice;
        //Add contact funtion gives user a prompt to enter in the information they want to save
        void addcontact();
        {
            int index = 1;
            while (index < amount) {
                cout << " " << endl;
                cout << "Name : " << endl;
                cin >> contact[index].name;
                cout << "Phone number : " << endl;
                cin >> contact[index].num;
                cout << "Birth year : " << endl;
                cin >> contact[index].birthday;
                cout << "Age : " << endl;
                cin >> contact[index].age;
                index++;
            }
        }
        //Delete contact deletes an existing contact although im still trying to figure out how to do this part
        void DeleteContact(); {
            char delname;
            cout << "Enter name to delete contact: ";
            cin >> delname;

            for (int i = 0; i < amount; i++)
            {
                if (names == contact[i].name)
                {
                    contact[i] = contact[i + 1];
                }
            }
        }
        //Search contact uses the inputed variable stored in names to match it with the name variable in the contact structure 
        //To search for a certain contact and print out all of its information 
        void SearchContact(); {
            cout << "SEARCHING CONTACT" << endl;
            cout << "Enter name : " << endl;
            cin >> names;
            for (int i = 0; i < amount; i++)
            {
                if (names == contact[i].name)
                {
                    cout << " " << endl;
                    cout << "Name : " << contact[i].name << endl;
                    cout << "Number : " << contact[i].num << endl;
                    cout << "Birth year : " << contact[i].birthday << endl;
                    cout << "Age : " << contact[i].age << endl;
                    cout << " " << endl;
                }
            }
        }
        //if scenario choices for the user to make 
        if (choice == 1)
        {
            addcontact();
        }
        else if (choice == 2)
        {
            DeleteContact();
        }
        else if (choice == 3)
        {
            SearchContact();
        }
        else if (choice == 4)
        {
            t = 0;
        }
        else
        {
            cout << "Please re-enter the correct option";
        }
    }
}