#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error, 3 arguments needed!\n";
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ofstream outfile;
    std::ifstream infile;

    infile.open(filename);
    outfile.open(filename.append(".replace"));
    if (!outfile.is_open() || !infile.is_open())
    {
        std::cout << "Error, cannot open the file!\n";
        return (1);
    }
    std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>(   ));
    int pos = content.find(s1);
	while (pos != -1)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos = content.find(s1, pos + s2.length());
	}
	outfile << content;
    outfile.close();
    infile.close();
    return (0);
}