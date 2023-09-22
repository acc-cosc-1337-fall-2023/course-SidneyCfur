//add include statements

//add function(s) code here

int factorial(int num)
{ 
auto result = 1;
while(num > 0) {
    result = result * num;
    num--;
    }
return result;
}

int gcd(int num1, int num2)
{
auto holder = 0;
while(num1 != num2){
    if(num1 < num2){
        holder = num1;
        num1 = num2;
        num2 = holder;
    }
    if(num1 > num2){
        num1 -= num2;
    }}
    return num1;
}