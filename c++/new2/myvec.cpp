#include <iostream>
#include <vector>
using namespace std;

//  Fix exception class
class CustomException : public exception
{
private:
    string message;

public:
    CustomException(const string &msg) : message(msg) {} //  Use const reference and initializer list

    const char *what() const noexcept override //  Add const, noexcept, override
    {
        return message.c_str();
    }
};

template <typename T>
class MyVector
{
private:
    T *data;
    int capacity;
    int current_size;

public:
    MyVector(int cap = 10)
    {
        capacity = cap;
        current_size = 0;
        data = new T[capacity];
    }

    void resize_vec()
    {
        int newCapacity = capacity * 2;
        T *newData = new T[newCapacity];

        //  Copy old data to new array
        for (int i = 0; i < current_size; i++)
        {
            newData[i] = data[i];
        }

        //  Delete old array first
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

    void push_back(const T &elem)
    {
        if (current_size == capacity)
        {
            resize_vec();
        }
        data[current_size] = elem;
        current_size++;
    }

    void display()
    {
        for (int i = 0; i < current_size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    T pop_back()
    {
        if (current_size == 0)
        {
            throw CustomException("Size underflow exception"); //  Correct class name
        }
        current_size--;            //  Decrement first
        return data[current_size]; //  Return correct element
    }

    //  Add destructor
    ~MyVector()
    {
        delete[] data;
    }
};

int main()
{
    try
    {
        MyVector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        v.push_back(6);
        v.push_back(7);
        v.push_back(8);
        v.push_back(9);
        v.display();
        v.pop_back();
        v.display();

        // Test exception:
        // MyVector<int> empty_v;
        // empty_v.pop_back();  // This would throw exception
    }
    catch (const CustomException &e) // Correct syntax with const reference
    {
        cout << e.what() << endl;
    }
}
