int find_number_length(long long value)
{
    int length = 0;
    while(value > 0)
        {
            value /= 10;
            length++;
        }
    return length;
}



//Binary to Decimal
int B_to_D(long long value)
{   
    int binary_num, x, decimal_add, decimal_sum = 0;
    int num_length = find_number_length(value);
    //cout << num_length << endl;

    for(x = 0; x < num_length; x++)
    {
        binary_num = value % 10;
        decimal_add = binary_num * pow(2,x);
        //cout << binary_num << "    ";
        //cout << x << " : ";
        decimal_sum += decimal_add;
        //cout << decimal_add << " --> " << decimal_sum << endl;

        value /= 10;
        value = value - (binary_num/10);
    }

    return decimal_sum;
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

