#include "iostream"
#include "cstring"
#include "algorithm"


class String
{
    private:
    char *str;
    int size;
    public:
    String () = default;
     String(const char* str) : str(nullptr), size(0) 
     {
        if (str != nullptr) {
            size = strlen(str);
            this->str = new char[size + 1];
            strcpy(this->str, str);
        }
    }
    
    //copy constructor
    String(const String& copy) : str(nullptr), size(copy.size) {
        if (copy.str != nullptr) {
            this->str = new char[size + 1];
            strcpy(this->str, copy.str);
        }
    }
    
    //elide operator = overloading
    String &operator=(const String &copyassigment) 
    {
        if(&copyassigment != this)
        {
            this->size = copyassigment.size;
            if (this->str)
            {
                delete [] this->str;
                str = nullptr;
            }
             if (copyassigment.str != nullptr) {
                this->str = new char[size + 1];
                strcpy(this->str, copyassigment.str);
            }
        }
        return *this;
    }
    //move constructor
    String(String &&move) 
    {
        this->size = move.size;
        move.size = 0;
        this->str = move.str;
        move.str = nullptr;
    }
    //move equalization 
    String &operator=(String &&moveequalization) 
    {
        if (this != &moveequalization)
        {
            this->size = moveequalization.size;
            if (this->str)
            {
                delete [] this->str;
                this->str = nullptr;
            }
            this->str = moveequalization.str;
            moveequalization.str = nullptr;
            moveequalization.size = 0;
        }
        return *this;
    }
    
    ~String()
    {
        if (str)
        {
            delete [] str;
            str = nullptr;
        }   
    }  
    // Getter for the string
    const char* get_str() const 
    {
        return str;
    }
};
int main ()
{
    String source("Hello, Rahma!");
    String assignedString;
    std::cout << "String: " << source.get_str() << std::endl;

    // Create a copy using the copy constructor
    String copiedString(source);
    std::cout << "Copied String: " << copiedString.get_str() << std::endl;

    // Assignment
    
    assignedString = source;
    std::cout << "Assigned String: " << assignedString.get_str() << std::endl;

    // Move constructor
    String movedString(std::move(source));
    std::cout << "Destination after move: " << movedString.get_str() << std::endl;

    // Move assignment operator
    assignedString = std::move(movedString);
    std::cout << "Assigned String after move: " << assignedString.get_str() << std::endl;
    return 0;
}