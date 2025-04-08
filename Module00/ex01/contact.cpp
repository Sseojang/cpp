#include "phonebook.hpp"

const std::string &Contact::GetfirstName() const
{
	return firstName;
}

const std::string &Contact::GetlastName() const
{
	return lastName;
}

const std::string &Contact::GetphoneNumber() const
{
	return phoneNumber;
}

const std::string &Contact::GetnickName() const
{
	return nickName;
}

const std::string &Contact::GetdarkestSecret() const
{
	return darkestSecret;
}

void Contact::SetfirstName(std::string input)
{
	firstName = input;
}

void Contact::SetlastName(std::string input)
{
	lastName = input;
}

void Contact::SetphoneNumber(std::string input)
{
	phoneNumber = input;
}

void Contact::SetnickName(std::string input)
{
	nickName = input;
}

void Contact::SetdarkestSecret(std::string input)
{
	darkestSecret = input;
}
