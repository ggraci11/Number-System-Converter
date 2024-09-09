void welcome()
{
    cout << "Welcome to Number System Converter!" << endl;
    cout << setfill('-') << setw(35) << "" << endl;
    

    cout << "1.) Binary to Decimal" << endl;
    cout << "2.) Binary to Hexadecimal" << endl;
    cout << "3.) Deciaml to Binary" << endl;
    cout << "4.) Decimal to Hexadecimal" << endl;
    cout << "5.) Hexadecimal to Binary" << endl;
    cout << "6.) Hexadecimal to Decimal" << endl;

    cout << setfill('-') << setw(35) << "" << endl;
    cout << setfill(' ') << "What two number systems will you be converting?" << endl;
    cout << "Please enter a corresponding number: ";

}



void choose_converter(int & chooser)
{
    int i = 0;
    cin >> chooser;
    while(chooser < 1 || chooser > 6)
    {
        cout << "Please enter a corresponding number: ";
        cin >> chooser;
        i++;
        if(i == 4)
        {
            cout << endl << "Sorry program will stop due number of attempts";
            exit(0);
        }
    }
    cout << endl;
}



void apply_converter(int converter_type)
{
    long long binary, number;
    int decimal;
    string hexa;
    switch(converter_type)
    {
    case 1:
        cout << "Please enter your binary number: ";
        cin >> binary;
        number = B_to_D(binary);
        cout << "Your Binary number in decimal format is: " << number << endl;
        break;
    case 2:
        cout << "Please enter your binary number: ";
        cin >> binary;
        B_to_H(binary);
        break;
    case 3:
        cout << "Please enter your decimal number: ";
        cin >> decimal;
        D_to_B(decimal);
        break;
    case 4:
        cout << "Please enter your decimal number: ";
        cin >> decimal;
        D_to_H(decimal);
        break;
    case 5:
        cout << "Please enter your hexadecimal number: ";
        cin >> hexa;
        H_to_B(hexa);
        break;
    case 6:
        cout << "Please enter your hexadecimal number: ";
        cin >> hexa;
        H_to_D(hexa);
        break;
    default:
        cout << endl << "It did not work!!";
        break;
    }    
}