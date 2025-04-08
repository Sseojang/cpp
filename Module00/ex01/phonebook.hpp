#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

class Contact
{
private:
	//std::string index;
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;
	std::string nickName;
	std::string darkestSecret;
public:
	Contact(){}
	~Contact(){}

	const std::string &GetfirstName() const;
	const std::string &GetlastName() const;
	const std::string &GetphoneNumber() const;
	const std::string &GetnickName() const;
	const std::string &GetdarkestSecret() const;

	void SetfirstName(std::string input);
	void SetlastName(std::string input);
	void SetphoneNumber(std::string input);
	void SetnickName(std::string input);
	void SetdarkestSecret(std::string input);
};

class PhoneBook
{
private:
	Contact Book[8];
	int bookIndex;
public:
	PhoneBook(void){bookIndex=0;}
	~PhoneBook(){};
	void Add(void);
	void Print(void);
	void Editor(std::string text);
	void Select(std::string selectNum);
};

#endif /* PHONEBOOK_HPP */