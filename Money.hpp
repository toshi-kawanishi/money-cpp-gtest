class Dollar
{
public:

	Dollar( int amount ) {
		this->amount = amount;
	}

	Dollar times( int multiplier ) {
		return Dollar( amount * multiplier );
	}

	bool operator == ( const Dollar& dollar ) {
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

	Franc times( int multiplier ) {
		return Franc( amount * multiplier );
	}

	bool operator == ( const Franc& franc ) {
		return amount == franc.amount;
	}

private:
	int amount;
};
