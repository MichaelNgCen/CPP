/* 
   I decide to split it into season because it looks too much in the complier
   I didnt put in crops/flower/herbs that grew in all season
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void line ()
{
	cout << "------------------------------------------------\n";
}
int main() {
  vector < string > newCrop;
  string x, y;
  
  cout << "Type in the crop/flower/herbs/trees you have (type end to finish) : \n"; 
  /* 
	 type in crop and press enter each time, type "end" to finish typing  
	 it can't regonize space instead of "pink rose" type in "pinkrose"
	 also please use all lower cap throughout the program
  */
  while (cin >> x) {
    if (x == "end" || x == "no") 
	{
      break;
    } else
      newCrop.push_back(x);
  }
  line();
  cout << "You have " << newCrop.size() << " crops/flowers/herbs/trees \n";
  line();
  cout << "Enter which season you want: ";
  cin >> y;
  line();
  cout << "List of what you missing from "<< y << endl;
if (y=="spring")
{   
	// This is not optimal way to do it but couldn't think of a way
	if(find(newCrop.begin(),newCrop.end(),"turnip")!=newCrop.end())
	{;}
	else
	{cout<<"TURNIP\n";}
	if(find(newCrop.begin(),newCrop.end(),"potato")!=newCrop.end())
	{;}
	else
	{cout<<"POTATO\n";}
	if(find(newCrop.begin(),newCrop.end(),"cabbage")!=newCrop.end())
	{;}
	else
	{cout<<"CABBAGE\n";}	
	if(find(newCrop.begin(),newCrop.end(),"cucumber")!=newCrop.end())
	{;}
	else
	{cout<<"CUCUMBER\n";}
	if(find(newCrop.begin(),newCrop.end(),"strawberry")!=newCrop.end())
	{;}
	else
	{cout<<"STRAWBERRY\n";}
	if(find(newCrop.begin(),newCrop.end(),"pinkrose")!=newCrop.end())
	{;}
	else
	{cout<<"PINK ROSE\n";}
	if(find(newCrop.begin(),newCrop.end(),"marguerite")!=newCrop.end())
	{;}
	else
	{cout<<"MARGUERITE\n";}
	if(find(newCrop.begin(),newCrop.end(),"tulip")!=newCrop.end())
	{;}
	else
	{cout<<"TULIP\n";}
	if(find(newCrop.begin(),newCrop.end(),"cherry")!=newCrop.end())
	{;}
	else
	{cout<<"CHERRY\n";}
	return 0;}	
if (y=="summer")
{   
	if(find(newCrop.begin(),newCrop.end(),"onion")!=newCrop.end())
	{;}
	else
	{cout<<"ONION\n";}
	if(find(newCrop.begin(),newCrop.end(),"pumpkin")!=newCrop.end())
	{;}
	else
	{cout<<"PUMPKIN\n";}
	if(find(newCrop.begin(),newCrop.end(),"tomato")!=newCrop.end())
	{;}
	else
	{cout<<"TOMATO\n";}	
	if(find(newCrop.begin(),newCrop.end(),"corn")!=newCrop.end())
	{;}
	else
	{cout<<"CORN\n";}
	if(find(newCrop.begin(),newCrop.end(),"pineapple")!=newCrop.end())
	{;}
	else
	{cout<<"PINEAPPLE\n";}
	if(find(newCrop.begin(),newCrop.end(),"watermelon")!=newCrop.end())
	{;}
	else
	{cout<<"WATERMELON\n";}
	if(find(newCrop.begin(),newCrop.end(),"sunflower")!=newCrop.end())
	{;}
	else
	{cout<<"SUNFLOWER\n";}
	if(find(newCrop.begin(),newCrop.end(),"redrose")!=newCrop.end())
	{;}
	else
	{cout<<"RED ROSE\n";}
	if(find(newCrop.begin(),newCrop.end(),"hydrangea")!=newCrop.end())
	{;}
	else
	{cout<<"HYDRANGEA\n";}
	if(find(newCrop.begin(),newCrop.end(),"peach")!=newCrop.end())
	{;}
	else
	{cout<<"PEACH\n";}
	if(find(newCrop.begin(),newCrop.end(),"banana")!=newCrop.end())
	{;}
	else
	{cout<<"BANANA\n";}
	if(find(newCrop.begin(),newCrop.end(),"mango")!=newCrop.end())
	{;}
	else
	{cout<<"MANGO\n";}
	return 0;}	
if (y=="fall")
{   
	if(find(newCrop.begin(),newCrop.end(),"spinach")!=newCrop.end())
	{;}
	else
	{cout<<"SPINACH\n";}
	if(find(newCrop.begin(),newCrop.end(),"carrot")!=newCrop.end())
	{;}
	else
	{cout<<"CARROT\n";}
	if(find(newCrop.begin(),newCrop.end(),"eggplant")!=newCrop.end())
	{;}
	else
	{cout<<"EGGPLANT\n";}	
	if(find(newCrop.begin(),newCrop.end(),"yam")!=newCrop.end())
	{;}
	else
	{cout<<"YAM\n";}
	if(find(newCrop.begin(),newCrop.end(),"greenpepper")!=newCrop.end())
	{;}
	else
	{cout<<"GREEN PEPPER\n";}
	if(find(newCrop.begin(),newCrop.end(),"nadeshiko")!=newCrop.end())
	{;}
	else
	{cout<<"NADESHIKO\n";}
	if(find(newCrop.begin(),newCrop.end(),"whiterose")!=newCrop.end())
	{;}
	else
	{cout<<"WHITE ROSE\n";}
	if(find(newCrop.begin(),newCrop.end(),"gerbera")!=newCrop.end())
	{;}
	else
	{cout<<"GERBERA\n";}
	if(find(newCrop.begin(),newCrop.end(),"apple")!=newCrop.end())
	{;}
	else
	{cout<<"APPLE\n";}
	if(find(newCrop.begin(),newCrop.end(),"grape")!=newCrop.end())
	{;}
	else
	{cout<<"GRAPE\n";}
	if(find(newCrop.begin(),newCrop.end(),"cocoa")!=newCrop.end())
	{;}
	else
	{cout<<"COCOA\n";}
	if(find(newCrop.begin(),newCrop.end(),"kiwi")!=newCrop.end())
	{;}
	else
	{cout<<"KIWI\n";}
	return 0;}
if (y=="winter")
{   
	if(find(newCrop.begin(),newCrop.end(),"daikon")!=newCrop.end())
	{;}
	else
	{cout<<"DAIKON\n";}
	if(find(newCrop.begin(),newCrop.end(),"bokchoy")!=newCrop.end())
	{;}
	else
	{cout<<"BOKCHOY\n";}
	if(find(newCrop.begin(),newCrop.end(),"broccoli")!=newCrop.end())
	{;}
	else
	{cout<<"BROCCOLI\n";}	
	if(find(newCrop.begin(),newCrop.end(),"snowdrop")!=newCrop.end())
	{;}
	else
	{cout<<"SNOWDROP\n";}
	if(find(newCrop.begin(),newCrop.end(),"gentian")!=newCrop.end())
	{;}
	else
	{cout<<"GENTIAN\n";}
	if(find(newCrop.begin(),newCrop.end(),"bluerose")!=newCrop.end())
	{;}
	else
	{cout<<"BLUE ROSE\n";}
	if(find(newCrop.begin(),newCrop.end(),"orange")!=newCrop.end())
	{;}
	else
	{cout<<"ORANGE\n";}
	return 0;}
	}