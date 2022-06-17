#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int retunTotalBill(void);   //method prototype
    int TotalBillAmt = retunTotalBill();
    cout << "\tYour bill is : " << TotalBillAmt << endl << endl;
    cout << "\tWould you like to start order again(Y/y)" << endl << "\t";
    char choice;
    cin >> choice;
    if(choice == 'y'||choice == 'Y'){
        main();
    }
    else{
        cout << "\tThank you :))" << endl;
    }
    
    return 0;
}

// method
int retunTotalBill(){
    char item, selectAgain;
    int choice, billamt = 0, breakfst, bevrage, mainCourse;
    system("CLS");
    cout << "\t-----------------\tWelcome to Food Services\t-----------------" << endl << endl;
    cout << "\tWe Have 3 type of Meal" << endl;
    cout << "\t1. Breakfast" << endl;
    cout << "\t2. Beverage" << endl;
    cout << "\t3. Main Course" << endl;
    cout << "\tIf you want to enjoy Delicious Food Press 1" << endl;

    start:  //label
    cout << "\t";
    cin >> choice;



    if (choice == 1)
    {
        system("CLS");
        items:  //label
        cout << "\tSelect Your Choice" << endl;
        cout << "\t1. Breakfast Enter(a)"<< endl;
        cout << "\t2. Beverage Enter(b)"<< endl;
        cout << "\t3. Main Course Enter(c)"<< endl;
        cout << "\t";
        cin >> item;


        // Breakfast section
        if (item == 'a' || item == 'A')
        {
            system("CLS");
            Brkfst_label:   //label  
            cout << "\t**********\tWelcome to Breakfast Menu\t**********" << endl << endl << endl;
            cout << "\tPlease select 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 as per your choice" << endl << endl;;
            cout << "\t\tItems\t\t\t\t\t\tPrice(Rs.)" << endl;
            cout << "\t1. Aalo Paratha\t\t\t\t\t\t40" << endl;
            cout << "\t2. Paneer Paratha\t\t\t\t\t50" << endl;
            cout << "\t3. Eggs\t\t\t\t\t\t\t40" << endl;
            cout << "\t4. Oatmeal\t\t\t\t\t\t60" << endl;
            cout << "\t5. Chole Bhature\t\t\t\t\t50" << endl;
            cout << "\t6. Channa Kulcha\t\t\t\t\t60" << endl;
            cout << "\t7. Poha\t\t\t\t\t\t\t30" << endl;
            cout << "\t8. Masala Omelette\t\t\t\t\t40" << endl;
            cout << "\t9. Sandwich\t\t\t\t\t\t30" << endl;
            cout << "\t10. Rice Noodles\t\t\t\t\t70" << endl;
            cout << "\t";
            cin >> breakfst;
            if (breakfst == 1)
            {
                billamt = billamt + 40;
            }
            else if (breakfst == 2)
            {
                billamt = billamt + 50;
            }
            else if (breakfst == 3)
            {
                billamt = billamt + 40;
            }
            else if (breakfst == 4)
            {
                billamt = billamt + 60;
            }
            else if (breakfst == 5)
            {
                billamt = billamt + 50;
            }
            else if (breakfst == 6)
            {
                billamt = billamt + 60;
            }
            else if (breakfst == 7)
            {
                billamt = billamt + 30;
            }
            else if (breakfst == 8)
            {
                billamt = billamt + 40;
            }
            else if (breakfst == 9)
            {
                billamt = billamt + 30;
            }
            else if (breakfst == 10)
            {
                billamt = billamt + 70;
            }
            else{
                cout << "\tYou have enterd wrong value, please try again" << endl;
                goto Brkfst_label;     //label calling
            }
            cout << "\tDo you want to add more items, y or n?" << endl;
            cout << "\t";
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y')
            {
                goto items;
            }
            else{
                return billamt;
            }
                
        }



        // Beverage section
        else if (item == 'b' || item == 'B')
        {
            system("CLS");
            BeverageItem:    //label
            cout << "\t**********\tWelcome to Beverage Menu\t**********" << endl << endl << endl;
            cout << "\tPlease select 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 as per your choice" << endl << endl;;
            cout << "\t\tItems\t\t\t\t\t\tPrice(Rs.)" << endl;
            cout << "\t1. Water\t\t\t\t\t\t20" << endl;
            cout << "\t2. Milk\t\t\t\t\t\t\t30" << endl;
            cout << "\t3. Tea\t\t\t\t\t\t\t15" << endl;
            cout << "\t4. Coffee\t\t\t\t\t\t40" << endl;
            cout << "\t5. Sparkling drinks\t\t\t\t\t50" << endl;
            cout << "\t6. Juices\t\t\t\t\t\t60" << endl;
            cout << "\t7. Energy drink\t\t\t\t\t\t50" << endl;
            cout << "\t8. Milkshakes\t\t\t\t\t\t70" << endl;
            cout << "\t9. Pepsi\t\t\t\t\t\t30" << endl;
            cout << "\t10. Soft drinks\t\t\t\t\t\t40" << endl;
            cout << "\t";
            cin >> bevrage;
            if (bevrage == 1)
            {
                billamt = billamt + 20;
            }
            else if (bevrage == 2)
            {
                billamt = billamt + 30;
            }
            else if (bevrage == 3)
            {
                billamt = billamt + 15;
            }
            else if (bevrage == 4)
            {
                billamt = billamt + 40;
            }
            else if (bevrage == 5)
            {
                billamt = billamt + 50;
            }
            else if (bevrage == 6)
            {
                billamt = billamt + 60;
            }
            else if (bevrage == 7)
            {
                billamt = billamt + 50;
            }
            else if (bevrage == 8)
            {
                billamt = billamt + 70;
            }
            else if (bevrage == 9)
            {
                billamt = billamt + 30;
            }
            else if (bevrage == 10)
            {
                billamt = billamt + 40;
            }
            else{
                cout << "\tYou have enterd wrong value, please try again" << endl;
                goto BeverageItem;     //label calling
            }
            cout << "\tDo you want to add more items, y or n?" << endl;
            cout << "\t";
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y')
            {
                goto items;
            }
            else{
                return billamt;
            }
        }



        // Main Course section
        if (item == 'c' || item == 'C')
        {
            system("CLS");
            maincourse_label:   //label  
            cout << "\t**********\tWelcome to Main Course Menu\t**********" << endl << endl << endl;
            cout << "\tPlease select 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 as per your choice" << endl << endl;;
            cout << "\t\tItems\t\t\t\t\t\tPrice(Rs.)" << endl;
            cout << "\t1. Aloo gobi\t\t\t\t\t\t80" << endl;
            cout << "\t2. Butter chicken\t\t\t\t\t200" << endl;
            cout << "\t3. Palak paneer\t\t\t\t\t\t180" << endl;
            cout << "\t4. Chicken tikka masala\t\t\t\t\t160" << endl;
            cout << "\t5. Fish curry\t\t\t\t\t\t220" << endl;
            cout << "\t6. Dal makhani\t\t\t\t\t\t80" << endl;
            cout << "\t7. Kofta\t\t\t\t\t\t100" << endl;
            cout << "\t8. Biryani\t\t\t\t\t\t180" << endl;
            cout << "\t9. Rumali Roti\t\t\t\t\t\t10" << endl;
            cout << "\t10. Poori\t\t\t\t\t\t10" << endl;
            cout << "\t";
            cin >> mainCourse;
            if (mainCourse == 1)
            {
                billamt = billamt + 80;
            }
            else if (mainCourse == 2)
            {
                billamt = billamt + 200;
            }
            else if (mainCourse == 3)
            {
                billamt = billamt + 180;
            }
            else if (mainCourse == 4)
            {
                billamt = billamt + 160;
            }
            else if (mainCourse == 5)
            {
                billamt = billamt + 220;
            }
            else if (mainCourse == 6)
            {
                billamt = billamt + 80;
            }
            else if (mainCourse == 7)
            {
                billamt = billamt + 100;
            }
            else if (mainCourse == 8)
            {
                billamt = billamt + 180;
            }
            else if (mainCourse == 9)
            {
                billamt = billamt + 10;
            }
            else if (mainCourse == 10)
            {
                billamt = billamt + 10;
            }
            else{
                cout << "\tYou have enterd wrong value, please try again" << endl;
                goto maincourse_label;     //label calling
            }
            cout << "\tDo you want to add more items, y or n?" << endl;
            cout << "\t";
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y')
            {
                goto items;
            }
            else{
                return billamt;
            }
                
        }








        else{
            cout << "\tYou have enterd wrong value, please try again" << endl;
            goto items;     //label calling
        }
        
        
    }
    else{
        cout << "\tYou are Entered wrong value, Please Enter 1" << endl;
        goto start;     //label calling
    }
    
    return billamt;
}