#include <iostream>
#include <fstream>

std::string	sed_is_for_losers( const std::string& line, const std::string& s1, const std::string& s2 )
{
	std::string		output;
	size_t			start;
	size_t			end;

	if (!s1.compare(s2))
		return (line);
	start = line.find(s1);
	end = start + s1.length();
	if ( start == line.npos )
		return (line);
	output = line.substr(0, start);
	output += s2;
	output += line.substr(end, line.length());
	if (output.find(s1))
		output = sed_is_for_losers(output, s1, s2);
	return (output);
}

int			main( int ac, char **av )
{
	if (ac == 4)
	{
		std::ifstream	ifile(av[1]);
		std::string		name(av[1]);
		name += ".replace";
		std::string		s1(av[2]);
		std::string		s2(av[3]);
		std::string		read;
		std::string		line;

		if (ifile.fail())
		{	
			std::cerr << "Can't open input file" << std::endl;
			return (0);
		}
		std::ofstream	ofile(name.c_str());
		if (ofile.fail())
		{
			ifile.close();
			std::cerr << "Can't create output file" << std::endl;
			return (0);	
		}
		while (getline(ifile, read))
			ofile << sed_is_for_losers(read, s1, s2) << "\n";
		ifile.close();
		ofile.close();
		return (0);
	}
	std::cout << "Wrong arguments" << std::endl;
	return (0);
}
