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
void B_to_H(long long value)
{
    int binary_num, decimal_add, decimal_sum, index = 0;
    char hexa[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int num_length = find_number_length(value);
    int counter = num_length/4;
    int hex_values[counter] = {0};

    for(int i = counter - 1; i >= 0; i--)
    {
        for(int x = 0; x < 4; x++)
        {
            binary_num = value % 10;
            decimal_add = binary_num * pow(2,x);
            decimal_sum += decimal_add;
            value /= 10;
            value = value - (binary_num/10);
        }
        hex_values[i] = decimal_sum;
        decimal_sum = 0;
    }
    
    for(int i = 0; i < counter; i++)
    {
        cout << hexa[hex_values[i]];
    }

}


//Deciaml to Binary
void D_to_B(int value)
{
    int result = value, counter = 0;
    int remainders[16] = {0};

    for(int i = 0; result != 0; i++)
    {
        if(result % 2 == 0)
        {
            remainders[i] = 0;
        }
        else
        {
            remainders[i] = 1;
        }  
        result /= 2;
        counter++;
    }

    for(int x = counter; x >= 0; x--)
    {
        cout << remainders[x];
    }
}


//Decimal to Hexadecimal
void D_to_H(double value)
{   
    char print_array[10] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
    char hexa_array[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    double result = value, remainder = 0.0;
    int hexa = 0;
    int num_length = find_number_length(value);
    

    for(int i = 0; i < num_length; i++)
    {
        remainder = (result/16.0) - (static_cast<int>(result)/16);
        hexa = remainder * 16;
        result = (result / 16) - remainder;
        print_array[i] = hexa_array[hexa];

    }

    for(int i = num_length - 1; i >= 0; i--)
    {
        cout << print_array[i];
    }
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

