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
// thi is a valid program

