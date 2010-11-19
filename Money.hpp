class Dollar
{
public:

	Dollar( int amount ) {
		this->amount = amount;
	}

	Dollar times( int multiplier ) {
		return Dollar( amount * multiplier );
	}

	bool equals( const Dollar& doller ) {
		return amount == doller.amount;
	}

	bool operator == ( const Dollar& dollar ) {
		return amount == dollar.amount;
	}

	int amount;
};
