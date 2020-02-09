/* Two variables are created, namely myInt and isBelowThreshold, within the scope of MyLocalFunction.
*/
bool MyLocalFunction(int myInt)
{
	bool isBelowThreshold = myInt < 42 ? true : false;
	return isBelowThreshold;
}

int main()
{
	bool res = MyLocalFunction(23);
	return 0; 
}