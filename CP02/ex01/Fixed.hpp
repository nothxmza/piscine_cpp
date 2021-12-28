#include  <tgmath.h> 
#include <iostream>

class Fixed
{
    public:
        Fixed(void);
		Fixed(const int nbr);
		Fixed(const float nbr);
        Fixed(Fixed const & src);
        ~Fixed(void);
        Fixed & operator=(Fixed const & rhs);
		float toFloat(void) const;
		int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int fixe; //stocker la valeur a point fixe
        static const int bits = 8; //stocker le nombre de bits fractionnels
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);