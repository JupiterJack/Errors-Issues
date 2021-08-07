#include <iostream>

int main()
{
    bool gate = true;
    std::string select;
    std::string learn = "learn", meditate = "meditate", focus = "focus";

     while(gate)
    {
        std::cout << learn << "\n" << meditate << "\n" << focus << std::endl;
        std::cout << "\n";
        std::cin >> select;
        do{
            if(select == learn)
            {
                std::cout << "\n" << "Attain more knowledge human" << std::endl;
                gate = false;
            }
            else if(select == meditate)
            {
                std::cout << "\n" << "Relax yourself" << std::endl;
                gate = false;
            }
            else if(select == focus)
            {
                std::cout << "\n" << "Concentrate.." << std::endl;
                gate = false;
            }
            else
            {
                std::cout << "\n" << "Err: Cognition Overload!" << std::endl;
                break;
            }
        }while(gate);
    }
}

// Write a menu program that lets the user select from a list of options, and if the input is not one
// of the options, reprint the list