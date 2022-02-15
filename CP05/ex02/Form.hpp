#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {

		public:
			Form(void);
			Form(std::string const name,int const gradeS,int const gradeE);
			Form (Form  const &src);
			Form  & operator=(Form  const & rhs);
			virtual ~Form(void);
			std::string getName() const;
			int getGradeS() const;
			int getGradeE() const;
			bool getSigne() const;
			Form& beSigned(Bureaucrat  & name);
			void MethodeExec(Bureaucrat const & executor)const;
			virtual void executeform(void) const = 0 ;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what () const throw ()
				{
					return ("Grade is too high.");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what () const throw ()
				{
					return("Grade is too low.");
				}
		};
		class Nosigned : public std::exception
		{
			public:
				virtual const char * what () const throw ()
				{
					return("No signed.");
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