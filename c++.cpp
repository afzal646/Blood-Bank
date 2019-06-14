#include <iostream>
#include <string>
using namespace std;
class Blood_Bank
		{
public:
		virtual void A_Positive()=0;
		virtual void B_Positive()=0;
		virtual  void AB_Positive()=0;
		virtual  void O_Positive()=0;
		virtual  void A_Negative()=0;
		virtual  void B_Negative()=0;
		virtual void AB_Negative()=0;
		virtual  void O_Negative()=0;
		};
class Blood_Bank2 : public Blood_Bank
	{
public:
	void O_Positive()
	{
		cout << "\n\n Name: Usama Ashraf" << "\n Blood Group: O+" << "\n Phone Number: 03066549287";
		cout << "\n Address: Main Stop Jalalpur Jattan";
		cout << "\n\n Name: Qasim Javed" << "\n Blood Group: O+" << "\n Phone Number: 03495030331";
		cout << "\n Address: Sarai-e-Alamgir Near Government Boys High School";
		cout << "\n\n Name: Muhammad Ali Zain" << "\n Blood Group: O+" << "\n Phone Number: 03002233444";
		cout << "\n Address: Mirpur Khass";
	}
	void O_Negative()
	{
		cout << "\n\n Name: Abdul-Qayyum" << "\n Blood Group: O-" << "\n Phone Number: 03055644646";
		cout << "\n Address: Askari-11 Cantt Area Rawalpindi";
		cout << "\n\n Name: Habib Shoaib" << "\n Blood Group: O-" << "\n Phone Number: 03043126333";
		cout << "\n Address: Pirwadhai Morr Rawalpindi";
	}
	void A_Positive()
	{
		cout << "\n\n Name: Shahzaib Ansar" << "\n Blood Group: A+ \n" << "Phone Number: 03364519256";
		cout << "\n Address: Daulat Nagar Gujrat";
		cout << "\n\n Name: Ayaz Munir" << "\n Blood Group: A+ \n" << "Phone number: 03221524316";
		cout << "\n Address: 14-D Block F-8 Markaz Islamabad";
		cout << "\n\n Name: Ali Hassan" << "\n Blood Group: A+ \n" << "Phone Number: 03060050537";
		cout << "\n Address: Wah-Cantt Basti Wah-Cantt";
		cout << "\n\n Name: Muhammad Afzal" << "\n Blood Group: A+ \n" << "Phone Number: 03126203819";
		cout << "\n Address: House# 20 Street 12 Muhallah Joharabad Jehlum";
	}
	void A_Negative()
		{
			cout << "\n\n Name: Muhammad Ali" << "\n Blood Group: A- \n" << "Phone Number: 03004536625";
			cout << "\n Address: Gts Chowk Gujrat";
			cout << "\n\n Name: Yaseen Raza" << "\n Blood Group: A- \n" << "Phone Number: 03456523110";
			cout << "\n Address: House# 30 Gali# 2 Muhallah Jatowakkal Gujrat";
			cout << "\n\n Name: Imran Butt" << "\n Blood Group: A- \n" << "Phone Number: 03321213158";
			cout << "\n Address: Gujranwala Near Pindi By-Pass";
		}
	void B_Positive()
		{
			cout << "\n\n Name: Waqas" << "\n Blood Group: B+ \n" << "Phone Number: 03217028631";
			cout << "\n Address: Shahdara Lahore Near Ravi Pul";
			cout << "\n\n Name: Syed Umair" << "\n Blood Group: B+ \n" << "Phone Number: 03352031140";
			cout << "\n Address: House# 21 Street# 2 Bahria Town Islamabad";
			cout << "\n\n Name: Mahmood Khan" << "\n Blood Group: B+ \n" << "Phone Number: 03155030600";
			cout << "\n Address: Near Domeli Morr";
			cout << "\n\n Name: Nadeem Ali" << "\n Blood Group: B+ \n" << "Phone Number: 03332131220";
			cout << "\n Address: F-10 Markaz";
		}
	void B_Negative()
		{
			cout << "\n\n Name: Ilyas Qadri" << "\n Blood Group: B-" << "\n Phone Number: 03006280309";
			cout << "\n Address: Kharian Cantt";
			cout << "\n\n Name: Noor Shafiq" << "\n Blood Group: B-" << "\n Phone Number: 03407523010";
			cout << "\n Address: Service Morr Gujrat";
			cout << "\n\n Name: Abdul-Qadir" << "\n Blood Group: B-" << "\n Phone Number: 03309080123";
			cout << "\n Address: Main Stop Kotla Arab Ali Khan";
		}
	void AB_Positive()
		{
			cout << "\n\n Name: Bilal Nasir" << "\n Blood Group: AB+" << "\n Phone Number: 03253645937";
			cout << "\n Address: Mohallah Jatowakkal Gujrat";
			cout << "\n\n Name: Ali Arif" << "\n Blood Group: AB+" << "\n Phone Number: 03372839456";
			cout << "\n Shahdara Lahore Near Sangeet Cinema Hall";
			cout << "\n\n Name: Hassan Umar" << "\n Blood Group: AB+" << "\n Phone Number: 03411215678";
			cout << "\n Address: Main Stop Kotla Arab Ali Khan";
		}
	void AB_Negative()
		{
			cout << "\n\n Name: Abdullah Ahmed" << "\n Blood Group: AB-" << "\n Phone Number: 03203712620";
			cout << "\n Address: Near Faizabad Bus Stand Rawalpindi";
			cout << "\n\n Name: Adnan Siddique" << "\n Blood Group: AB-" << "\n Phone Number: 03021523450";
			cout << "\n Address: G-8 Markaz Islamabad";
			cout << "\n\n Name: Abdul-Aleem Khan" << "\n Blood Group: AB-" << "\n Phone Number: 03016549873";
			cout << "\n Address: F-8 Markaz Islamabad";
			cout << "\n\n Name: Ali Nasir" << "\n Blood Group: AB-" << "\n Phone Number: 03126548925";
			cout << "\n Address: House# 1 Street 6 F-8 Markaz";
		}
	};
int main()
	{
		Blood_Bank* blood;			string choice;
		cout << "Please enter the blood group you require: ";
		cin >> choice;
		cout << endl;
		system("cls");
		if(choice=="A+" || choice=="A-" || choice=="O+" || choice=="O-" || choice=="AB+" || choice=="AB-" || choice=="B+" || choice=="B-")
			{
				cout << "These persons are available for donating blood\n\n";
				blood= new  Blood_Bank2;
				if(choice=="A+")
				blood->A_Positive();
				else if(choice=="A-")
				blood->A_Negative();
				else if(choice=="O+")
				blood->O_Positive();
				else if(choice=="O-")
				blood->O_Negative();
				if(choice=="B+")
				blood->B_Positive();
				else if(choice=="B-")
				blood->B_Negative();
				else if(choice=="AB+")
				blood->AB_Positive();
				else if(choice=="AB-")
				blood->AB_Negative();
				cout << "\n\nThese persons can also donate blood\n\n";
				blood->O_Negative();
								
		}

	return 10;
	}
