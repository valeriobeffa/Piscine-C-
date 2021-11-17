#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc == 4 && argv[1] && argv[2] && argv[3])
    {
        std::ifstream myfile;
        std::string filename;
        filename.append(argv[1]);
        std::string str1;
        str1.append(argv[2]);
        std::string str2;
        str2.append(argv[3]);
        myfile.open(filename);
        if (!myfile)
        {
            std::cout << "Unable to open file" << std::endl;
            exit (1);
        }
        else
        {
            std::ofstream outfile;
            char mychar;
            outfile.open(filename + ".replace");
            std::string mystring;
            int j = 0;
            while (myfile.good())
            {
                mychar = myfile.get();
                if (mychar == -1)
                    break;
                mystring.push_back(mychar);
                while (mychar == str1[j] && str1[j] != '\0')
                {
                    mychar = myfile.get();
                    mystring.push_back(mychar);
                    j++;
                }
                if (str1[j] == '\0')
                {
                    outfile << str2;
                    outfile << mychar;
                }
                else
                    outfile << mystring;
                mystring.clear();
                j = 0;
            }
            outfile.close();
            myfile.close();
        }
    }
    else
        std::cout << "Error: wrong arguments" << std::endl;
}