#include <iostream>
using namespace std;
void mario (int);
int main() {
int height;

 cout << "請輸入數字:";
 cin >> height ;
 mario(height);
}

void mario(int height)
{
  if (height > 8 || height < 1)
        cout << "數字不在範圍(1~8)內";
      
  else

  for (int k = 0; k < height; k++) {
    for (int m = height; m > k; m--) {
      cout << " ";}
    for (int l = 0; l < k+1; l++) {
      cout << "#";}
      cout << " "; 
    for (int j = 0; j < k; j++) {
      cout << "#";}
      cout << "#\n"; } 
}
