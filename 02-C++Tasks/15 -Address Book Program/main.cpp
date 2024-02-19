#include <iostream>
#include <iomanip>
#include <cstdint>
#include <string>
#include <vector>
#include <algorithm>
enum class etUserChoices 
{
    LIST,
    ADD,
    DELETE,
    REMOVE_ALL,
    SEARCH,
    CLOSE
};
class Address_Book{
    private: 
        std::string UserName;
        int Phonenumber;
        int ID{};

    public:
        static int globalID;
    // Constructor to initialize a contact with a name and phone number
        Address_Book(std::string name, int phone) : UserName(name),Phonenumber(phone)
        {
            ID = globalID++;
        }
        // Getter methods for retrieving contact information
        // const method cannot write on attributes
        std::string getName() const
        {
            return UserName;
        }
        int getNumber() const
        {
            return Phonenumber;
        }

         int getID() const
        {
            return ID;
        }
        // Function to decrement the contact's ID
        void decrementID() 
        {
            ID = getID() -1;
        }
};
int Address_Book::globalID = 1;
void ListofContact (std::vector<Address_Book> contacts)
{
    contacts.size();
    if (contacts.size())
    {
        for (auto &user : contacts)
        {
            std::cout << "------------------------------------------" << std::endl;
            std::cout << "ID : "<< user.getID() << std::endl;
            std::cout << "Name :  "<< user.getName()<< std::endl;
            std::cout << "Number :  " << user.getNumber() << std::endl;
            std::cout << "------------------------------------------" << std::endl;

        }
    }
    else 
    {
        std::cout<<"no contact found " << std::endl;
    }
}
void AddContact (std::vector<Address_Book> &contacts,std::string username , int phonenum)
{
        contacts.emplace_back(username,phonenum);
        //or use lambda expression 
    // auto createContact = [&contacts](std::string username, int phonenum)
    // {
    //     contacts.emplace_back(username,phonenum);
    // };
}
void SearchforContact (std::vector<Address_Book> contacts , std::string inputName)
{
    auto searchcontact = std::find_if(contacts.begin(),contacts.end(),[inputName](Address_Book contacts)
    {
        return contacts.getName() == inputName;
    });
    if (searchcontact != contacts.end())
    {
         std::cout << "------------------------------------------" << std::endl;
        std::cout << std::setw(25)<< "Contact Found!" << std::endl;
        std::cout << "------------------------------------------" << std::endl;
        std::cout << "ID : "<< searchcontact->getID()<< std::endl;
        std::cout << "Name :  "<< searchcontact->getName()<< std::endl;
        std::cout << "Number :  " << searchcontact->getNumber() << std::endl;
        std::cout << "------------------------------------------" << std::endl;
    }
    else
    {
        std::cout << "------------------------------------------" << std::endl;
        std::cout << std::setw(25)<< "Contact Not Found!" << std::endl;
        std::cout << "------------------------------------------" << std::endl;
    }
}
void DeleteContact (std::vector<Address_Book> &contacts,int inputID)
{
auto foundIterator = std::remove_if(contacts.begin(),contacts.end(),[&inputID](Address_Book &contacts)
    {
        return contacts.getID() == inputID;
    });
     if(foundIterator != contacts.end())
    {
        contacts.erase(foundIterator);
        Address_Book::globalID--;
        std::cout << "ID Deleted!" << std::endl << std::endl;
    }
    else
    {
        std::cout << "ID Not Found!" << std::endl << std::endl;
    }
}
void DeleteAllContact (std::vector<Address_Book> &contacts)
{
    contacts.clear();
     Address_Book::globalID = 1;
}
void PrintStartofMain(void)
{
    std::cout << "---------------------------------------------------------------"<< std::endl;
    std::cout << std::setw(2) << "Welcome to Your Favourite Address Book !" <<std::endl;
    std::cout << std::setw(2) << "What do you want to do ?" <<std::endl;   
    std::cout << "---------------------------------------------------------------"<< std::endl;
    std::cout << std::setw(3)<< " | "  << "List" << std::setw(10) << "| " << "Lists All Users" << std::endl;
    std::cout << std::setw(3)<< " | "  << "Add" << std::setw(11) << "| " << "Adds an User" << std::endl;
    std::cout << std::setw(3)<< " | "  << "Delete" << std::setw(8) << "| " << "Deletes an User" << std::endl;
    std::cout << std::setw(3)<< " | "  << "Remove" << std::setw(8) << "| " << "Deletes All Users" << std::endl;
    std::cout << std::setw(3)<< " | "  << "Search" << std::setw(8) << "| " << "Search on a User" << std::endl;
    std::cout << std::setw(3)<< " | "  << "Close" << std::setw(9) << "| " << "Closes The Address Book" << std::endl;
}
etUserChoices SelectUserChoice(std::string UserChoice)
{
    etUserChoices etChoicNumber;

    if (UserChoice == "LIST")
    {
       etChoicNumber = etUserChoices::LIST;
    }
    else if (UserChoice == "ADD")
    {
        etChoicNumber = etUserChoices::ADD;
    }
    else if (UserChoice == "DELETE")
    {
        etChoicNumber = etUserChoices::DELETE;
    }
    else if (UserChoice == "REMOVE")
    {
        etChoicNumber = etUserChoices::REMOVE_ALL;
    }
    else if (UserChoice == "SEARCH")
    {
        etChoicNumber = etUserChoices::SEARCH;
    }
    else if (UserChoice == "CLOSE")
    {
        etChoicNumber = etUserChoices::CLOSE;
    }
    return etChoicNumber;
}
int main ()
{
    std::string UserChoice ;
    std::vector<Address_Book> contacts;
    etUserChoices etChoicNumber;
    bool run=true;
    std::string inputName;
    int inputID{};
    int inputNumber{};
    do {
        PrintStartofMain();
        std::getline(std::cin,UserChoice);
        std::transform(UserChoice.begin(), UserChoice.end(), UserChoice.begin(), ::toupper);
        etChoicNumber= SelectUserChoice(UserChoice);
        switch (etChoicNumber)
        {
            case etUserChoices::LIST:
                ListofContact (contacts);
            break;
            case etUserChoices::ADD:
                std::cout << "Please Enter The Name to add it to Your Favourite Address Book : ";
                std::cin>> inputName;
                std::cout << "Please Enter The Number to add it to Your Favourite Address Book : ";
                std::cin >> inputNumber;
                AddContact(contacts,inputName ,inputNumber);
                // createContact(inputName ,inputNumber);
            break;
            case etUserChoices::DELETE:
                std::cout << "Enter the ID of Contact : ";
                std::cin >> inputID;
                DeleteContact(contacts,inputID);
                for(auto &contact : contacts)
                {
                    if (contact.getID()>inputID)
                    {
                        contact.decrementID();
                    }   
                }
            break;
            case etUserChoices::REMOVE_ALL:
                DeleteAllContact(contacts);
            break;
            case etUserChoices::SEARCH:
                 std::cout << "Please Enter The Name to check if it's found or not : ";
                std::cin>> inputName;
                SearchforContact (contacts,inputName);
            break;
            case etUserChoices::CLOSE:
                run=false;
            break;
            default:
                std::cout << "Please Choose an option from the menu" <<std::endl;
                break;
        }
        }while(run);
        std::cout << "Program Terminated";
}