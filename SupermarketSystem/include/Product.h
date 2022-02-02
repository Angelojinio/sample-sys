#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

using namespace std;

class Product
{
    public:
        Product();
        virtual ~Product();

        string category;
        string name;
        string prelease;
        double price;
        double amount;
        int discount;
        int quantity;
        bool isAvailable;

    protected:

    private:
};

#endif // PRODUCT_H
