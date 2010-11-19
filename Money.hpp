class Money
{
public:

	int amount() const {
		return amount_;
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

	bool operator == ( const Money& money ) const {
		return amount() == money.amount();
	}
};

class Franc
{
public:
	Franc( int amount ) {
		this->amount = amount;
	}

	Franc operator * ( int multiplier ) const {
		return Franc( amount * multiplier );
	}

	bool operator == ( const Franc& franc ) const {
		return amount == franc.amount;
	}

private:
	int amount;
};
