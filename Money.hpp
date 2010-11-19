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

	int amount;
};
