#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class BlogEntry
{
private:
	string entryTxt;
	string date;
	string username;
	int userId;
public:
	BlogEntry()
	{
		entryTxt = "Welcome to C++";
		date = "04/22/16";
		username = "zb";
		userId = 3077;
	}

	void setEntryTxt(string txt)
	{ entryTxt = txt; }
	void setDate(string d)
	{ date = d; }
	void setUserName(string un)
	{ username = un; }
	void setUserId(int uid)
	{ userId = uid; }

	string getEntryText()
	{
		return entryTxt;
	}
	string getDate()
	{
		return date;
	}
	string getUserName()
	{
		return username;
	}
	int getUserId()
	{
		return userId;
	}
	
	string getInfo()
	{
		string info = entryTxt + ", " + date + ", " + username + ", ";
		string x = to_string(userId);
		return info + x;
	}
};

int main()
{
	const int SIZE = 2;

	BlogEntry bentry[SIZE];

	string txt;
	string date;
	string un;
	int uID;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter Blog" << i + 1 << "'s information " << endl;
		cout << "Enter Text: ";
		cin >> txt;
		cout << endl;
		cout << "Enter date: ";
		cin >> date;
		cout << endl;
		cout << "Enter username: ";
		cin >> un;
		cout << endl;
		cout << "Enter User ID: ";
		cin >> uID;
		cout << endl;
		bentry[i].setEntryTxt(txt);
		bentry[i].setDate(date);
		bentry[i].setUserName(un);
		bentry[i].setUserId(uID);
	}
	for (int j = 0; j < SIZE; j++)
	{
		cout << "Blog" << j + 1 << "'s information: " << endl;
		cout << bentry[j].getInfo();
		cout << endl;
	}
	
	return 0;
	
}