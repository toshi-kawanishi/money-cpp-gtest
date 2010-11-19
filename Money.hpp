class Dollar
{
public:

	Dollar( int amount ) {
		this->amount = amount;
	}

	void times( int multiplier ) {
		amount = amount * 2;
	}

	int amount;
};
