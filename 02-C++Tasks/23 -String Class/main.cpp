#include "iostream"
#include "string"

class String{

private:
std::string s;
// char *string;
public:
// int Length;
 // Default constructor initializes an empty string
//  String() : s() {}
String() = default ;
// intilizer list constructor to initialize the string with a given value
  explicit String(const std::string str) : s(str) {}

   // Getter function to retrieve the string
    std::string getString() const
    {
        return this->s;
    }

    // Getter function to retrieve the length of the string
    int getLength() const
    {
        return this->s.length();
    }
     // Function to append another string to the current string
    void append(const std::string &str2)
    {
        this->s += " " + str2;
    }
    // Function to set the value of the string
    std::string setString(std::string str)
    {
        return this->s = str;
    }

    // Overloaded + operator to concatenate two String objects
    String operator+(const String &str2) const
    {
        return String(this->s + " " + str2.s);
    }
// Destructor
    ~String(){}
    

};
int main ()
{
 // Create instances of the String class
    String name("ahmed");
    String name2("mohamed");
    String name3;

    // Concatenate two String objects and assign the result to another String object
    name3 = name + name2;
    std::cout << "Length: " << name3.getLength() << std::endl
              << "Name: " << name3.getString()<< std::endl;

    // Set a new value for the String object
    name3.setString("hola");
    std::cout << "Length: " << name3.getLength() << std::endl
              << "Name: " << name3.getString()<< std::endl;

    // Append a string to the current value of the String object
    name3.append("hamza");
    
    // Print the length and value of the String object
    std::cout << "Length: " << name3.getLength() << std::endl
              << "Name: " << name3.getString()<< std::endl;

    return 0;
}