/* cahpter 2 */
  // program 1

#include<iostream>
int main()
{
        const std::string hello = "Hello";
        const std::string message = hello + ", world" + "!";
        std::cout<<message;
}
//this program is valid

/*program2*/

#include<iostream>
int main()
{
        const std::string exclam = "!";
        const std::string message = "Hello" + ", world" + exclam;
        std::cout<<message;
}
/*this program does not run because in constant the value cannot be assigned if already the value is assigned*/

/*program 3*/

#include<iostream>
#include<string>
int main()
{
        {
                const std::string s = "a string";
                std::cout << s << std::endl;
        }
        {
                const std::string s = "another string";
                std::cout << s << std::endl;
        }
        return 0;
}
// this is a valid program

/* program 4*/

#include<iostream>
#include<string>
int main()
{
        {
                const std::string s = "a string";
                std::cout << s << std::endl;
                {
                        const std::string s = "another string";
                        std::cout << s << std::endl;
                }
        }
        return 0;
}
//this is a valid program

/* program  5 */

#include <iostream>
#include <string>
int main()
{

        {
                std::string s =" a string";
                
                {
                       std::cout << s <<std::endl;
                       std::string x = s+",really";
                }
                std::cout << x <<std::endl;
        }
        return 0;
}
//this is program is invalid because the scope of the x is with the curly braces so the x value cannot be printed outside that fuction.
// the corrected output

#include <iostream>
#include <string>
int main()
{

        {
                std::string s =" a string";
                std::string x = s+",really";
                {
                       std::cout << s <<std::endl;
                       
                }
                std::cout << x <<std::endl;
        }
        return 0;
}

/* program 6 */
#include <iostream>
#include <string>
int main()
{
        std::cout << "What is your name? ";
        std::string name;
        std::cin >> name;
        std::cout << "Hello, " << name
                << std::endl << "And what is yours? ";
        std::cin >> name;
        std::cout << "Hello, " << name
        << "; nice to meet you too!" << std::endl;
        return 0;
}

~                                                                               
~                                                                               
~                                                                               
~                 
