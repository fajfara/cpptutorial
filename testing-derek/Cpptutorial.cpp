#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>


int g_iRandNumber = 0;

const double PI = 3.141593434;



int main() {

    // if, else, conditional and logical operators, arrays, vectors ...

    // conditional == != < > 
    // Logical && and, || or, ! not

    // ARRAYS
    int arrNums[10] = {1};
    int arrnNums2[] = {1,2,3};
    int arrnNums3[5] = {8,9};

    std::cout << "1st Value : " << arrNums[0] << "\n";

    // 1 = 18, 21, 50, > 55

    /* std::string sAge = "0";
    std::cout << "Enter your age: ";
    getline(std::cin, sAge);
    int nAge = std::stoi(sAge);

    if((nAge >= 1) && (nAge <= 18)){
        std::cout << "Important birthday!\n";

    } else if ((nAge == 21) || (nAge == 50)){
        std::cout << "Important birthday\n";

    }
    else if (nAge >= 65){
        std::cout << "Important birthday\n";
    } 
    else {
        std::cout << "Not an important birthday\n";
    } */

    /* std::string sAge = "0";
    std::cout << "Enter the kids age: ";
    getline(std::cin, sAge);
    int nAge = std::stoi(sAge);

    if(nAge == 5){
        std::cout << "Go to Kindergarten\n";

    } else if ((nAge > 5 && (nAge <= 17))) {
        int nCalcAge = nAge - 2;
        std::cout << "Go to grade " << nCalcAge << "\n";

    } else if (nAge > 17){
        std::cout << "Go to college\n";

    } else {
        std::cout << "Too young for school\n";

    } */

    
    /* 

    // Spremenljivka v katero bo zapisan user input
    std::string sMiles;

    // Spremenljivki za rezultat
    double dMiles, dKilometers;

    // Izpis na zaslon za vnos milj
    std::cout << "Enter miles: ";

    // Kako pobrati user input
    getline(std::cin, sMiles);

    // pretvorba v double
    dMiles = std::stod(sMiles);

    // Rezultat
    dKilometers = dMiles * 1.60934;

    // Print rezultatat, printf je dejansko funkcija iz c jezika in ne c++
    printf("%.4f miles equals %.4f Kilometers\n", dMiles, dKilometers); 
    
    */
    


    /*
    bool circ = true;
    char keyboard = 'A';
    unsigned short int u16Age = 43;
    short int siWeight = 180;
    int nDays = 7;
    long iBigNum = 11000000;
    float fpi = 1223.43434;
    double dBigFloat = 1.111111111111111111111111111111;
    long double ldPi = 3.144352342526425467546757;
    auto whatWilliBe = true;

    printf("Hello from pritnf\n");          


    std::cout << "Hello world" << std::endl;

    
    if (argc != 1) {
        std::cout <<    "You entered " << argc <<
                        " arguments\n";

    }

    for(int i = 0; i < argc; ++i)
    {
        if(i == 0){
            std::cout << "Found the 1st arg\n";
            continue;
        }
        std::cout << argv[i] << "\n";
    }*/


    

    return 0;
}