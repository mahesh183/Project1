//// EmployeeRecords.cpp : Defines the entry point for the console application.
////
//
//
//// EmployeeeDetails.cpp : Defines the entry point for the console application.
////Employee information 
//
#include "stdafx.h"
#include<iostream>
#include"conio.h"
#include "stdio.h"
using namespace std;
//
//using namespace std;
//bool InputValidationForString(char* abcd);
//int InputValidationForValue();
//
//struct Employee
//{
//	char FirstName[30];
//	char MiddleName[30];
//	char LastName[30];
//	char MotherName[30];
//
//	int EmpId;
//	float fsalary;
//}Obj = { "mahesh","Aurad",11,1200.0 };//imigiate object creation of strucure Employee
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	int NoEmp = 0, id = 1000;
//	struct Employee *eObj;
//	printf("Enter number of emoloyees:\n");
//	while (1)
//	{
//		scanf("%d", &NoEmp);
//		getchar();
//		if ((NoEmp > 0) && (NoEmp < 100))
//		{
//			eObj = (struct Employee *)malloc(NoEmp * sizeof(struct Employee));
//			break;
//		}
//		else
//		{
//			printf("Wrong Input!!ReEnter input as integer between 1 to 100:\n");
//		}
//	}
//
//
//
//	//hardcoded initialization values 
//	/*printf("%s\n", Obj.FirstName);
//	printf("%s\n", Obj.LastName);
//	printf("%d\n", Obj.EmpId);
//	printf("%f\n", Obj.fsalary);*/
//
//
//	//Employee information Accept from user 
//	for (int ii = 0;ii < NoEmp;ii++)
//	{
//		printf("Enter The Details of %d Employee:\n", ii + 1);
//
//		printf("FirstName:\n");
//		cin.getline(eObj[ii].FirstName, 30);
//		printf("\n");
//		char* m_sInputForValidate = eObj[ii].FirstName;
//		bool m_bCheckValidation;
//		
//		do
//		{
//
//			m_bCheckValidation = InputValidationForString(m_sInputForValidate);
//			if (m_bCheckValidation == false)
//			{
//				printf("wrong input!!Enter again:\n");
//				cin.getline(eObj[ii].FirstName, 30);
//			}
//		} while (m_bCheckValidation == false);
//		printf("LastName:\n");
//		cin.getline(eObj[ii].LastName, 30);
//		printf("\n");
//
//		char* m_sInputForValidate1 = eObj[ii].LastName;
//
//		do
//		{
//
//			m_bCheckValidation = InputValidationForString(m_sInputForValidate1);
//			if (m_bCheckValidation == false)
//			{
//				printf("wrong input!!Enter again:\n");
//				cin.getline(eObj[ii].LastName, 30);
//			}
//		} while (m_bCheckValidation == false);
//
//		/*getchar();*/
//
//
//
//
//		//scanf_s("%d\n", &eObj.EmpId);
//
//		printf("EmpSalary:\n");
//		//cin >> eObj[ii].fsalary;
//		int m_fInputSalary;
//		 
//		m_fInputSalary = InputValidationForValue();
//		eObj[ii].fsalary = m_fInputSalary;
//		getchar();
//		//scanf_s("%f\n", &eObj.fsalary);
//
//
//	}
//	printf("\t\t\tEntered details of Employee\n\n");
//	cout << "FirstName";
//	cout << "\tLastName";
//
//	printf("\tId\t\t\t");
//	printf("\tSalary\t\n");
//	printf("-----------------------------------------------------------------------------------------------\n");
//
//	for (int ii = 0;ii < NoEmp;ii++)					
//	{
//		/*printf("\nEntered details of %d Employee:\n", ii + 1);*/
//		//printf("-----------------------------------------------------------------------------------------------\n");
//		cout <<eObj[ii].FirstName;
//		cout << "\t\t" << eObj[ii].LastName;
//
//		printf("\t\t%d\t\t", id++);
//		printf("\t\t%0.2f\n", eObj[ii].fsalary);
//	}
//	printf("-----------------------------------------------------------------------------------------------\n");
//
//	_getch();
//	return 0;
//}
//bool InputValidationForString(char* m_sInputForValidate)
//{
//
//	int i;
//	int found_letter = 0;
//	int len = strlen(m_sInputForValidate);
//
//	for (i = 0; i < len; i++)
//	{
//		if (((m_sInputForValidate[i] >= 'A') && (m_sInputForValidate[i] <= 'Z')) || ((m_sInputForValidate[i] >= 'a') && (m_sInputForValidate[i] <= 'z')))
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	//if (found_letter) // value 0 means false, any other value means true
//	//	return true;
//	//else
//	//	return false;
//}
//int InputValidationForValue()
//{
//	int fsalary = 0.0;
//
//	do
//	{
//		/*scanf_s("%f\n", &fsalary);*/
//		cin >> fsalary;
//		printf("\n");
//
//		if (fsalary < 0)
//		{
//			printf("Wrong Input!!ReEnter the Input:\n");
//		}
//
//	}while (fsalary < 0);
//
//	
//	return fsalary;
//}
//
//
struct Employee
{
	char sex;
	char c_FirstName[30];
	char c_MiddleName[30];
	char c_LastName[30];
	char c_MotherName[30];
	char c_MobileNumber[12];
	char c_BloodGroup[3];
	char c_PanCardNumber[13];
	char c_AccountNumber[15];
	int EmpId;
	int i_salary;

};
void AddDetail(Employee* eObj, int);
int DeleteDetail(Employee* eObj, int, int);
void DisplayRecordsOfEmployee(Employee* eObj, int);
void SearchRecord(Employee* eObj, int, int);
void UpdateRecord(Employee* eObj, int, int);

int main()
{
	int i_choice = 0;
	int i_count = 4;
	int i_Search = 0;
	//int *ptr = NULL;

	//Hardcoded information of Employees
	struct Employee eObj[10] = { { 'm',"mahesh","Chidanand","Aurad","Kamala","9156059591","A+",
					"jadf2323","BOI-12121",1001,1200.0 },
				{ 'm',"Raj","Chidanand","Aurad","Kamala","91589059591","A+",
					"jadf2323","BOI-12121",1002,1200.0 },
				{ 'm',"mahesh","Chidanand","Aurad","Kamala","9156059591","A+",
					"jadf2323","BOI-12121",1003,1200.0 }, 
				{ 'm',"kalpesh","Chidanand","Aurad","Kamala","9156059591","A+",
					"jadf2323","BOI-12121",1004,1200.0 }, };


	printf("\n\n\t\tEMPLOYEE RECORDS SYSTEM:\n");
	do
	{
		printf("\nEnter the Below Choice:\n");
		printf("1.Add Records\n2.Display Records\n3.Search Records\n4.Update Records\n5.Delete Records\n6.Exit\n");
		scanf("%d", &i_choice);

		switch (i_choice)
		{
		case 1:
			printf("\t\tAdd details Of Employee\n");
			//i_count++;
			AddDetail(eObj, i_count);
			//eObj[i_count].EmpID++;
			i_count++;	//index of array is incrementing by one after the adding one record
			break;

		case 2:
			printf("Display Records\n");
			DisplayRecordsOfEmployee(eObj, i_count);
			break;

		case 3:
			printf("\nSearch Records");
			cout << "\n\nEnter EmpID which u want to search :";
			cin >> i_Search;
			SearchRecord(eObj, i_count, i_Search);

			break;

		case 4:
			printf("Update Records:\n");

			cout << "\n\nEnter EmpID which u want to update :";
			cin >> i_Search;
			UpdateRecord(eObj, i_count, i_Search);
			break;

		case 5:
			printf("delete Records:\n");
			cout << "\n\nEnter EmpID which u want to delete :";
			cin >> i_Search;
			i_count=DeleteDetail(eObj, i_count, i_Search);
			break;

		case 6:
			printf("Exit:\n");
			break;

		}
	} while ((i_choice >= 1) && (i_choice < 6));

	return 0;

}
void AddDetail(Employee* eObj,int ii)
{
	cout << "\nEnter Employee Details:\n\n";
	
		eObj[ii].EmpId = 1001 + ii;
		cout << "\n\nFirst Name :";
		cin >> eObj[ii].c_FirstName;

		cout << "\nMiddle Name: ";
		cin >> eObj[ii].c_MiddleName;

		cout << "\nLast Name: ";
		cin >> eObj[ii].c_LastName;

		cout << "\nMother Name: ";
		cin >> eObj[ii].c_MotherName;
		
		cout << "\nSex : ";
		cin >> eObj[ii].sex;

		cout << "\nMobile Number: ";
		cin >> eObj[ii].c_MobileNumber;

		cout << "\nPAN Card Number: ";
		cin >> eObj[ii].c_PanCardNumber;

		cout << "\nAccount Number: ";
		cin >> eObj[ii].c_AccountNumber;


		cout << "\nBlood Group: ";
		cin >> eObj[ii].c_BloodGroup;

		cout << "\nSalary: ";
		cin >> eObj[ii].i_salary;
	
		//*iptr++;
}


void DisplayRecordsOfEmployee(Employee* eObj, int icnt)
{
	cout << "\t\t\t\tDetails Of Employee:\n\n";


	cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	cout << "\nEmpId";

	cout << "\tFirst Name";

	cout << " Middle Name";

	cout << "\tLast Name";

	cout << "\tMother Name";

	cout << "\tSex ";

	cout << "\tMo.NO";

	cout << "\tPAN Number ";

	cout << "\tAC Number ";

	cout << "\tBlood Group ";

	cout << "\tSalary ";

	cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	for (int ii = 0; ii < icnt; ii++)
	{
		
		cout << "\n" << eObj[ii].EmpId;

		cout << "\t" << eObj[ii].c_FirstName;
		cout << "\t" << eObj[ii].c_MiddleName;
		cout << "\t" << eObj[ii].c_LastName;
		cout << "\t" << eObj[ii].c_MotherName;
		cout << "\t" << eObj[ii].sex;
		cout << "\t" << eObj[ii].c_MobileNumber;
		cout << "\t" << eObj[ii].c_PanCardNumber;
		cout << "\t" << eObj[ii].c_AccountNumber;
		cout << "\t" << eObj[ii].c_BloodGroup;
		cout << "\t" << eObj[ii].i_salary;
		
	}
	cout << "\n";
	cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	printf("\n");
}
// Delete existing Data
int DeleteDetail(Employee* eObj, int iSize, int iSearch)
{
		int iFlag = 0; // to show data found (1) or not (0)
	for (int ii = 0; ii < iSize; ii++)
	{
		if (eObj[ii].EmpId == iSearch)
		{
			for (int jj = ii; jj < iSize; jj++)
			{
				eObj[jj] = eObj[jj + 1];
			}
			iFlag++;
			cout << "\nData Deleted";
			iSize--;
			return iSize;
			break;
		}
	}
	if (iFlag == 0)
	{
		cout << "Data not Found!";
		return iSize;
	}
}
void SearchRecord(Employee* eObj, int iSize, int iSearch)
{
	int iFlag = 0; // to show data found (1) or not (0)
	for (int ii = 0; ii < iSize; ii++)
	{
		if (eObj[ii].EmpId == iSearch)
		{
			iFlag++;
			cout << "\nData Found";
			break;
		}
	}
	if (iFlag == 0)
	{
		cout << "Data not Found!";
	}
}
void UpdateRecord(Employee* eObj, int iSize, int iSearch)
{
	int iFlag = -1; // to show data found (other than -1) or not (-1)
	int ii = 0, iField = 0;
	char cValue = '\0';
	for (ii = 0; ii < iSize; ii++)
	{
		if (eObj[ii].EmpId == iSearch)
		{
			cout << "Data Found!";
			iFlag = ii;
			break;
		}
	}
	ii = iFlag;
	if (iFlag == -1)
	{
		cout << "\nData not Found!";
		return;
	}
	cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	cout << "\nEmpId";

	cout << "\tFirst Name";

	cout << "\tMiddle Name";

	cout << "\tLast Name";

	cout << "\tMother Name";

	cout << "\tSex ";

	cout << "\tMobile Number";

	cout << "\tPAN Card Number ";

	cout << "\tAccount Number ";

	cout << "\tBlood Group ";

	cout << "\tSalary ";

	cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------";

	cout << "\n" << eObj[ii].EmpId;

		cout << "\t" << eObj[ii].c_FirstName;
		cout << "\t" << eObj[ii].c_MiddleName;
		cout << "\t" << eObj[ii].c_LastName;
		cout << "\t" << eObj[ii].c_MotherName;
		cout << "\t" << eObj[ii].sex;
		cout << "\t" << eObj[ii].c_MobileNumber;
		cout << "\t" << eObj[ii].c_PanCardNumber;
		cout << "\t" << eObj[ii].c_AccountNumber;
		cout << "\t" << eObj[ii].c_BloodGroup;
		cout << "\t" << eObj[ii].i_salary;

	
	cout << "\n";
	cout << "\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	printf("\n");

	do
	{
		cout << "\n\n Which Field you want to update : ";

		cout << "\n1.First Name";

		cout << "\n2.Middle Name";

		cout << "\n3.Last Name";

		cout << "\n4.Mother Name";

		cout << "\n5.Sex ";

		cout << "\n6.Mobile Number";

		cout << "\n7.PAN Card Number ";

		cout << "\n8.Account Number ";

		cout << "\n9.Blood Group ";

		cout << "\n10.Salary ";
		cin >> iField;
		switch (iField)
		{
		case 1:
			cout << "\n\nFirst Name :";
			cin >> eObj[ii].c_FirstName;

			break;
		case 2:
			cout << "\nMiddle Name: ";
			cin >> eObj[ii].c_MiddleName;
			break;
		case 3:
			cout << "\nLast Name: ";
			cin >> eObj[ii].c_LastName;
			break;
		case 4:
			cout << "\nMother Name: ";
			cin >> eObj[ii].c_MotherName;
			break;
		case 5:

			cout << "\nSex : ";
			cin >> eObj[ii].sex;
			break;
		case 6:

			cout << "\nMobile Number: ";
			cin >> eObj[ii].c_MobileNumber;
			break;
		case 7:

			cout << "\nPAN Card Number: ";
			cin >> eObj[ii].c_PanCardNumber;

			break;
		case 8:
			cout << "\nAccount Number: ";
			cin >> eObj[ii].c_AccountNumber;

			break;
		case 9:

			cout << "\nBlood Group: ";
			cin >> eObj[ii].c_BloodGroup;

			break;
		case 10:
			cout << "\nSalary: ";
			cin >> eObj[ii].i_salary;

		default:
			cout << "Wrong Input !" << endl;
		}
		cout << "\n\nDo you want to update another field (Y/N):";
		cin >> cValue;
	} while (cValue == 'Y' || cValue == 'y');
}