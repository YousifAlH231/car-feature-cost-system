#include "Car.h"

void Car::print()
{
}

void Safety::set(string mod, int costs, string brake, int air)
{
    model = mod;
    price = costs;
    ABS = brake;
    airBags = air;
    findCost();
}

void Safety::findCost()
{
    cost = price;

    int absCost;
    int airBagCost;

    if (ABS == "EIS5.8")
        absCost = 2400;
    else
        absCost = 1700;

    if (airBags == 1)
        airBagCost = 1200;
    else
        airBagCost = 2100;

    cost += absCost + airBagCost;
}

void Safety::print()
{
    cout << "The car model is: " << model
         << ", it has safety features, and its cost is: "
         << cost << endl;
}

Safety::Safety(string mod, int costs, string brake, int air)
{
    set(mod, costs, brake, air);
}

void Luxury::set(string mod, int costs, string brake, int air,
                 string seat, string gps)
{
    Safety::set(mod, costs, brake, air);

    leatherSeats = seat;
    GPS = gps;

    findCost();
}

void Luxury::findCost()
{
    int seatCost;
    int gpsCost;

    if (leatherSeats == "Embroidery")
        seatCost = 4900;
    else if (leatherSeats == "Split")
        seatCost = 3700;
    else
        seatCost = 5120;

    if (GPS == "eTrex")
        gpsCost = 700;
    else if (GPS == "Geko")
        gpsCost = 840;
    else
        gpsCost = 570;

    Safety::findCost();

    cost += seatCost + gpsCost;
}

void Luxury::print()
{
    cout << "The car model is: " << model
         << ", it has luxury features, and its cost is: "
         << cost << endl;
}

Luxury::Luxury(string mod, int costs, string brake, int air,
               string seat, string gps)
{
    set(mod, costs, brake, air, seat, gps);
}

void AI::set(string mod, int costs, string brake, int air,
             string seat, string gps, char nightv, string self)
{
    Luxury::set(mod, costs, brake, air, seat, gps);

    nightVision = nightv;
    selfChecking = self;

    findCost();
}

void AI::findCost()
{
    int selfCheckingCost;
    int nightVisionCost;

    if (selfChecking == "Partial")
        selfCheckingCost = 3800;
    else
        selfCheckingCost = 7120;

    if (nightVision == 'N')
        nightVisionCost = 0;
    else
        nightVisionCost = 6240;

    Luxury::findCost();

    cost += selfCheckingCost + nightVisionCost;
}

void AI::print()
{
    cout << "The car model is: " << model
         << ", it has AI features, and its cost is: "
         << cost << endl;
}

AI::AI(string mod, int costs, string brake, int air,
       string seat, string gps, char nightv, string self)
{
    set(mod, costs, brake, air, seat, gps, nightv, self);
}

void Executive::set(string mod, int costs, string brake, int air,
                    string seat, string gps, char nightv, string self,
                    char fx, char cf)
{
    AI::set(mod, costs, brake, air, seat, gps, nightv, self);

    fax = fx;
    conferencing = cf;

    findCost();
}

void Executive::findCost()
{
    int faxCost;
    int conferencingCost;

    if (fax == 'N')
        faxCost = 0;
    else
        faxCost = 380;

    if (conferencing == 'N')
        conferencingCost = 0;
    else
        conferencingCost = 3730;

    AI::findCost();

    cost += faxCost + conferencingCost;
}

void Executive::print()
{
    cout << "The car model is: " << model
         << ", it has executive features, and its cost is: "
         << cost << endl;
}

Executive::Executive(string mod, int costs, string brake, int air,
                     string seat, string gps, char nightv, string self,
                     char fx, char cf)
{
    set(mod, costs, brake, air, seat, gps, nightv, self, fx, cf);
}
