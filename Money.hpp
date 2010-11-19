class Dollar
{
public:

	Dollar( int amount ) {
		this->amount = amount;
	}

	Dollar times( int multiplier ) {
		amount *= multiplier;
		return Dollar( 0 );
	}

	int amount;
};
