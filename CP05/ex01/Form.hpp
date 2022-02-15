#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {

		public:
			Form(void);
			Form(std::string const name,int const gradeS,int const gradeE);
			~Form(void);
			std::string getName() const;
			int getGradeS() const;
			int getGradeE() const;
			bool getSigne() const;
			Form (Form  const &src);
			Form  & operator=(Form  const & rhs);
			Form& beSigned(Bureaucrat   & name);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what () const throw ()
				{
					return ("Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what () const throw ()
				{
					return("Grade is too low");
				}
		};
		private:
			int const gradeS;
			int const gradeE;
			std::string const name;
			bool signe;



};
std::ostream & operator<<(std::ostream & o, Form const & rhs);


#endif