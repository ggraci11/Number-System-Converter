int find_number_length(int value)
{
    int length;
    if(value > 0)
    {
        for(length = 0; value > 0; length++)
        {
            value /= 10;
        }
    }
    cout << length;
    return 0;
}



//Binary to Decimal
int B_to_D(int value)
{   
    find_number_length(value);
    return 0;
}


//Binary to Hexadecimal
string B_to_H(int value)
{
    return 0;
}


//Deciaml to Binary
int D_to_B(int value)
{
    return 0;
}


//Decimal to Hexadecimal
string D_to_H(int value)
{
    return 0;
}


//Hexadecimal to Binary
int H_to_B(string value)
{
    return 0;
}


// Hexadecimal to Decimal
int H_to_D(string value)
{
    return 0;
}

