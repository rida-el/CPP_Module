#include <iostream>
#include <string>
#include <fstream>


int main(int ac, char **av)
{

    if(ac == 4)
    {
        std::string fileName = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::ifstream file(fileName);

        if (file.is_open() && s1 != "" && s2 != "" )
        {
            // std::ifstream copy(file);
            std::string line;
            std::getline(file, line, (char)EOF);
            file.close();
            std::ofstream newfile(fileName + ".replace");
            if (newfile.is_open())
            {
                while (line.find(s1) != std::string::npos && s1 != s2)
                {
                    line.replace(line.find(s1), s1.length(), s2);
                }
                newfile << line;
                newfile.close();
            }
            else
            {
                std::cout << "Unable to open file" << std::endl;
            }
        }
        else
        {
            std::cout << "Unable to open file or invalide args" << std::endl;
        }
    }
    else if(ac > 4)
    {
        std::cout << "Too many parametres" << std::endl;
    }
    else
    {
        std::cout << "Too few parametres" << std::endl;
    }
    
    return 0;
}