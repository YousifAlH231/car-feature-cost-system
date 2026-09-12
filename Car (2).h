#include <iostream>
using namespace std;

class Car
{
protected:
    string model;
    int price;

public:
    virtual void print();
    virtual void findCost() = 0;
};

class Safety : public Car
{
protected:
    string ABS;
    int airBags;
    int cost;

public:
    void set(string, int, string, int);
    void print();
    void findCost();

    Safety(string = " ", int = 0, string = " ", int = 0);
};

class Luxury : public Safety
{
protected:
    string leatherSeats;
    string GPS;

public:
    void set(string, int, string, int, string, string);
    void findCost();
    void print();

    Luxury(string = " ", int = 0, string = " ", int = 0,
           string = " ", string = " ");
};

class AI : public Luxury
{
protected:
    char nightVision;
    string selfChecking;

public:
    void set(string, int, string, int, string, string, char, string);
    void findCost();
    void print();

    AI(string = " ", int = 0, string = " ", int = 0,
       string = " ", string = " ", char = ' ', string = " ");
};

class Executive : public AI
{
protected:
    char fax;
    char conferencing;

public:
    void set(string, int, string, int, string, string,
             char, string, char, char);

    void findCost();
    void print();

    Executive(string = " ", int = 0, string = " ", int = 0,
              string = " ", string = " ", char = ' ',
              string = " ", char = ' ', char = ' ');
};