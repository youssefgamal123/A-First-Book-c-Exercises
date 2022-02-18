void change(int parameter, int& hundreds, int& fifties, int& twenties, int& tens, int& fives, int& ones)
{                    // start of function body

	hundreds = parameter / 100;
	parameter %= 100;
	fifties = parameter / 50;
	parameter %= 50;
	twenties = parameter / 20;
	parameter %= 20;
	tens = parameter / 10;
	parameter %= 10;
	fives = parameter / 5;
	parameter %= 5;
	ones = parameter;

		return;            // return statement
}
