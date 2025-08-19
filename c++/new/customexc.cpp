#include <iostream>
using namespace std;
class CustomException : public exception

{
    string message;

public:
    CustomException(string msg)
    {
        message = msg;
    }

    const char *what() const noexcept override
    {
        return message.c_str();
    }
};

int main()
{
    try
    {

        int age;
        cout << "enter age" << endl;
        cin >> age;
        if (age < 12)
        {
            throw CustomException("Under age! Not allowed");
        }
    }
    catch (CustomException &c)
    {
        cout << "Custom Exception caught:" << c.what();
    }
}