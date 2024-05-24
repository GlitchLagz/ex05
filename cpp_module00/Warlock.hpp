#pragma once
#include <string>
#include <iostream>

class Warlock{
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock& operator=(Warlock const &src);
		Warlock(Warlock const &src);
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		
		std::string const& getName() const;
		std::string const& getTitle() const;
		void setTitle(std::string const &src);
		void introduce() const;

};