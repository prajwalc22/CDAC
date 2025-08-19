#include <iostream>
using namespace std;

class InvalidSizeException : public exception
{
    string message;

public:
    InvalidSizeException(string msg)
    {
        message = msg;
    }

    const char *what() const noexcept override
    {
        return message.c_str();
    }
};
class Pizzaorder
{
private:
    string customer_name;
    string pizza_size;
    int toppings;
    int order_ID;
    int price;

    static int totalorders;
    static int total_revenue;

public:
    Pizzaorder()
    {
    }
    Pizzaorder(string custname, string pizza_sz, int tp, int oid, int pri)
    {
        customer_name = custname;
        pizza_size = pizza_sz;
        toppings = tp;
        order_ID = oid;
        price = pri;
        totalorders++;
    }

    double calculatePrice(string size)
    {
        try
        {

            // small/med/large
            if (size == "small")
            {
                price += 10;
            }
            else if (size == "medium")
            {
                price += 30;
            }
            else if (size == "larger")
            {
                price += 30;
            }
            else
            {
                throw InvalidSizeException("Please provide correct details");
            }
            return price;
        }
        catch (InvalidSizeException &e)
        {
            cout << e.what();
        }
    }

    double calculatePrice(string size, int toppingCount)
    {

        double extra_price = calculatePrice(size) * toppingCount;
        total_revenue += extra_price;
        return price;
    }
    static int getTodaysRevenue()
    {

        return total_revenue;
    }

    static void resetDailyCounters()
    {
        // for a new day
        total_revenue = 0;
        totalorders = 0;
    }
};
int Pizzaorder::totalorders = 0;
int Pizzaorder::total_revenue = 0;

int main()
{

    string cust_name = "ramesh";
    string pizza_size = "medium";
    int toppings = 2;
    int order_ID = 12;
    int price = 100;

    Pizzaorder po(cust_name, pizza_size, toppings, order_ID, price);
    cout << "Price without toppings: " << po.calculatePrice(pizza_size) << endl;
    cout << "Price with toppings: " << po.calculatePrice(pizza_size, toppings) << endl;
    cout << "Total Revenue: " << po.getTodaysRevenue();
}