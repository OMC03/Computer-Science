using namespace std;

class MyInt
{
public:
    int get(); //This will return the integer
    void set(int num); //This will set the number in the begging of the program
    void add(int num); //This will add a preset number to the number placed in the set function
    void subtract(int num); //This will subtract a preset number to the number placed in the set function
    void multiply(int num); //This will multiply a preset number to the number placed in the set function
    int compare(MyInt value); //This will compare the private number to the number set in Integer2
    explicit MyInt(int num); //A constructor that takes a single integer argument


private:
    int pri_num; //The number that is set to Integer1
};

MyInt::MyInt(int num) //
{
    pri_num = num; //
}

int MyInt::get() //This function returns the private integer
{
    return pri_num;
}

void MyInt::set(int num) //This function sets the private number and allows it to be accessed outside the class indirectly
{
    pri_num = num;
}

void MyInt::add(int num) //This function will add a preset number to the private value
{
    pri_num = pri_num + num;

}

void MyInt::subtract(int num) //This function will subtract a preset number to the private value
{
    pri_num = pri_num - num;

}

void MyInt::multiply(int num) //This function will multiply a preset number to the private value
{
    pri_num = pri_num * num;

}

int MyInt::compare(MyInt value) //This function will compare the private variable to the variable in Integer2
{
    if(pri_num < value.get())//If the private variable is less than the variable in Integer2, return 0
    {
        return 0;
    }
    else if(pri_num == value.get()) //If the private variable is equal to the variable in Integer2, return 1
    {
        return 1;
    }
    else
    return 2; //If the private variable is neither less than or equal to the variable in Integer2, return 2
}
