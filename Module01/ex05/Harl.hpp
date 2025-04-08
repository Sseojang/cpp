#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

enum{DEBUG=0, INFO, WARNING, ERROR};

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl(){}
	~Harl(){}
	void complain(std::string level);
};

#endif /*HARL_HPP*/