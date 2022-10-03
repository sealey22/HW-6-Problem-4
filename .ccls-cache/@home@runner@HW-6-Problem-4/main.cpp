#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
  
void sign(int, string);

int main() {
  //month to int


  int T;
  cout << "enter classmates: ";
  cin >> T;

  for(int i = 1; i <= T; i++){
    int d;
    char m;
    cout << "enter date: ";
    cin >> d >> m;

    return 0;
    }
  

  //user function
  void sign(int day, string month)
{
    string sign =" ";
  if (month == "Aug"){
      if (day < 23)
        sign = "Leo";
      else 
        sign = "Virgo";}

  
  }
    




























  return sign;
}