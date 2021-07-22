#include <iostream>
#include <vector>

class User // modifiers out of class are private by default 
{
    static int user_count;
    std::string status = "Gold";

    public:
        static int get_user_count()
        {
            return user_count;
        }
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
        void set_status(std::string status)
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this->status = status;
            }
            else
            {
                this->status = "No status";
            }

        }
        User()
        {
            user_count++;
        }
        User(std::string first_name, std::string last_name, std::string status)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
            user_count++;
        }
        ~User()
        {
            user_count--;
        }
        
};

int User::user_count = 0;

int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].first_name == user.first_name && users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

std::ostream& operator << (std::ostream& output, User& user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name << std::endl;
    return output;
}

int main()
{
    User user;
    user.first_name = "Jupiter";
    user.last_name = "Jack";
    user.set_status("Gold");
    std::cout << user << std::endl;

    return 0;
}

//function "std::basic_ostream<_Elem, _Traits>::basic_ostream(const std::basic_ostream<_Elem, _Traits> &) 
//[with _Elem=char, _Traits=std::char_traits<char>]" (declared at line 60 of "C:\PROGRAM FILES (X86)\MICROSOFT VISUAL STUDIO
//\2019\BUILDTOOLS\VC\TOOLS\MSVC\14.29.30037\INCLUDE\ostream") cannot be referenced -- it is a deleted function