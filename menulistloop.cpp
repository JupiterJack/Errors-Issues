#include <iostream>

int main()
{
    bool gate = false;
    std::string select;
    std::string learn = "learn", meditate = "meditate", focus = "focus";

     while(gate)
    {
        std::cout << learn << "\n" << meditate << "\n" << focus << std::endl;
        std::cin >> select;
        do{
            if(select == learn)
            {
                std::cout << "Attain more knowledge human" << std::endl;
                gate;
            }
            else if(select == meditate)
            {
                std::cout << "Relax yourself" << std::endl;
                gate;
            }
            else if(select == focus)
            {
                std::cout << "Concentrate.." << std::endl;
                gate;
            }
            else
            {
                std::cout << "Err: Cognition Overload!" << std::endl;
            }
        }while(gate == true);
    }
}

// Write a menu program that lets the user select from a list of options, and if the input is not one
// of the options, reprint the list