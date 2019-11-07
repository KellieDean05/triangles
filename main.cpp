//Functions Pass by Value vs. Pass by Reference
//Dr. Tyson McMillan 9-23-2019 
#include<iostream>
using namespace std; 

void doubleByValue(double); //prototype by value
void doubleByRef(double &); //& gets the memory address of the variable
void additionByRef(int&);
void subtractionByRef(int&);
void showPatternTriDown(int &);
void showPatternTriUp(int &);
void showPatternTriSquare(int &);
void sortArrDesc (double[], int);
void printArray(double[], int);

int main()
{
   
	//Pass by VALUE numValue and aValue are different
	cout << "Pass by VALUE numValue and aValue are different." << endl; 
	double numValue = 5; //inital value of numValue
	cout << "\t numValue now (initial) = " << numValue << endl; //current value
	doubleByValue(numValue); //function call double the value by passing information by "value" --> a copy
	cout << "\t numValue now = " << numValue << endl; //current value after first pass to function
	doubleByValue(numValue); //function call a second time
	cout << "\t numValue now = " << numValue << endl; //show the current value of the int main() variable
	cout << "Note how numValue remains the same with each call of the function\n";
	cout << "Note the functions generates a result that is different from numValue.\n";
	cout << "Therefore, numValue and aValue are different variables (not linked) to each other.\n";  
	
	//Pass by REFERENCE (&) numRef and &aRef are the same
	cout << "\nPass by REFERENCE (&) numRef and &aRef are the same." << endl; 
	double numRef = 5; //initial value
	cout << "\t numRef now (initial) = " << numRef << endl; 
	doubleByRef(numRef); //double the number in int main via the map to it's memory location 
	cout << "\t numRef now = " << numRef << endl; //how do the values compare? 
	doubleByRef(numRef);// call it again
	cout << "\t numRef now = " << numRef << endl; //current value
	cout << "Note how numRef's value changes with each call of the function\n";
	cout << "Note the functions generates a result that is the same as numRef.\n";
	cout << "Therefore, numRef and &aRef variables (are linked) toe each other via memory location (address).\n";
	int userInput = 0;
  cout << "Please enter a number: " << endl;
  cin >> userInput;
  additionByRef(userInput);
  cout << "Subtracting by one: " << endl;
  cin >> userInput;
  subtractionByRef(userInput);
 
  int highNumber = 0;
  cout << "Let's make a triangle. Enter a high number: " << endl;
  cin >> userInput ; 
  showPatternTriDown(userInput);

  cout << "Let's make a triangle the other way! Enter a high number: " << endl;
  cin >> userInput;
  showPatternTriUp(userInput);

  cout << "Let's make a square dance! Please enter a number:" << endl;
  cin >> userInput;
  showPatternTriSquare(userInput);
  
 
  cout << "Let's sort it out.\n" << endl;
   double numbers[10] = {15.5, 7.055, 75.75, 100.87479 ,22.4, 78.2444, 7.2, 100.1, 55.6, 107.58777};

  
 int sizeOfArray = sizeof(numbers) / sizeof(double); 
  printArray(numbers,sizeOfArray); 
  sortArrDesc(numbers,sizeOfArray); 
	 
	/***Expand this code**
	//Write a function to add 1 to anumber in int main() when it is passed by & reference
	//write a function to subtract 1 to/from a number in int main() when it is passed by & reference
	//datatype of number is int, you give the variables/function their names
	//Solve this, save this, close this, zip, upload Ref_Value_Funct_YourLastName.zip to EC item 15	
	*/
	return 0;
}

//definitions 
void doubleByValue(double aValue)
{
	aValue *= 2; //double the value
	cout << "\t aValue now " << aValue << endl; //current value 
}

void doubleByRef(double &aRef)
{
	aRef *= 2; //double the value by references "I know your address"
	cout << "\t aRef now = " << aRef << endl; 
}
void additionByRef(int &userRef)
{
userRef += 1;
cout << userRef << endl;
}

void subtractionByRef(int&userRef)
{
  userRef -= 1;
cout << userRef << endl;
}

void showPatternTriDown(int &highNumber)
{
  
for(int i = highNumber; i >= 1; i--)
{
  for(int j = 1; j<= i; j++)
    {
      cout << "*" ;
    }
    cout << endl;
}

}
void showPatternTriUp(int &highNumber)
{
  
for(int i = 1; i <= highNumber; ++i)
{
  for(int j = 1; j <= i; ++j)
    {
      cout << "*" ;
    }
    cout << endl;
}

}
void showPatternTriSquare(int &row)
{
  
for(int i = 1; i <= row; i++)
{
  for(int j = 1; j <= row; ++j)
    {
      cout << "*" ;
    }
    cout << endl;
}
}

void printArray(double array[], int size)
{
  cout << "Printed Values: " << endl;
// print the array values, 1 per line.
for (int i = 0; i < size; i++)
{
cout << array[i] << endl;
}
}
void sortArrDesc (double array[], int size)
{
  int temp = 0;
  for (int left = 0; left < size; left++)
  {
      for (int right = left +1; right < size; right++)
    {
           if (array[left] <  array [right])
       {
         temp =  array [left];
          array[left] = array[right];
          array [right] = temp;
       }

    }
  }
  printArray(array,size);

}