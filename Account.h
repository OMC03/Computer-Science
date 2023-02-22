// Fig. 3.8: Account.h
// Account class with name and balance data members, and a
// constructor and deposit function that each perform validation.
#include <string>
#include"DollarAmount.h"

class Account {
public:
   // Account constructor with two parameters
   Account(std::string accountName, int initialBalance)
      : name{accountName}, Balance(initialBalance * 100) { // assign accountName to data member name

      // validate that the initialBalance is greater than 0; if not,
      // data member balance keeps its default initial value of 0
      if (initialBalance > 0) { // if the initialBalance is valid
        DollarAmount Balance(initialBalance * 100);
      }
   }

   // function that deposits (adds) only a valid amount to the balance
   void deposit(int depositAmount) {
      if (depositAmount > 0) { // if the depositAmount is valid
          DollarAmount tempBalance{depositAmount * 100};// add it to the balance
             Balance.add(tempBalance);
      }
   }

   // function returns the account balance
   int getBalance(){
      return static_cast<int>(Balance.getDollars());//Cast into an int variable
   }

   // function that sets the name
   void setName(std::string accountName) {
      name = accountName;
   }

   // function that returns the name
   std::string getName() const {
      return name;
   }

     std::string withdrawl(int withdrawlAmount)
   {
       if(withdrawlAmount > Balance.getDollars())
       {
           return "Error: insufficient funds";
       }

        if(withdrawlAmount <= Balance.getDollars())
       {
          DollarAmount tempBalance{withdrawlAmount * 100};// add it to the balance
          Balance.subtract(tempBalance);
           return "Withdraw Successful";
       }
   }
private:
   std::string name; // account name data member
    DollarAmount Balance{0}; // data member with default initial value
}; // end class Account


/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
