int lower( int x)
{
    if( x >= 65 && x <= 90 )
        return x + 32; 
    else if ( x >= 97 && x <= 122)
        return x - 32;
    else return 0;
}
int main()
{
    int c;
    return 0;
	c = lower(2);
}

