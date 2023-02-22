// Fig. 5.8: DollarAmount.h
// DollarAmount class stores dollar amounts as a whole numbers of pennies
#include <string>
#include <cmath>

class DollarAmount {
public:
   // initialize amount from an int64_t value
   explicit DollarAmount(int64_t value)
   {
        dollars = value / 100;
        cents = value % 100;
   }
   // add right's amount to this object's amount
   void add(DollarAmount right) {
      // can access private data of other objects of the same class
      dollars += right.getDollars();
      cents += right.getCents();

      if(cents >= 100)
    {
        cents = abs(cents - 100);
        dollars++;
    }
   }

    int64_t getDollars()
    {
        return dollars;
    }

    int getCents()
    {
        return cents;
    }

   // subtract right's amount from this object's amount
   void subtract(DollarAmount right) {
      // can access private data of other objects of the same class
      dollars -= right.getDollars();
      cents -= right.getCents();

      if(cents < 0)
      {
          cents = abs(cents + 100);
          dollars--;
      }
   }

   // uses integer arithmetic to calculate interest amount,
   // then calls add with the interest amount
    void addInterest(int rate, int divisor) {

     // combine our dollars and cents into one big integer (number of pennies)
     int64_t combinedMoney = (dollars * 100) + cents;

     // calculate interest using original formula
     int64_t interestToAdd = (combinedMoney * rate + divisor / 2) / divisor;

     // create a DollarAmount object so we can add the interest
     DollarAmount interest(interestToAdd);

     // add interest to the DollarAmount object that called this function
     add(interest);
     }

      // return a string representation of a DollarAmount object
      std::string toString() const {
      std::string d{std::to_string(dollars / 100)};
      std::string c{std::to_string(std::abs(cents % 100))};
      return d + "." + (c.size() == 1 ? "0" : "") + c;
   }
private:
   int64_t dollars{0}; // dollars
   int cents{0}; // pennies
};

/*************************************************************************
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
