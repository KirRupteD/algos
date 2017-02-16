#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/

void bubbleSort(auto& Data); // sort function prototype


int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
bubbleSort(inputs);

cout << " This is your sorted list " << endl;
for (int j = 0 ; j < inputs.size(); j++) { // for loop that prints the sorted list
	
	cout << inputs[j] << endl;
}
	
   

    return 0;
}


void bubbleSort(auto& Data) {
for (int k = 1; k < Data.size(); k++)
for (int i = 0; i < Data.size() -1 - k; i++)
if (Data[i] > Data[i +1]){
//pre-defined swap function
swap(Data[i], Data[i + 1]);
} //end if
} //end function
