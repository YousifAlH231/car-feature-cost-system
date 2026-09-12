#include "Car.h"

int main()
{
    Safety one("Camery", 58000, "EIS5.8", 2);

    Luxury two("Camery", 58000, "EIS5.8", 2,
               "Embroidery", "eTrex");

    AI three("Camery", 58000, "EIS5.8", 2,
             "Embroidery", "eTrex", 'N', "Partial");

    Executive four("Camery", 58000, "EIS5.8", 2,
                   "Embroidery", "eTrex", 'N',
                   "Partial", 'N', 'Y');

    Car* ptrCar[4];

    ptrCar[0] = &one;
    ptrCar[1] = &two;
    ptrCar[2] = &three;
    ptrCar[3] = &four;

    for (int i = 0; i < 4; i++)
    {
        ptrCar[i]->findCost();
        ptrCar[i]->print();

        cout << endl;
    }

    return 0;
}