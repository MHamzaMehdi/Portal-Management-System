#include<iostream>
#include<string>
using namespace std;

class Person // Base Class.....................
{
protected:
	string personName, personID;  // Three Attributes of class Person..................
	int personAge;
public:
	// Default Constructor..................
	Person()
	{
		personName = "";
		personID = "";
		personAge = 0;
	}
	// Three Parameterized Constructor......................
	Person(string personName, string personID, int personAge)
	{
		this->personName = personName;
		this->personID = personID;
		this->personAge = personAge;
	}
	// Setters............................
	void setName()
	{
		cout << "Enter Name of Person :" << endl;
		getline(cin, personName);
	}
	void setID()
	{
		cout << "Enter ID :" << endl;
		getline(cin, personID);
	}
	void setAge()
	{
		cout << "Enter Age :" << endl;
		cin >> personAge;
	}
	// Getters...........................
	string getName()
	{
		return personName;
	}
	string getID()
	{
		return personID;
	}
	int getAge()
	{
		return personAge;
	}
	// Displaying All Data.....................
	virtual void Display() // Making Virtual Function...................
	{
		cout << "\n-------------------Displaying Person Data-------------------" << endl;
		cout << "\n\tName of Person is : " << personName << endl;
		cout << "\tID of Person is : " << personID << endl;
		cout << "\tAge of Person is : " << personAge << endl;
	}
};
// Person Class End...........................
class Staff : public Person // Derived Staff Class From Person Class..............
{
protected:
	string staffDesignation, staffSalary;  // Two Attributes of class Staff..................
public:
	// Default Constructor..................
	Staff()
	{
		staffDesignation = "";
		staffSalary = "";
	}
	// Two Parameterized Constructor......................
	Staff(string staffDesignation, string staffSalary)
	{
		this->staffDesignation = staffDesignation;
		this->staffSalary = staffSalary;
	}
	// Setters............................
	void setDesignation()
	{
		cout << "Enter Designation :" << endl;
		getline(cin, staffDesignation);
	}
	void setSalary()
	{
		cout << "Enter Salary :" << endl;
		getline(cin, staffSalary);
	}
	// Getters...............................
	string getDesignation()
	{
		return staffDesignation;
	}
	string getSalary()
	{
		return staffSalary;
	}
	// Displaying All Data.....................
	void Display()
	{
		cout << "\n------------------Displaying Staff Data-------------------" << endl;
		cout << "\n\tDesignation is : " << staffDesignation << endl;
		cout << "\tSalary is : " << staffSalary << endl;
	}
};
// Staff Class End.............................
class TeachingStaff : public Staff // Derived TeachingStaff Class From Staff Class....................
{
protected:
	string teachStaffDepartment, teachStaffCourses, teachStaffStudents; // Three Attributes of class Person..................
public:
	// Default Constructor..................
	TeachingStaff()
	{
		teachStaffDepartment = "";
		teachStaffCourses = "";
		teachStaffStudents = "";
	}
	// Three Parameterized Constructor......................
	TeachingStaff(string teachStaffDepartment, string teachStaffCourses, string teachStaffStudents)
	{
		this->teachStaffDepartment = teachStaffDepartment;
		this->teachStaffCourses = teachStaffCourses;
		this->teachStaffStudents = teachStaffStudents;
	}
	// Setters............................
	void setDepartment()
	{
		cout << "Enter Department Name :" << endl;
		getline(cin, teachStaffDepartment);
	}
	void setCourses()
	{
		cout << "Enter Courses(course teaching) :" << endl;
		getline(cin, teachStaffCourses);
	}
	void setStudents()
	{
		cout << "Enter Students(the one teacher is currently teaching) :" << endl;
		getline(cin, teachStaffStudents);
	}
	// Getters...............................
	string getDepartment()
	{
		return teachStaffDepartment;
	}
	string getCourses()
	{
		return teachStaffCourses;
	}
	string getStudents()
	{
		return teachStaffStudents;
	}
	// Displaying All Data.....................
	void Display()
	{
		cout << "\n-------------------Displaying TeachingStaff Data-------------------" << endl;
		cout << "\n\tName of Department is : " << teachStaffDepartment << endl;
		cout << "\tName of Courses are : " << teachStaffCourses << endl;
		cout << "\tName of Students are : " << teachStaffStudents << endl;
	}
};
// TeachingStaff Class End.....................
class Non_TeachingStaff : public Staff // Derived Non-TeachingStaff Class From Staff Class.................
{
protected:
	string officeAddress, officeTiming; // Two Attributes of class Person..................officeTiming;
public:
	// Default Constructor......................
	Non_TeachingStaff()
	{
		officeAddress = "";
		officeTiming = "";
	}
	// Two Parameterized Constructor......................
	Non_TeachingStaff(string officeAddress, string officeTiming)
	{
		this->officeAddress = officeAddress;
		this->officeTiming = officeTiming;
	}
	// Setters............................
	void setOfficeAddress()
	{
		cout << "Enter Office Address :" << endl;
		getline(cin, officeAddress);
	}
	void setOfficeTiming()
	{
		getline(cin, officeTiming);
	}
	// Getters...............................
	string getOfficeAddress()
	{
		return officeAddress;
	}
	string getOfficeTiming()
	{
		return officeTiming;
	}
	// Displaying All Data.....................
	void Display()
	{
		cout << "\n------------------Displaying Non-TeachingStaff Data-------------------" << endl;
		cout << "\n\tThe Office Address is : " << officeAddress << endl;
		cout << "\tThe Office Timing is : " << officeTiming << endl;
	}
};
// Non-TeachingStaff Class End........................
class Students : public Person // Derived Students Class From Person Class..........
{
protected:
	string StudProgramName;  // Two Attributes of Class Students........................
	float CGPA;
public:
	// Default Constructor......................
	Students()
	{
		StudProgramName = "";
		CGPA = 0.0;
	}
	// Two Parameterized Constructor......................
	Students(string StudprogramName, float CGPA)
	{
		this->StudProgramName = StudprogramName;
		this->CGPA = CGPA;
	}
	// Setters............................
	void setProgramName()
	{
		cout << "Enter Program Name of Student :" << endl;
		getline(cin, StudProgramName);
	}
	void setCGPA()
	{
		cout << "Enter CGPA of Student :" << endl;
		cin >> CGPA;
	}
	// Getters...............................
	string getProgramName()
	{
		return StudProgramName;
	}
	float getCGPA()
	{
		return CGPA;
	}
	// Displaying All Data.....................
	void Display()
	{
		cout << "\n------------------Displaying Students Data-------------------" << endl;
		cout << "\n\tThe Program Name of Student is : " << StudProgramName << endl;
		cout << "\tThe CGPA of Student is : " << CGPA << endl;
	}
};
// Students Class End..............................
class Department : public Students
{
protected:
	string departmentName, departmentProgram;  // Two Attributes of Class Department.......................
public:
	// Default Constructor......................
	Department()
	{
		departmentName = "";
		departmentProgram = "";
	}
	// Two Parameterized Constructor........................
	Department(string departmentName, string departmentProgram)
	{
		this->departmentName = departmentName;
		this->departmentProgram = departmentProgram;
	}
	// Setters............................
	void setName()
	{
		cout << "Enter Name of Department :" << endl;
		getline(cin, departmentName);
	}
	void setProgram()
	{
		cout << "Enter Program of Depatment :" << endl;
		getline(cin, departmentProgram);
	}
	// Getters...............................
	string getName()
	{
		return departmentName;
	}
	string getProgram()
	{
		return departmentProgram;
	}
	// Displaying All Data.....................
	void Display()
	{
		cout << "\n------------------Displaying Department Data-------------------" << endl;
		cout << "\n\tThe Name of Department is : " << departmentName << endl;
		cout << "\tThe Program of Depatment is : " << departmentProgram << endl;
	}
};
// Department Class End....................................
class Program : public Department
{
protected:
	string programName, Department, Course;  // Two Attributes of Class Program........................
public:
	// Default Constructor......................
	Program()
	{
		programName = "";
		Department = "";
		Course = "";
	}
	// Three Parameterized Constructor........................
	Program(string programName, string Department, string Course)
	{
		this->programName = programName;
		this->Department = Department;
		this->Course = Course;
	}
	// Setters............................
	void setName()
	{
		cout << "Enter Name of The Program :" << endl;
		getline(cin, programName);
	}
	void setDepartment()
	{
		cout << "Enter Department Name of The Program :" << endl;
		getline(cin, Department);
	}
	void setCourse()
	{
		cout << "Enter Course of The Program :" << endl;
		getline(cin, Course);
	}
	// Getters...............................
	string getName()
	{
		return programName;
	}
	string getDepartment()
	{
		return Department;
	}
	string getCourse()
	{
		return Course;
	}
	// Displaying All Data.....................
	void Display()
	{
		cout << "\n------------------Displaying Program Data-------------------" << endl;
		cout << "\n\tName of The Program is : " << programName << endl;
		cout << "\tDepartment Name of The Program is : " << Department << endl;
		cout << "\tCourse of The Program is : " << Course << endl;
	}
};
// Program Class End.........
class Course : public Program
{
protected:
	string CourseTitle, courseProgramName, Prerequisite; // Four Attributes of Class Course.....................
	int CreditHours;
public:
	// Default Constructor......................
	Course()
	{
		CourseTitle = "";
		courseProgramName = "";
		Prerequisite = "";
		CreditHours = 0;
	}
	// Four Parameterized Constructor........................
	Course(string CourseTitle, string courseProgramName, string Prerequisite, int CreditHours)
	{
		this->CourseTitle = CourseTitle;
		this->courseProgramName = courseProgramName;
		this->Prerequisite = Prerequisite;
		this->CreditHours = CreditHours;
	}
	// Setters............................
	void setCourseTitle()
	{
		cout << "Enter Course Title :" << endl;
		getline(cin, CourseTitle);
	}
	void setprogramName()
	{
		cout << "Enter Prgram Name :" << endl;
		getline(cin, courseProgramName);
	}
	void setPrerequisite()
	{
		cout << "Enter Prerequisite :" << endl;
		getline(cin, Prerequisite);
	}
	void setCreditHours()
	{
		cout << "Enter Credit Hours :" << endl;
		cin >> CreditHours;
	}
	// Getters...............................
	string getCourseTitle()
	{
		return CourseTitle;
	}
	string getprogramName()
	{
		return courseProgramName;
	}
	string getPrerequisite()
	{
		return Prerequisite;
	}
	int getCreditHours()
	{
		return CreditHours;
	}
	// Displaying All Data.....................
	void Display()
	{
		cout << "\n-------------------Displaying Courses Data-------------------" << endl;
		cout << "\n\tThe Course Title is : " << CourseTitle << endl;
		cout << "\tThe Program Name is : " << courseProgramName << endl;
		cout << "\tThe Prerequisite is : " << Prerequisite << endl;
		cout << "\tThe Credit Hours are : " << CreditHours << endl;
	}
};
// Course Class End....................................
int main() // Main Function......................
{
	// Declaire Data Members.......................
	string personName, personID, staffDesignation, staffSalary, teachStaffDepartment, teachStaffCourses, teachStaffStudents, officeAddress, officeTiming;
	string StudprogramName, courseTitle, courseProgramName, Prerequisite, departmentProgram, departmentName, programName, Name, department, course;
	int personAge, creditHours = 0, option;
	float CGPA = 0.0;
	char Choice = 0;
	/////////////////////////////////  M  E  N  U  E  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  
	cout << "************************************************************************************************************************" << endl;
	cout << "\n\n\t\t\t\tW E L C O M E   T O   M Y   P R O J E C T" << endl;
	cout << "\t\t\t\t*****************************************" << endl;
	cout << "\n\t(-------C A P I T A L   U N I V E R S I T Y   O F   S C I E N C E   A N D   T E C H N O L O G Y-------)" << endl;
	cout << "\t\t***************************************************************************************" << endl;
	cout << "\n)-----Group  Member  Names-----(" << endl;
	cout << "\nSerial#.\tNames" << endl;
	cout << "*******\t\t*****" << endl;
	cout << "\n  01\t\tSaad Mushtaq\n  02\t\tM.Ibrahim Khan" << endl;
	cout << "  03\t\tM.Hamza Mehdi\n  04\t\tFiza Saeed" << endl;
	cout << "\nSubmit To :\n*********\n\t  Mam Bushra Sharif\n\t  *****************" << endl;
	cout << "\n\t\t\t(-------C U S T   M A N A G M E N T   S Y S T E M-------)" << endl;
	cout << "\t\t\t\t*****************************************" << endl;
	cout << "\n************************************************************************************************************************" << endl;
	// Input All Data From User.....................
	do
	{
		cout << "\n\t)---------------Input Data---------------(" << endl;
		cout << "\t\t\t**********" << endl;
		cout << "\nPress 1 to Enter 'Person Class' Data.\nPress 2 to Enter 'Staff Class' Data." << endl;
		cout << "Press 3 to Enter 'TeachingStaff Class' Data.\nPress 4 to Enter 'Non-TeachingStaff Class' Data." << endl;
		cout << "Press 5 to Enter 'Student Class' Data.\nPress 6 to Enter 'Course Class' Data." << endl;
		cout << "Press 7 to Enter 'Department Class Data.\nPress 8 to Enter 'Program Class' Data." << endl;
		cin >> option;
		switch (option) // Using Switch in Do While Loop.............................
		{
		case 1:
		{
			cout << "\nEnter Person Name :" << endl;
			cin.ignore();
			getline(cin, personName);
			cout << "Enter Person ID :" << endl;
			cin.ignore();
			getline(cin, personID);
			cout << "Enter Person Age :" << endl;
			cin >> personAge;
		}
		break;
		case 2:
		{
			cout << "Enter Staff Designation :" << endl;
			cin.ignore();
			getline(cin, staffDesignation);
			cout << "Enter Staff Salary :" << endl;
			getline(cin, staffSalary);
		}
		break;
		case 3:
		{
			cout << "Enter Department :" << endl;
			cin.ignore();
			getline(cin, teachStaffDepartment);
			cout << "Enter Courses :" << endl;
			getline(cin, teachStaffCourses);
			cout << "Enter Student of (The one Teacher is Currently Teaching) :" << endl;
			getline(cin, teachStaffStudents);
		}
		break;
		case 4:
		{
			cout << "Enter Office Address :" << endl;
			cin.ignore();
			getline(cin, officeAddress);
			cout << "Enter Office Timing :" << endl;
			getline(cin, officeTiming);
		}
		break;
		case 5:
		{
			cout << "Enter Program Name :" << endl;
			cin.ignore();
			getline(cin, StudprogramName);
			cout << "Enter Student CGPA :" << endl;
			cin >> CGPA;
		}
		break;
		case 6:
		{
			cout << "Enter Course Title :" << endl;
			cin.ignore();
			getline(cin, courseTitle);
			cout << "Enter Program Name :" << endl;
			getline(cin, courseProgramName);
			cout << "Enter Prerequisite :" << endl;
			getline(cin, Prerequisite);
			cout << "Enter Credit Hours :" << endl;
			cin >> creditHours;
		}
		break;
		case 7:
		{
			cout << "Enter Department Name :" << endl;
			cin.ignore();
			getline(cin, departmentName);
			cout << "Enter Program :" << endl;
			getline(cin, departmentProgram);
		}
		break;
		case 8:
		{
			cout << "Enter Program Name :" << endl;
			cin.ignore();
			getline(cin, programName);
			cout << "Enter Department Name :" << endl;
			getline(cin, department);
			cout << "Enter Course Name :" << endl;
			getline(cin, course);
		}
		break;
		default:
		{
			cout << "\n\tInvalid Input, Please Press (1 to 8) Option :" << endl;
		}
		}
		cout << "\n)-------Do You Want to Continue, then Press 'y' for (yes) And 'N' for (No)-------(" << endl;
		cout << "\t******************************************************************" << endl;
		cin >> Choice;
	} while (Choice == 'y' || Choice == 'Y');
	// Switch and Do While Loop End.............................
	Person* PerObj[8]; // Creating (Person) Base Class Pointer Object Array, Which Size is '8'.......................
	cout << "\n\n()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()" << endl;
	cout << "\n\t)---------------Creating Object---------------(" << endl;
	cout << "\t\t\t***************" << endl;
	cout << "\nPress 1 To Create 'Person Class' Object.\nPress 2 To Create 'Staff Class' Object." << endl;
	cout << "Press 3 To Create 'Teaching Staff Class' Object.\nPress 4 To Create 'Non-Teaching Staff Class' Object." << endl;
	cout << "Press 5 To Create 'Student Class' Object.\nPress 6 To Create 'Department Class' Object." << endl;
	cout << "Press 7 To Create 'Program Class' Object.\nPress 8 To Create 'Course Class' Object." << endl;
	int Option = 0, i = 0;
	char choice = 0;
	do
	{
		cout << "\n)-------Which Class Object You Want To Create-------(" << endl;
		cout << "\t*************************************" << endl;
		cin >> Option;
		if (Option == 1)
		{
			PerObj[i] = new Person(personName, personID, personAge); // At '[0]' Index, Person Class Object Reffers to The Person Class Object................
			PerObj[i]->Display(); // Calling Person Class Member Function that Name is 'Display()', To Displaying Data..........
		}
		else if (Option == 2)
		{
			PerObj[i] = new Staff(staffDesignation, staffSalary); // At '[1]' Index, Person Class Object Reffers to The Staff Class Object................
			PerObj[i]->Display(); // Calling Staff Class Member Function that Name is 'Display()', To Displaying Data..........
		}
		else if (Option == 3)
		{
			PerObj[i] = new TeachingStaff(teachStaffDepartment, teachStaffCourses, teachStaffStudents); // At '[2]' Index, Person Class Object Reffers to The Teaching Staff Class Object................
			PerObj[i]->Display(); // Calling Teaching Staff Class Member Function that Name is 'Display()', To Displaying Data..........
		}
		else if (Option == 4)
		{
			PerObj[i] = new Non_TeachingStaff(officeAddress, officeTiming); // At '[3]' Index, Person Class Object Reffers to The Non-Teaching Staff Class Object................
			PerObj[i]->Display(); // Calling Non-Teaching Staff Class Member Function that Name is 'Display()', To Displaying Data..........
		}
		else if (Option == 5)
		{
			PerObj[i] = new Students(StudprogramName, CGPA); // At '[4]' Index, Person Class Object Reffers to The Students Class Object................
			PerObj[i]->Display(); // Calling Students Class Member Function that Name is 'Display()', To Displaying Data..........
		}
		else if (Option == 6)
		{
			PerObj[i] = new Department(departmentName, departmentProgram); // At '[5]' Index, Person Class Object Reffers to The Department Class Object................
			PerObj[i]->Display(); // Calling Department Class Member Function that Name is 'Display()', To Displaying Data..........
		}
		else if (Option == 7)
		{
			PerObj[i] = new Program(programName, department, course); // At '[6]' Index, Person Class Object Reffers to The Program Class Object................
			PerObj[i]->Display(); // Calling Program Class Member Function that Name is 'Display()', To Displaying Data..........
		}
		else
		{
			PerObj[i] = new Course(courseTitle, courseProgramName, Prerequisite, creditHours); // At '[7]' Index, Person Class Object Reffers to The Course Class Object................
			PerObj[i]->Display(); // Calling Course Class Member Function that Name is 'Display()', To Displaying Data..........
		}
		i++; // Increment in 'i'.................
		cout << "\n)-------Do You Want To Continue, then Press 'y' for (yes) And 'N' for (No)-------(" << endl;
		cout << "\t******************************************************************" << endl;
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	cout << "\n\t\t\t)-------E N D   O F   T H E   P R O G R A M-------(" << endl;
	cout << "\t\t\t\t***********************************" << endl;
	return 0;
}
