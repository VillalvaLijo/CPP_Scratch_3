#include <iostream>
#include <cstdlib>

int main()
{
    using namespace std;

    int five = 5;
    int six = 6;
    int i;

    int numbers[12];

    int sum = five + six;

    cout << "five + six = "<<sum<<endl;

    cout<<"MY NAME IS SAM"<<endl;

    // cout<<"Enter some Ints into an array";


    // for (i=0; i<12; i++){
    //     cout<<"Enter an Int into the array: ";
    //     cin >> numbers[i];
    // }
    // cout<< "You entered:"<<endl;

    // for(i=0; i<12; i++){
    //     cout<<numbers[i];

    // }

    // Now to create an array of Names

    char Names[5][20];

    //use a for loop to iterate through the array and load it with names

    // cout<<"Enter some names into this Charecter array:"<<endl;

    // for(int j=0;j<5;j++){
    //     cout<<"Enter in a Name: "; cin>>Names[j];
    // }

    // cout<<"Now we will read all the names you entered back too you!";

    // for(int j=0;j<5;j++){
    //     cout<<Names[j]<<endl;
    // }


    //create an array of ten ints with random numbers asigned as the values
    //seed the random numbers from the computer clock.

    for(i=0;i<12;i++){
        numbers[i] = rand();
        cout << numbers[i]<<endl;
    }

}