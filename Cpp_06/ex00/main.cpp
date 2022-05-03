#include <iostream>
#include <string>
#include <cmath>

void toFloat(double val)
{
    std::string s = "";
    if (val - static_cast<int>(val) == 0)
        s = ".0";
    std::cout << "float: " << val << s << "f" << std::endl;
}

void toDouble(double val)
{
    std::string s = "";
    if (val - static_cast<int>(val) == 0)
        s = ".0";
    double d = static_cast<double>(val);
    std::cout << "double: " << d << s << std::endl;
}

void toInt(double val)
{
    int i = static_cast<int>(val);
    std::cout << "int: ";
    if (val < INT_MIN || val > INT_MAX || isnan(val))
        std::cout << "impossible";
    else
        std::cout << i;
    std::cout << std::endl;
}

void convert(char c)
{
    std::cout << "char: " << c << std::endl;
    double d = c;
    toInt(d);
    toFloat(d);
    toDouble(d);
}

void toChar(double val)
{
    char c = static_cast<char>(val);
    std::cout << "char: ";
    if (val < CHAR_MIN || val > CHAR_MAX || isnan(val))
        std::cout << "impossible";
    else if (isprint(c))
        std::cout << c;
    else
        std::cout << "not displayable";
    std::cout << std::endl;
}

bool ft_control(std::string s)
{
    if (s == "nan" || s == "+nan" || s == "-nan" || s == "nanf" || s == "+nanf" || s == "-nanf" ||
        s == "inf" || s == "+inf" || s == "-inf" || s == "inff" || s == "+inff" || s == "-inff")
        return 1;
    return 0;
}

bool ft_check(std::string arg)
{
    int f = 0, m = 0, p = 0, v = 0;
    for (int i = 0; arg[i]; i++)
    {
        if (!isdigit(arg[i]) && arg[i] != 'f' && arg[i] != '.' && arg[i] != '-' && arg[i] != '+')
            return 1;
    }
    for (int i = 0; arg[i]; i++)
    {
        if (arg[i] == 'f')
            f++;
        if (arg[i] == '-')
            m++;
        if (arg[i] == '+')
            p++;
        if (arg[i] == '.')
            v++;
        if (f > 1)
            return 1;
        if (m > 1)
            return 1;
        if (p > 1)
            return 1;
        if (v > 1)
            return 1;
    }
    for (unsigned long int i = 0; arg[i]; i++)
    {
        if ((arg[i] == 'f' && i != (arg.length() - 1)) || ((arg[i] == '-' || arg[i] == '+') && i != 0))
            return 1;
    }
    return 0;
}

int main(int argc, char** argv)
{
    if (argc == 1)
    {
        std::cout << "Error: one argument required\n";
        return 1;
    }
    else if (argc > 2)
    {
        std::cout << "Error: too many arguments\n"; 
        return 2;
    }
    std::string arg;
    arg = argv[1];
    if (arg.length() == 1 && (arg[0] < '0' || arg[0] > '9'))
    {
        convert(arg[0]);
        return 0;
    }
    double val = atof(arg.c_str());
    if ((!ft_control(arg) && (isinf(val) || isnan(val))) || (val == 0 && arg[0] != '0'))
    {
        std::cout << "Error: input not valid" << std::endl;
        return 3;
    }
    if (ft_check(arg) && !ft_control(arg))
    {
        std::cout << "Error: input not valid" << std::endl;
        return 3;
    }
    toChar(val);
    toInt(val);
    toFloat(val);
    toDouble(val);
}