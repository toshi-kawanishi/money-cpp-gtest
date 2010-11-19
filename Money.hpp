class Money
{
};

class Dollar : public Money
{
public:

	Dollar( int amount ) {
		this->amount = amount;
	}

	Dollar operator * ( int multiplier ) const {
		return Dollar( amount * multiplier );
	}

	bool operator == ( const Dollar& dollar ) const {
		return amount == dollar.amount;
	}

private:
	int amount;
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
