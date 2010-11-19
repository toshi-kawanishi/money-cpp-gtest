#include <iostream>

class Money
{
public:

	virtual ~Money() {}

	int amount() const {
		return amount_;
	}

	bool operator == ( const Money& money ) const {
		return amount() == money.amount()
			&& typeid( *this ).name() == typeid( money ).name();
	}

protected:
	int amount_;
};

class Dollar : public Money
{
public:

	Dollar( int amount ) {
		this->amount_ = amount;
	}

	Dollar operator * ( int multiplier ) const {
		return Dollar( amount() * multiplier );
	}
};

class Franc : public Money
{
public:
	Franc( int amount ) {
		this->amount_ = amount;
	}

	Franc operator * ( int multiplier ) const {
		return Franc( amount() * multiplier );
	}
};
