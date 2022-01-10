//! \brief Klasa reprezentująca kalkulator.
//!
//! Klasa służy do konstruowania obiektów,
//! których zadaniem jest realizacja funkcji
//! kalkulatora naukowego.
class MyCalculator
{
public:
	//! \brief Funkcja wykładnicza.
	//!
	//! Funkcja służy do wyznaczania wartości \f$ e^{x} \f$
	//! za pomocą wzoru
	//! \f[ e^{x} = \sum_{k=0}^{\infty}{\frac{x^k}{k!}}. \f]
	//!
	//! \param[in] x - wykładnik funkcji wykładniczej.
	//!
	//! \return Wartość \f$ e^{x} \f$.
	double exponnent(double x);
private:
};
