#include <iostream>

class Karen
{
	public :
		Karen(void);
		void complain(std::string level);
		void (Karen::*tmp[4])(void);
		std::string index[4];

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};
