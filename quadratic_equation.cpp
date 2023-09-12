#include <iostream>
#include <math.h>

using namespace std;
int main()
{

double a, b, c, sol1, sol2;

cout<<"Please provide the coefficients of your quadratic equation: "; 
cin >> a >> b >> c;

<<<<<<< HEAD



=======
>>>>>>> f2bea7dd88c1e4937bf91ce964a0c3cf577ee2b5
sol1 = (-b + sqrt(pow(b,2)-4*c*a))/(2*a);
sol2 = (-b - sqrt(pow(b,2)-4*c*a))/(2*a);

cout<<"Solution 1: "<<sol1<<endl;
cout<<"Solution 2: "<<sol2<<endl;

return 0;
}
