#include <iostream>
#include <string>
#include <vector>

#define EnterFn     BackTrace BT(__func__)
#define PRINT_BT    BT.PrintBackTrace()

void func1(int x);
void func2(int x);
void func3(int x);

class BackTrace{
    private:
    std::string Function;
    static std::vector <std::string> callBackTrace;
    public:
    BackTrace(std::string FuncName ):Function (FuncName)
    {
        std::cout<<"Enter to ["<< Function << "]"<<std::endl;
        callBackTrace.push_back(FuncName);
    }
    void PrintBackTrace()
    {
         int i = 0;
        std::cout << "Backtrace as follows : "<< std::endl; 
        for(const auto &functionName : callBackTrace)
        {
            
            std::cout << i << " - " <<functionName << std::endl;
           
            i++;
        } 
        std::cout << "Backtrace is Finished "<< std::endl; 
    }
    ~BackTrace(){std::cout<<"Exit From ["<< Function << "]"<<std::endl; }
};
std::vector<std::string> BackTrace::callBackTrace;
void func1(int x)
{
    EnterFn;
    func2(2);
    
}
void func2(int x)
{
    EnterFn;
    func3(3);
}
void func3(int x)
{
    EnterFn;
    PRINT_BT;
}
int main ()
{
    EnterFn;
    func1(1);
    return 0;
}