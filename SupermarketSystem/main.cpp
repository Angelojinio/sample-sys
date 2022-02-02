#include <iostream>
#include <string>
#include "Supermarket.h"


using namespace std;


void Supermarket::welcome(){
        string namecode;
        Supermarket sms;

        int ch = -1;

        while (ch!=0){
        cout << "\n\n\n\n\n\t\t===============================================";
        cout << "\n\t\t=============== SUPERMAKET SYSTEM =============";
        cout << "\n\t\t=============== PROJECT =======================";
        cout << "\n\t\t===============================================";
        cout << endl;
        cout << "\n\t\t================ [1] START ====================";
        cout << "\n\t\t================ [0] EXIT =====================";
        cout << "\n\n\n\t\tEnter here: ";
        cin >> ch;
        cin.clear();
        fflush(stdin);

        system("cls");

        int productNum;

        switch (ch){
        case 1:
        cout << "\n\n\n\n\n\n\n\t\t\tEnter your Namecode: Status.surname";
        cout << "\n\t\t\tFor Example: Admin or Customer\n\n";
        cout << "\n\n\n\t\t\tNamecode: ";
        cin >> namecode;
        if(namecode == "Admin" || namecode == "Customer"){
                system("cls");
                sms.entrance();
        }

        else{
        cout << "\n\n\n\t   Your NAMECODE is INCORRECT or this account doesn't exist\n\n";
        cout << "\n================================================================================" << endl;
        }
        cin.clear();
        fflush(stdin);
        break;

        case 0:
        cout << "\n===============================* THANK YOU!!! *=================================" << endl;
        break;
        }
        }
}


void Supermarket::entrance(){
        int ch = -1;
        string namecode;
        string username;
        string password;
        Supermarket sms;

while (ch!=0){
        int productNum;

        cout << "\n\n\t\t================================================ ";
        cout << "\n\t\t||\t   Welcome to GR3 SuperMarket\t      ||";
        cout << "\n\t\t================================================ ";
        cout << "\n\n\n\tCUSTOMERS ONLY";
        cout << "\t\t\t   ADMIN ONLY";
        cout << "\n\t{1} Display All Products";
        cout << "\t   {7} addProducts";
        cout << "\n\t{2} Show Product Informations";
        cout << "\t   {8} Modify Product Informations";
        cout << "\n\t{3} buy products";
        cout << "\t\t   {9} delete";
        cout << "\n\t\t\t\t\t   {0} Exit Supermarket";
        cout << "\n\n\tGOOD DISCOUNT FOR YOU!";
        cout << "\n\t{4} PROMO\t\t10%";
        cout << "\n\t{5} Member\t\t25%";
        cout << "\n\t{6} PWD/Senior Citizen\t30%";
        cout << "\n\n\tEnter a number to proceed: ";
        cin >> ch;
        cin.clear();
        fflush(stdin);

        system("cls");

switch (ch){
case 1:
        sms.displayProducts ();
        break;


case 2:
        sms.displayProducts ();
        cout << "\t    Please enter the P# to show the product details: ";
        cin >> productNum;
        cout << endl;
        cin.clear();
        fflush(stdin);
        sms.showProductInfo(productNum);
        break;

case 3:
        char ask;
        retry:
        sms.displayProducts ();
        cout << "\t\t=============================================== ";
        cout << "\n\t\t||\t\tWELCOME CUSTOMERS\t     ||";
        cout << "\n\t\t=============================================== " << endl;
        cout << endl;
        cout << "\n\t\tPlease enter the Product ID you want to buy";
        cout << "\n\t\tP#: ";
        cin >> productNum;
        cin.clear();
        fflush(stdin);

        int quantity;
        cout << "\n\t\tPlease enter the quantity you want to buy";
        cout << "\n\t\tQUANTITY: ";
        cin >> quantity;
        cin.clear();
        fflush(stdin);

        sms.buyproducts(productNum, quantity);

        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);

        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry;
        }else
        system("cls");
        break;


case 4:
        cout << "\n\n\n\n\n\n\n\t\t\tPROMO!!!";
        cout << "\n\n\t\t\tEnter your Ticket#: surname.#";
        cout << "\n\t\t\tExample: Mangalindan.01\n\n";
        cout << "\n\n\t\t\tNamecode: ";
        cin >> namecode;
        cin.clear();
        fflush(stdin);

        system("cls");
        if(namecode == "Joaquin.01" || namecode == "joaquin.01" || namecode == "Carreon.01"){
        retry1:
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 10% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.promo (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry1;
        }
        }


        if(namecode == "Cavaneyro.01" || namecode == "Cruz.01" || namecode == "Dela_cruz.01"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 10% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.promo (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry1;
        }
        }


        if(namecode == "Enano.01" || namecode == "Jinio.01" || namecode == "Mangalindan.01"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 10% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.promo (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry1;
        }
        }


        if(namecode == "Novisteros.01" ||namecode == "Pahoyo.01"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 10% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.promo (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry1;
        }
        }
        else{
        cout << "\n\n\n\t   Your NAMECODE is INCORRECT or this account doesn't exist\n\n";
        cout << "\n================================================================================" << endl;
        }
        cin.clear();
        fflush(stdin);
        system("cls");
        break;


case 5:
        cout << "\n\n\n\n\n\n\n\t\t\tMEMBERSHIP";
        cout << "\n\n\t\t\tEnter your Namecode: Status.surname";
        cout << "\n\t\t\tExample: Mem.pahoyo\n\n";
        cout << "\n\n\t\t\tNamecode: ";
        cin >> namecode;
        cin.clear();
        fflush(stdin);

        system("cls");
        if(namecode == "Mem.joaquin" || namecode == "mem.joaquin" || namecode == "Mem.carreon"){
        retry2:
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 25% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.membership (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry2;
        }
        }


        if(namecode == "Mem.cavaneyro" || namecode == "Mem.cruz" || namecode == "Mem.dela_cruz"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 25% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.membership (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry2;
        }
        }


        if(namecode == "Mem.enano" || namecode == "Mem.jinio" || namecode == "Mem.mangalindan"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 25% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.membership (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry2;
        }
        }


        if(namecode == "Mem.novisteros" || namecode == "Mem.pahoyo"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 25% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.membership (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry2;
        }
        }

        else{
        cout << "\n\n\n\t   Your NAMECODE is INCORRECT or this account doesn't exist\n\n";
        cout << "\n================================================================================" << endl;
        }
        system("cls");
        break;


case 6:
        cout << "\n\n\n\n\n\n\n\t\t\tPWD / SENIOR CITIZENS";
        cout << "\n\n\t\t\tEnter your Namecode: Status.surname";
        cout << "\n\t\t\tExample: pwd.jinio or sc.carreon\n\n";
        cout << "\n\n\t\t\tNamecode: ";
        cin >> namecode;
        cin.clear();
        fflush(stdin);

        system("cls");
        if(namecode == "Pwd.joaquin" || namecode == "Sc.joaquin"){
        retry3:
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 30% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.pwdsc (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry3;
        }
        }

        if(namecode == "Pwd.carreon" || namecode == "Sc.carreon"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 30% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.pwdsc (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry3;
        }
        }

        if(namecode == "Pwd.cavaneyro" || namecode == "Sc.cavaneyro"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 30% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.pwdsc (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry3;
        }
        }

        if(namecode == "Pwd.cruz" || namecode == "Sc.cruz"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 30% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.pwdsc (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry3;
        }
        }

        if(namecode == "Pwd.dela_cruz" || namecode == "Sc.dela_cruz"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 30% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.pwdsc (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry3;
        }
        }

        if(namecode == "Pwd.enano" || namecode == "Sc.enano"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 30% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.pwdsc (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry3;
        }
        }

        if(namecode == "Pwd.jinio" || namecode == "Sc.jinio"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 30% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.pwdsc (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry3;
        }
        }

        if(namecode == "Pwd.mangalindan" || namecode == "Sc.mangalindan"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 30% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.pwdsc (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry3;
        }
        }

        if(namecode == "Pwd.novisteros" || namecode == "Sc.novisteros"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 30% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.pwdsc (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);
        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry3;
        }
        }

        if(namecode == "Pwd.pahoyo" || namecode == "Sc.pahoyo"){
        sms.displayProducts ();
                cout << "\t\t=========================================== ";
                cout << "\n\t\t*       ENJOY OUR 30% DISCOUNT PROMO      *" << endl;
                cout << "\t\t=========================================== " << endl;
                cout << endl;
                cout << "\n\t\tPlease enter the P# you want to buy." << endl;
                cout << "\t\tP#: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);

                cout << "\n\t\tPlease enter the quantity you want to buy." << endl;
                cout << "\t\tQUANTITY: ";
                cin >> quantity;
                cin.clear();
                fflush(stdin);
                sms.pwdsc (productNum, quantity);
        cout << endl;
        cout << "\n================================================================================" << endl;
        cout << "\n\t\tWould you like to Buy again? (Y for yes or N for no?)";
        cout << "\n\t\tY to Continue and N to Back Menu";
        cout << "\n\t\tEnter a number to proceed: ";
        cin  >> ask;
        cin.clear();
        fflush(stdin);

        if(ask == 'Y'|| ask =='y')
        {
                system("cls");
                goto retry3;
        }
        }

        else{
        cout << "\n\n\n\t   Your NAMECODE is INCORRECT or this account doesn't exist\n\n";
        cout << "\n================================================================================" << endl;
        }
        system("cls");
        break;


case 7:
        cout << "\n\n\n\n\n\n\t\t\t\t FOR ADMIN ONLY";
        cout << "\n\n\n\t\t\tPlease Login";
        cout << "\n\n\t\t\tUsername:\t\t";
        cin >> username;
        cout << "\t\t\tPassword:\t\t";
        cin >> password;
        cin.clear();
        fflush (stdin);

        system ("cls");

        if(username=="Admin" && password == "Admin")
                {
			sms.addProducts();
		}
		else
		{
			cout << "\n\n\n\t\t Invalid Username/Password. Please Try Again.\n\n";
                        cout << "\n================================================================================\n\n" << endl;
		}
        break;


case 8:
        cout << "\n\n\n\n\n\n\n\t\t\t\t FOR ADMIN ONLY";
        cout << "\n\n\n\t\t\tPlease Login";
        cout << "\n\n\t\t\tUsername:\t\t";
        cin >> username;
        cout << "\t\t\tPassword:\t\t";
        cin >> password;
        cin.clear();
        fflush(stdin);

        system ("cls");

        if(username=="Admin" && password == "Admin")
        {
                sms.displayProducts ();
                cout << "\n\tPlease enter the P# to modify the product details: ";
                cin >> productNum;
                cin.clear();
                fflush(stdin);
                sms.modifyProductInfo(productNum);
        }
        else
        {
                cout << "\n\n\n\t\t Invalid Email/Password\n\n\n";
        }
        break;


case 9:
        cout << "\n\n\n\n\n\n\n\t\t\t\t FOR ADMIN ONLY";
        cout << "\n\n\n\t\t\tPlease Login";
        cout << "\n\n\t\t\tUsername:\t\t";
        cin >> username;
        cout << "\t\t\tPassword:\t\t";
        cin >> password;
        cin.clear();
        fflush(stdin);

        system ("cls");

        if(username=="Admin" && password == "Admin")
        {
                sms.displayProducts ();
                cout << "\n    Enter the P# to delete the product: \n\n";
                cin >> productNum;
                cin.clear();
                fflush(stdin);
                sms.deleteProduct(productNum);
        }
        else
        {
                cout << "\n\n\n\t\t Invalid Email/Password\n\n\n";
        }
        break;


case 0:
        cout << "\n Thankyou for buying at J&R Supermarket! Please visit us again nextime.";
        break;
        }
}
}
int main(){
	Supermarket sms;
	sms.welcome();
return 0;
}

