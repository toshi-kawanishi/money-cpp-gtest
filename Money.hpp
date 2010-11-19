class Dollar
{
public:

	Dollar( int amount ) {
		this->amount = amount;
	}

	Dollar times( int multiplier ) {
		return Dollar( amount * multiplier );
	}

	int amount;
};
