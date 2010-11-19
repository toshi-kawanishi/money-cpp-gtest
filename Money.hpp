class Dollar
{
public:

	Dollar( int amount ) {
		this->amount = amount;
	}

	void times( int multiplier ) {
		amount *= multiplier;
	}

	int amount;
};
