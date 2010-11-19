class Dollar
{
public:

	Dollar( int amount ) {
		this->amount = amount;
	}

	Dollar times( int multiplier ) const {
		return Dollar( amount * multiplier );
	}

	Dollar operator * ( int multiplier ) const {
		return times( multiplier );
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

	Franc times( int multiplier ) const {
		return Franc( amount * multiplier );
	}

	bool operator == ( const Franc& franc ) const {
		return amount == franc.amount;
	}

private:
	int amount;
};
