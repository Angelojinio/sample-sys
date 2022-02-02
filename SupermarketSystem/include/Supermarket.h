#ifndef SUPERMARKET_H
#define SUPERMARKET_H
#include <iostream>

#include "Product.h"

using namespace std;

class Supermarket
{
    public:
        Supermarket();
        virtual ~Supermarket();

        static const int numberOfProducts = 1;
        Product products [numberOfProducts];

        void addProducts();
        void buyproducts(int productNum, int quantity);
        void deleteProduct(int productNum);
        void displayProducts();
        void entrance();
        void membership(int productNum, int quantity);
        void modifyProductInfo(int productNum);
        void promo(int productNum, int quantity);
        void pwdsc(int productNum, int quantity);
        void showProductInfo(int productNum);
        void welcome();





    protected:

    private:
};

#endif // SUPERMARKET_H
