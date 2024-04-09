#include<iostream>
using namespace std;

enum enGender
{
    Male,
    Female
};

enum enMaritalStatus
{
    Single,
    Married
};

enum enColor
{
    Red,
    Green,
    Blue,
    White,
    Black,
    Yellow,
    Violet

};

struct stAddress
{
    string AppartmentNo;
    string FloorNo;
    string BuildingNo;
    string StreetName;
    string POBox;
    string ZipCode;
    string City;
    string Country;
    
};

struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};

struct Salary
{
    float MonthlySalary;
    float YearlySalary;
};

struct stPerson
{
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
    enMaritalStatus MaritalStatues;
    enGender Gender;
    enColor FavourateColor;
    Salary Salary;
};


void ReadInfo(stPerson &Person)
{
    cout << "Please Enter the First Name : ";
    cin >>  Person.FirstName;
    cout << "Please Enter the LastName : ";
    cin >> Person.LastName;
    cout << "Please Enter your Personal Email : ";
    cin >> Person.ContactInfo.Email;
    cout << "Please Enter Your Phone Number : ";
    cin >>Person.ContactInfo.Phone;
    cout << "Please Enter Ur  Appartment Number : ";
    cin >> Person.ContactInfo.Address.AppartmentNo;
    cout << "Please Enter Ur  Floor Number : ";
    cin >> Person.ContactInfo.Address.FloorNo;
    cout << "Please Enter Ur  Building Number : ";
    cin >> Person.ContactInfo.Address.BuildingNo;
    cout << "Please Enter Ur  Street Number : ";
    cin >> Person.ContactInfo.Address.StreetName;
    cout << "Please Enter Ur  POST BOX Number : ";
    cin >> Person.ContactInfo.Address.POBox;
    cout << "Please Enter Ur  ZipCode Number : ";
    cin >> Person.ContactInfo.Address.ZipCode;
    cout << "Please Enter Ur  City Name : ";
    cin >> Person.ContactInfo.Address.City;
    cout << "Please Enter Ur  Country Name : ";
    cin >> Person.ContactInfo.Address.Country;   
    //Enums:
    cout << "Please Enter Ur  Gender : ";
    short temp ;
    cin >> temp ;
    Person.Gender == temp;
    temp =0;
    cout << "Please Enter Ur  MaritalStatues : ";
    cin >> temp; 
    Person.MaritalStatues == temp;
    temp = 0 ;
    cout << "Please Enter Ur  Favourate Color : ";
    cin >> temp;
    Person.FavourateColor == temp;
    cout << "Please Enter Ur  Monthly Salary : ";
    cin >> Person.Salary.MonthlySalary;
    Person.Salary.YearlySalary = Person.Salary.MonthlySalary * 12; 

}

void PrintInfo(stPerson Person)
{
    
    cout << "\n************************************************************" << endl;
    cout << "Full Name : " << Person.FirstName << " " << Person.LastName << endl;
    cout << "Email : " << Person.ContactInfo.Email << endl;
    cout << "Phone : " << Person.ContactInfo.Phone << endl;
    cout << "Appartment Number : " << Person.ContactInfo.Address.AppartmentNo <<endl;
    cout << "Floor Number : " << Person.ContactInfo.Address.FloorNo << endl;
    cout << "Building Number : " << Person.ContactInfo.Address.BuildingNo << endl;
    cout << "Streat Name : " << Person.ContactInfo.Address.StreetName << endl;
    cout << "POBox : " << Person.ContactInfo.Address.POBox << endl;
    cout << "ZipCode : " << Person.ContactInfo.Address.ZipCode << endl;
    cout << "City : " << Person.ContactInfo.Address.City << endl;
    cout << "Country : " << Person.ContactInfo.Address.Country << endl;
    cout << "Gender : " << Person.Gender << endl;
    cout << "Marital Statuse : " << Person.MaritalStatues << endl ;
    cout << "Favourate Color : " << Person.FavourateColor << endl;
    cout << "Month Salary : " << Person.Salary.MonthlySalary << endl;
    cout << "Yearly Salary : " << Person.Salary.YearlySalary << endl;
    cout << "************************************************************\n\n";

}

int main()
{
    stPerson Person1;
    ReadInfo(Person1);
    PrintInfo(Person1);
    return 0;
}