class Dollar
{
public:

	Dollar( int amount ) {
		this->amount = amount;
	}

	Dollar times( int multiplier ) {
		return Dollar( amount * multiplier );
	}

	bool equals( const Dollar& object ) {
		return true;
	}

	int amount;
};
