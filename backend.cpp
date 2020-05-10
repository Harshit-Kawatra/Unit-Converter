#include<iostream>
#include<stdlib.h>
using namespace std;

class conversion
{
public:
    float yard,m;
    float pound,kg;
    float gallon,liter=0;

    void convert_yard_to_metre();
    void convert_pound_to_kg();
    void convert_gallon_to_liter();
};
void conversion::convert_yard_to_metre()
{
    m=yard/(1.0936);
    cout<<"\n DISTANCE IN METERS"<<m;

}

void conversion::convert_pound_to_kg()
{
    kg=pound/2.2046;
    cout<<"WEIGHT IN KG: "<<kg;
}
void conversion::convert_gallon_to_liter()
{
    liter=gallon*3.79; // convert to liters
    cout<<"Liters ="<<liter ;
}
main()
{
    conversion c;
    char a;
    int x;
    do{
        system("cls");
        cout<<"**************\tUNIT CONVERTER\t***************";
        cout<<"\n1.YARD TO METRE"<<endl;
        cout<<"\n2.POUND TO KG"<<endl;
        cout<<"\n3.GALLONS TO LITRES"<<endl;
        cin>>x;
        switch(x)
        {
        case 1:
            {
                cout<<"Enter the distance in yards";
                cin>>c.yard;
                c.convert_yard_to_metre();
                break;
            }
        case 2:
            {
                cout<<"Enter the weight in pounds";
                cin>>c.pound;
                c.convert_pound_to_kg();
                break;
            }
        case 3:
            {
                cout<<"Enter the amount in gallons";
                cin>>c.gallon;
                c.convert_gallon_to_liter();
                break;
            }
        default:
            {
                cout<<"Wrong option";
            }
        }
        cout<<"\nDo you want to continue";
        cin>>a;
    }while(a=='y'||a=='Y');
}
