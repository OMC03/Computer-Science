using namespace std;

class MyInt
{
public:
    int get(); //This will return the integer
    void set(int num); //
    void add(int num); //
    void subtract(int num); //
    void multiply(int num); //
    int compare(MyInt value); //
    explicit MyInt(int num); //


private:
    int pri_num;
};

MyInt::MyInt(int num) //
{
    pri_num = num; //
}

int MyInt::get() //
{
    return pri_num; //
}

void MyInt::set(int num) //
{
    pri_num = num; //
}

void MyInt::add(int num) //
{
    pri_num = pri_num + num; //

}

void MyInt::subtract(int num) //
{
    pri_num = pri_num - num; //

}

void MyInt::multiply(int num) //
{
    pri_num = pri_num * num; //

}

int MyInt::compare(MyInt value) //
{
    if(pri_num < value.get()) //
    {
        return 0; //
    }
    else if(pri_num == value.get()) //
    {
        return 1; //
    }
    else
    return 2; //
}
