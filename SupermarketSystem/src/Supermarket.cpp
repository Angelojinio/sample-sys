#include "Supermarket.h"
#include <string>

Supermarket::Supermarket()
{
    //ctor
}

Supermarket::~Supermarket()
{
    //dtor
}

void Supermarket::addProducts(){

    cout << "\n\t\t=================================================";
    cout << "\n\t\t||    a BIG BUSINESS starts small business.    ||";
    cout << "\n\t\t=================================================";
    cout << "\n\n\n\tPlease select the Category of Product";
    cout << "\n\tKind of Foods | Beverages | Non-food items" << endl;

    for (int ctr = 0; ctr < numberOfProducts; ctr++){
        string category;
        string name;
        string prelease;
        double amount;
        double price;
        int discount;
        int quantity;
        bool isAvailable;

        cout << "\n\n\tCATEGORY:\t       ";
        getline (cin, category);

        cout << "\tPRODUCT NAME:\t       ";
        getline (cin, name);

        cout << "\tPRICE:\t\t       ";
        cin>> price;

        cout << "\tPRODUCT RELEASE DATE" << endl;
        cout << "\t(MM/DD/YYYY):\t       ";
        cin >> prelease;

        cout << "\tQUANTITY:\t       ";
        cin >> quantity;

        cin.clear();
        fflush (stdin);

        cout << endl;
        products[ctr].category = category;
        products[ctr].name = name;
        products[ctr].price = price;
        products[ctr].prelease = prelease;
        products[ctr].quantity = quantity;
        products[ctr].isAvailable = true;
    }
    system("cls");

}

void Supermarket::buyproducts (int productNum, int quantity){
    productNum--;
    int price;
    int amount;
    string payment;
    string date;
    string time;

    cout << "\n\t\tPlease enter how to pay.";
    cout << "\n\t\tCredit / Cash.";
    cout << "\n\t\tPAYMENT: ";
    cin >> payment;
    cin.clear();
    fflush(stdin);

    cout << "\n\t\tPlease enter the Amount to pay.";
    cout << "\n\t\tAmount: ";
    cin >> amount;
    cin.clear();
    fflush(stdin);

    cout << "\n\t\tPlease enter the date today.(MM/DD/YYYY)";
    cout << "\n\t\tDATE: ";
    cin >> date;

    cout << "\n\t\tPlease enter the time you pay.(HH:MM?M)";
    cout << "\n\t\tTIME: ";
    cin >> time;
    cin.clear();
    fflush(stdin);
    system("cls");

    string cate = products[productNum].category;
    string product = products[productNum].name;
    int existingQuantity = products[productNum].quantity;
    double presyo = products[productNum].price;
    double total = products[productNum].price;
    double bill = products[productNum].price * quantity;
    double change = amount-bill;


    if (productNum <= 0){
        productNum = 0;
    }
    else if (productNum > numberOfProducts){
        productNum = numberOfProducts - 1;
    }

    if (!products[productNum].isAvailable) {
        cout << "\n\n\n\t\tThe product is out of stock." << endl;
    }
    else if (quantity <= 0){
        cout << "\n\n\n\t\tThe quantity must be atleast 1." << endl;
    }
    else if (quantity > existingQuantity){
        cout << "\n\n\n\t\tYour order quantity which is: " << quantity << ".";
        cout << "\n\t\tHave exceeded the available quantity: " << existingQuantity << "." << endl;
    }
    else{
        products[productNum].quantity = existingQuantity - quantity;

        cout << "\n\n\t\t==============================================";
        cout << "\n\t\t=========* GR3 SUPERMARKET SYSMTEM *==========";
        cout << "\n\t\t==============================================";
        cout << "\n\n\n\t\t**********************************************";
        cout << "\n\t\t\t\t   RECEIPT";
        cout << "\n\t\t**********************************************";
        cout << "\n\n\t\tDATE:\t\t\t\t    ";
        std::cout.width(6); std::cout << std::right << date;
        cout << "\n\t\tTIME:\t\t\t\t       ";
        std::cout.width(6); std::cout << std::right << time;
        cout << "\n\n\n\t\tCATEGORY:";
        std::cout.width(6); std::cout << std::right << cate;
        cout << "\n\n\t\tPRODUCT............................   ";
        std::cout.width(8); std::cout << std::right << product;
        cout << "\n\t\tPRICE..............................\t";
        std::cout.width(6); std::cout << std::right << presyo;
        cout << "\n\t\tQUANTITY...........................\t";
        std::cout.width(6); std::cout << std::right << quantity;
        cout << "\n\t\tTOTAL AMOUNT.......................\t";
        std::cout.width(6); std::cout << std::right << bill;
        cout << "\n\t\tCASH...............................\t";
        std::cout.width(6); std::cout << std::right << amount;
        cout << "\n\n\t\t----------------------------------------------";
        cout << "\n\t\tTOTAL PAY..........................\t";
        std::cout.width(6); std::cout << std::right << bill;
        cout << "\n\t\tCHANGE.............................\t";
        std::cout.width(6); std::cout << std::right << change;
        cout << "\n\n\t\t----------------------------------------------";
        cout << "\n\t\tPAID BY............................\t";
        std::cout.width(6); std::cout << std::right << payment;

        cout << "\n\n\n\t\t\tYou have successfully purchased the product.";
        cout << "\n\n\t\t\t\tTHANK YOU!!!";
    }
}

void Supermarket::deleteProduct (int productNum){
    productNum--;

char removeProduct;
if (productNum <= 0){
        productNum = 0;
    }
    else if (productNum > numberOfProducts){
        productNum = numberOfProducts - 1;
    }
    cout << "    Are you sure you want to remove this product";
    cout << "\n    from the inventory? Y for yes and N for no";
    cout << "\n    Enter: ";
    cin >> removeProduct;
    cin.clear();
    fflush (stdin);

    if (removeProduct == 'Y'|| removeProduct =='y'){
        {products[productNum].isAvailable = false;}
        cout << "\n    Succesfully removed the product" << productNum + 1;
        cout << "\n================================================================================" << endl;
    }
    else if (removeProduct == 'N'|| removeProduct =='n'){
        cout << "\n    Deletion Cancelled."<< endl;
        cout << "\n================================================================================" << endl;
    }
}

void Supermarket::displayProducts(){

    cout << "\n\n\n\t  LIST OF NEW PRODUCT:";
    cout << "\n\n\t  P#\t";
    cout << "RELEASE DATE\t";
    cout << "PRICE     ";
    cout << "QUANTITY\tNAME PRODUCT" << endl;
    cout << endl;

    for (int ctr = 0; ctr < numberOfProducts; ctr++){
        if (products[ctr].isAvailable){
            cout <<"\t   "<< ctr + 1;
            cout <<"\t"<< products[ctr].prelease;
            cout <<"\t"<< products[ctr].price;
            cout <<"\t     "<< products[ctr].quantity;
            cout <<"\t\t" << products[ctr].name << endl;
            cout << endl;
        }
    }
    cout << "\n================================================================================" << endl;
}

void Supermarket::membership(int productNum, int quantity){
    productNum--;
    int price;
    double amount;
    string payment;
    string date;
    string time;

    cout << "\n\t\tPlease enter how to pay.";
    cout << "\n\t\tCredit / Cash.";
    cout << "\n\t\tPAYMENT: ";
    cin >> payment;
    cin.clear();
    fflush(stdin);

    cout << "\n\t\tPlease enter the Amount to pay.";
    cout << "\n\t\tAMOUNT: ";
    cin >> amount;
    cin.clear();
    fflush(stdin);

    cout << "\n\t\tPlease enter the date today.(MM/DD/YYYY)";
    cout << "\n\t\tDATE: ";

    cout << "\n\t\tPlease enter the time you pay.(HH:MM?M)";
    cout << "\n\t\tTIME: ";
    cin >> time;
    cin.clear();
    fflush(stdin);
    system("cls");

    string cate = products[productNum].category;
    string product = products[productNum].name;
    int existingQuantity = products[productNum].quantity;
    double presyo = products[productNum].price;
    double bill = products[productNum].price * quantity;
    double totalpay = bill - (bill*25/100);
    double change = amount-totalpay;
    double discount = bill-totalpay;

    if (productNum <= 0){
        productNum = 0;
    }
    else if (productNum > numberOfProducts){
        productNum = numberOfProducts - 1;
    }
    if (!products[productNum].isAvailable) {
        cout << "\n\n\n\t\tThe product is out of stock." << endl;
    }
    else if (quantity <= 0){
        cout << "\n\n\n\t\tThe quantity must be atleast 1." << endl;
    }
    else if (quantity > existingQuantity){
        cout << "\n\n\n\t\tYour order quantity which is: " << quantity << ".";
        cout << "\n\t\tHave exceeded the available quantity: " << existingQuantity << "." << endl;
    }
    else{
        products[productNum].quantity = existingQuantity - quantity;

        cout << "\n\n\t\t==============================================";
        cout << "\n\t\t=========* GR3 SUPERMARKET SYSMTEM *==========";
        cout << "\n\t\t==============================================";
        cout << "\n\n\n\t\t**********************************************";
        cout << "\n\t\t\t\t   RECEIPT";
        cout << "\n\t\t**********************************************";
        cout << "\n\n\t\tDATE:\t\t\t\t  ";
        std::cout.width(8); std::cout << std::right << date;
        cout << "\n\t\tTIME:\t\t\t\t     ";
        std::cout.width(8); std::cout << std::right << time;
        cout << "\n\n\n\t\tCATEGORY:";
        std::cout.width(6); std::cout << std::right << cate;
        cout << "\n\n\t\tPRODUCT............................   ";
        std::cout.width(8); std::cout << std::right << product;
        cout << "\n\t\tPRICE..............................\t";
        std::cout.width(6); std::cout << std::right << presyo;
        cout << "\n\t\tQUANTITY...........................\t";
        std::cout.width(6); std::cout << std::right << quantity;
        cout << "\n\t\tTOTAL AMOUNT.......................\t";
        std::cout.width(6); std::cout << std::right << bill;
        cout << "\n\t\tCASH...............................\t";
        std::cout.width(6); std::cout << std::right << amount;
        cout << "\n\n\t\t----------------------------------------------";
        cout << "\n\t\tTOTAL PAY..........................\t";
        std::cout.width(6); std::cout << std::right << totalpay;
        cout << "\n\t\tCHANGE.............................\t";
        std::cout.width(6); std::cout << std::right << change;
        cout << "\n\n\t\t----------------------------------------------";
        cout << "\n\t\tPAID BY............................\t";
        std::cout.width(6); std::cout << std::right << payment;


        cout << "\n\n\t\tYou saved " << discount << " pesos on our " << quantity <<" product";
        cout << "\n\t\twhich costs " << bill << " pesos.";


        cout << "\n\n\n\t\t\tYou have successfully purchased the product.";
        cout << "\n\n\t\t\t\tTHANK YOU!!!";
    }
}

void Supermarket::modifyProductInfo (int productNum){
    productNum--;

    if (productNum <= 0){
        productNum = 0;
    }
    else if (productNum > numberOfProducts){
        productNum = numberOfProducts - 1;
    }

    cout << "\n\tCATEGORY (Foods, Beverages, Non-food items):" << endl;
    cout << products[productNum].category << " == ";
    getline (cin, products[productNum].category);

    cout << "\n\n\tPRODUCT NAME:" << endl;
    cout << products[productNum].name << " == ";
    getline (cin, products[productNum].name);

    cout << "\n\n\tPRICE:" << endl;
    cout << products[productNum].price << " == ";
    cin>> products[productNum].price;

    cout << "\n\n\tProduct Release Date (MM.YYYY):" << endl;
    cout << products[productNum].prelease << " == ";
    cin >> products[productNum].prelease;

    cout << "\n\n\tQuantity:" << endl;
    cout << products[productNum].quantity << " == ";
    cin >> products[productNum].quantity;

    cin.clear();
    fflush (stdin);
    system("cls");
}

void Supermarket::promo(int productNum, int quantity){
    productNum--;
    int price;
    double amount;
    string payment;
    string date;
    string time;

    cout << "\n\t\tPlease enter how to pay.";
    cout << "\n\t\tCredit / Cash.";
    cout << "\n\t\tPAYMENT: ";
    cin >> payment;
    cin.clear();
    fflush(stdin);

    cout << "\n\t\tPlease enter the Amount to pay.";
    cout << "\n\t\tAMOUNT: ";
    cin >> amount;
    cin.clear();
    fflush(stdin);

    cout << "\n\t\tPlease enter the date today.(MM/DD/YYYY)";
    cout << "\n\t\tDATE: ";
    cin >> date;

    cout << "\n\t\tPlease enter the time you pay.(HH:MM?M)";
    cout << "\n\t\tTIME: ";
    cin >> time;
    cin.clear();
    fflush(stdin);
    system("cls");

    string cate = products[productNum].category;
    string product = products[productNum].name;
    int existingQuantity = products[productNum].quantity;
    double presyo = products[productNum].price;
    double bill = products[productNum].price * quantity;
    double totalpay = bill - (bill*10/100);
    double change = amount-totalpay;
    double discount = bill-totalpay;

    if (productNum <= 0){
        productNum = 0;
    }
    else if (productNum > numberOfProducts){
        productNum = numberOfProducts - 1;
    }
    if (!products[productNum].isAvailable) {
        cout << "\n\n\n\t\tThe product is out of stock." << endl;
    }
    else if (quantity <= 0){
        cout << "\n\n\n\t\tThe quantity must be atleast 1." << endl;
    }
    else if (quantity > existingQuantity){
        cout << "\n\n\n\t\tYour order quantity which is: " << quantity << ".";
        cout << "\n\t\tHave exceeded the available quantity: " << existingQuantity << "." << endl;
    }
    else{
        products[productNum].quantity = existingQuantity - quantity;

        cout << "\n\n\t\t==============================================";
        cout << "\n\t\t=========* GR3 SUPERMARKET SYSMTEM *==========";
        cout << "\n\t\t==============================================";
        cout << "\n\n\n\t\t**********************************************";
        cout << "\n\t\t\t\t   RECEIPT";
        cout << "\n\t\t**********************************************";
        cout << "\n\n\t\tDATE:\t\t\t\t  ";
        std::cout.width(8); std::cout << std::right << date;
        cout << "\n\t\tTIME:\t\t\t\t     ";
        std::cout.width(8); std::cout << std::right << time;
        cout << "\n\n\n\t\tCATEGORY:";
        std::cout.width(6); std::cout << std::right << cate;
        cout << "\n\n\t\tPRODUCT............................   ";
        std::cout.width(8); std::cout << std::right << product;
        cout << "\n\t\tPRICE..............................\t";
        std::cout.width(6); std::cout << std::right << presyo;
        cout << "\n\t\tQUANTITY...........................\t";
        std::cout.width(6); std::cout << std::right << quantity;
        cout << "\n\t\tTOTAL AMOUNT.......................\t";
        std::cout.width(6); std::cout << std::right << bill;
        cout << "\n\t\tCASH...............................\t";
        std::cout.width(6); std::cout << std::right << amount;
        cout << "\n\n\t\t----------------------------------------------";
        cout << "\n\t\tTOTAL PAY..........................\t";
        std::cout.width(6); std::cout << std::right << totalpay;
        cout << "\n\t\tCHANGE.............................\t";
        std::cout.width(6); std::cout << std::right << change;
        cout << "\n\n\t\t----------------------------------------------";
        cout << "\n\t\tPAID BY............................\t";
        std::cout.width(6); std::cout << std::right << payment;


        cout << "\n\n\t\tYou saved " << discount << " pesos on our " << quantity <<" product";
        cout << "\n\t\twhich costs " << bill << " pesos.";


        cout << "\n\n\n\t\t\tYou have successfully purchased the product.";
        cout << "\n\n\t\t\t\tTHANK YOU!!!";
    }
}

void Supermarket::pwdsc(int productNum, int quantity){
    productNum--;
    int price;
    double amount;
    string payment;
    string date;
    string time;

    cout << "\n\t\tPlease enter how to pay.";
    cout << "\n\t\tCredit / Cash.";
    cout << "\n\t\tPAYMENT: ";
    cin >> payment;
    cin.clear();
    fflush(stdin);

    cout << "\n\t\tPlease enter the Amount to pay.";
    cout << "\n\t\tAMOUNT: ";
    cin >> amount;
    cin.clear();
    fflush(stdin);

    cout << "\n\t\tPlease enter the date today.(MM/DD/YYYY)";
    cout << "\n\t\tDATE: ";
    cin >> date;

    cout << "\n\t\tPlease enter the time you pay.(HH:MM?M)";
    cout << "\n\t\tTIME: ";
    cin >> time;
    cin.clear();
    fflush(stdin);
    system("cls");

    string cate = products[productNum].category;
    string product = products[productNum].name;
    int existingQuantity = products[productNum].quantity;
    double presyo = products[productNum].price;
    double bill = products[productNum].price * quantity;
    double totalpay = bill - (bill*30/100);
    double change = amount-totalpay;
    double discount = bill-totalpay;

    if (productNum <= 0){
        productNum = 0;
    }
    else if (productNum > numberOfProducts){
        productNum = numberOfProducts - 1;
    }
    if (!products[productNum].isAvailable) {
        cout << "\n\n\n\t\tThe product is out of stock." << endl;
    }
    else if (quantity <= 0){
        cout << "\n\n\n\t\tThe quantity must be atleast 1." << endl;
    }
    else if (quantity > existingQuantity){
        cout << "\n\n\n\t\tYour order quantity which is: " << quantity << ".";
        cout << "\n\t\tHave exceeded the available quantity: " << existingQuantity << "." << endl;
    }
    else{
        products[productNum].quantity = existingQuantity - quantity;

        cout << "\n\n\t\t==============================================";
        cout << "\n\t\t=========* GR3 SUPERMARKET SYSMTEM *==========";
        cout << "\n\t\t==============================================";
        cout << "\n\n\n\t\t**********************************************";
        cout << "\n\t\t\t\t   RECEIPT";
        cout << "\n\t\t**********************************************";
        cout << "\n\n\t\tDATE:\t\t\t\t  ";
        std::cout.width(8); std::cout << std::right << date;
        cout << "\n\t\tTIME:\t\t\t\t     ";
        std::cout.width(8); std::cout << std::right << time;
        cout << "\n\n\n\t\tCATEGORY:";
        std::cout.width(6); std::cout << std::right << cate;
        cout << "\n\n\t\tPRODUCT............................   ";
        std::cout.width(8); std::cout << std::right << product;
        cout << "\n\t\tPRICE..............................\t";
        std::cout.width(6); std::cout << std::right << presyo;
        cout << "\n\t\tQUANTITY...........................\t";
        std::cout.width(6); std::cout << std::right << quantity;
        cout << "\n\t\tTOTAL AMOUNT.......................\t";
        std::cout.width(6); std::cout << std::right << bill;
        cout << "\n\t\tCASH...............................\t";
        std::cout.width(6); std::cout << std::right << amount;
        cout << "\n\n\t\t----------------------------------------------";
        cout << "\n\t\tTOTAL PAY..........................\t";
        std::cout.width(6); std::cout << std::right << totalpay;
        cout << "\n\t\tCHANGE.............................\t";
        std::cout.width(6); std::cout << std::right << change;
        cout << "\n\n\t\t----------------------------------------------";
        cout << "\n\t\tPAID BY............................\t";
        std::cout.width(6); std::cout << std::right << payment;


        cout << "\n\n\t\tYou saved " << discount << " pesos on our " << quantity <<" product";
        cout << "\n\t\twhich costs " << bill << " pesos.";


        cout << "\n\n\n\t\t\tYou have successfully purchased the product.";
        cout << "\n\n\t\t\t\tTHANK YOU!!!";
    }
}

void Supermarket::showProductInfo(int productNum){
    productNum--;

    if (productNum <= 0){
        productNum = 0;
    }
    else if (productNum > numberOfProducts){
        productNum = numberOfProducts - 1;
    }
    cout << "\t   ===================================================== ";
    cout << "\n\t   |||              Product Informations             |||";
    cout << "\n\t   ===================================================== ";

    cout << "\n\n\t\tRELEASE PRODUCT DATE\t         ";
    std::cout.width(8); std::cout << std::right << products[productNum].prelease;

    cout << "\n\t\tCATEGORY\t\t\t   ";
    std::cout.width(8); std::cout << std::right << products[productNum].category;

    cout << "\n\t\tQUANTITY\t\t\t     ";
    std::cout.width(6); std::cout << std::right << products[productNum].quantity;

    cout << "\n\t\tPRODUCT\t\t\t\t   ";
    std::cout.width(8); std::cout << std::right << products[productNum].name;

    cout << "\n\t\tPRICE\t\t\t\t     ";
    std::cout.width(6); std::cout << std::right << products[productNum].price;



    cout << endl;

    string stocks;
    if (products[productNum].isAvailable){
        stocks = "Available";
    }
    else {
        stocks = " Out of Stock";
    }
    cout << "\n\t\tSTOCK\t\t\t          ";
    std::cout.width(6); std::cout << std::right << stocks;
    cout << "\n\n================================================================================" << endl;
    cout << endl;
}


