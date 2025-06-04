/*
McKenna Cruz Peace
june 3, 2025 
loops
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

cout<<"-------------Example 1 Loop as an increment counter---------- "<<endl;

// for loop to count from 1 to 10
    for(int n = 1; n<=10; n++){
        cout<<n<<"\t";
    }

    // n is a lopcal variable for the for loop 

cout<<"-------------Example 2 Loop as a decrement counter---------- "<<endl;

    // for loop count from 5 to -5
    int m = 5;
    for(m; m>=-5; m--){
        cout<<m<<"\t";
    }
    cout<<endl;

    cout<<"Final m = "<<m<<endl;

cout<<"-------------Example 3 Loop as a increment counter with different steps---------- "<<endl;

// print from 1 to 20 with step of three
    for(int n = 1; n<=20; n+=3){
        cout<<n<<"\t";       
    }
    cout<<endl; //not required 

cout<<"-------------Example 4 Loop with nested conditional statement---------- "<<endl;

// print from 0 to 30 with a step of 4. if the count is multiple of 5, it will print HELLO instead of the number

    for(int step = 0; step<=30; step+=4){
        if(step%5==0){
            cout<<"HELLO"<<"\t";
        }else{
             cout<<step<<"\t";       
        }
    }

cout<<"-------------Example 5 Loop with nested conditional statement---------- "<<endl;
// count how mny numbers are a multiple of 5 from a counter between -10 and 10 with a step of 3

int counter_multiple5 = 0;
    for(int counter = -10; counter <= 10; counter+=3){
        cout<<counter<<"\t";       

        if(counter%5==0 && counter !=0){
            counter_multiple5 ++;
        }

    }

cout<<"There is/are "<<counter_multiple5<<" number/s multiple of 5"<<endl;

cout<<"-------------Example 6: Loop with nested conditional statement---------- "<<endl;
int sum_even = 0;
    // add all even number from a counter between 1 and 9
    int counter_even = 0;
    for(int n =1; n<=9; n++){
        cout<<n<<"\t";
        if(n%2 == 0 && n != 0){
            sum_even += n;
        }
    }
    // prompt result 
    cout<<"Sum of all numbers = "<<sum_even<<endl;


cout<<"-----------------------Lab exercise 1-----------------"<<endl;

int sum=0; 
int count=0;
    for (int n = 20; n> 10; n-=2){

        if (n%3 ==0){
            count++;
            continue;
        }
        sum += n;
    }

 cout<<"The sum is: "<<sum<<endl;
 cout<<"The count is: "<<count<<endl;

/*

TABLE
Loop iteration |	n |	n> 10 True or false	| if (n%3 ==0) True or false| count++;| sum += n; | n-=2
-----------------------------------------------------------------------------------------------------
1            | 20 | 20>10 true       | false             | skip    | sum = 0 + 20 = 20| n = 20-2=18
-----------------------------------------------------------------------------------------------------
2            | 18 | 18>10 true       | true              | 1   | skip | n = 18 -2 =16
-----------------------------------------------------------------------------------------------------

3            | 16 | 16>10 true       | false            | skip    | sum = 20 + 16 = 36| n = 16-2=14
-----------------------------------------------------------------------------------------------------

4            | 14 | 14>10 true       | false            | skip    | sum = 36 + 14 = 50 |n = 14-2=112
-----------------------------------------------------------------------------------------------------

5            | 12 | 12>10 true       | true            | 2    | skip | n = 12-2=10
-----------------------------------------------------------------------------------------------------
6            | 10 | 10>10 false ---> stop forloop      

// what should be prompted after the loop?
    the sum is : 50
    the count is : 2

*/

cout<<"\n----------------------WHILE LOOP -----------------"<<endl;
cout<<"-------------Example 7: while loop as a counter---------- "<<endl;
    // use while loop to print from 1 to 5, inclusive
    // initial value for the while loop
    m = 1;
    while(m<=5){
        cout<<m<<"\t";
        m++; //update loop variable m
    }

cout<<"\n-------------Example 8: while loop as a decrement counter---------- "<<endl;

// use while loop to print from 3 to 0

    int p = 3;

    while(p>= 0){
        cout<<p<<"\t";
        p--;
    }
    cout<<endl<<"update loop variable within the while loop condition"<<endl;

    p = 3;

    while(p-- >= 0){
        cout<<p<<"\t";
    }
     cout<<endl<<"update loop variable within the while loop condition"<<endl;

    p = 3;

    // --p indicates to start with the number -1 from original declaration
    while(--p >= 0){
        cout<<p<<"\t";
    }

cout<<"\n-------------Example 9: while loop to a valid number---------- "<<endl;
// enter a number between 10 and 20. Use a while to recollect the number if it is not between 10 and 20

int number; 
cout<<"Enter a number: ";
cin>>number;

while(!(number >= 10 && number <= 20) ){
    cout<<"Invalid! Enter a number between 10 and 20: ";
    cin>>number;

}
cout<<"Entered number = "<<number<<endl;


cout<<"\n-------------Example 10: do-while loop---------- "<<endl;

    char choice = 'y';

    do{
        cout<<"Enter a number: ";
        cin>>number;

        if(number == 0){
            cout<<"The number is zero"<<endl;
        }else if(number % 2 == 0){
            cout<<number<<" is even"<<endl;

        }else{
            cout<<number<<" is odd"<<endl;  
        }

        cout<<"Do you want another run?";
        cin>>choice;

    }while(choice == 'y' || choice == 'Y');

cout<<"Thank you for using our services!";  


cout<<"\n-------------Example 11: do-while loop as a checkpoint ---------- "<<endl;

// do while loop to validate if the number is between 1 and 9
int num;
do{

    cout<<"Enter a number: ";
    cin>>num;


}while(num< 1 || num >9); //!(num>= 1 && num<=9)
cout<<num<<" is valid"<<endl;


cout<<"\n-------------Example 12: break statement in a loop  ---------- "<<endl;
// collect and find sum of four negative numbers. If the user enters a positive number or zero the while loop will terminate

int sum_negative = 0;
int loop_counter = 1;
int neg_number;

cout<<"Enter 4 negative numbers: "<<endl;

while(loop_counter++ <=4){
    cin>>neg_number;
    if(neg_number < 0 ){
        sum_negative += neg_number;

    }else{
        cout<<"A negative number wasnt entered! The loop will be terminated"<<endl;
        break;
    }
}
    // prompt result
    cout<<"The sum of all negative numbers = "<<sum_negative<<endl;



cout<<"\n-------------Example 13: break statement in a loop  ---------- "<<endl;
// simulate an ATM
int balance = 1000;
int withdraw_amount = 0;
int selection;
char choice_transaction = 'y';

    do{
        cout<<"How can I help you today? "<<endl;
        cout<<"1 for account balance"<<endl;
        cout<<"2 for withdraw "<<endl;
        cout<<"3 for exit "<<endl;
        cin>>selection;

        if(selection == 1){
            cout<<"Your balance is $"<< balance << endl;
        }
        else if(selection == 2){
            cout<<"How much do you want to withdraw?";
            cin>>withdraw_amount;
            while(withdraw_amount > balance){
                cout<<"Insuficient funds. Enter an amount less than"<<balance<< endl;
                cin>>withdraw_amount;
            }
            cout<<"Withdrawal amount $"<<withdraw_amount<<endl;
            balance -= withdraw_amount;
            cout<<"Do you want to make another transaction? ";
            cin>>choice_transaction;
            if(choice_transaction != 'y' && choice_transaction != 'Y'){
                cout<<"Thank you for banking with us! Good bye!"<<endl;
                break;
            }
        }
        else if(selection == 3){
            cout<<"Thank you for banking with us! Goodbye!"<<endl;
            break;
        }else{
            cout<<"Invalid selection! Try again."<<endl;
        }

    }while(true);

cout<<"-----------------------Lab exercise 2 -----------------"<<endl;

int i=0;
int add=0;
while(i<=10){
    i++;
    if(i<5 && i !=2){   
        cout<<"i = "<<i<<endl;
    }else{
        continue;
    }
      add +=i;
    
}
cout<<"Add = "<<add<<endl;


/*

TABLE
Loop iteration | i <= 10 (t/f) | i++	| if (i<5 && i != 2 ) t/f| cout<<"i = "<i;| else (t/f) | add += i;

-----------------------------------------------------------------------------------------------------
1            | 0 <= 10 true   | 1      |  true                  | i =  1         | false       | add = 0 +1= 3
-----------------------------------------------------------------------------------------------------
2            | 1 <= 10 true   | 2      |  false                  | skip        | true       | skip
-----------------------------------------------------------------------------------------------------
3            | 2 <= 10 true   | 3     |  true                  | i =  3        | false       | add = 1 + 3 = 4
-----------------------------------------------------------------------------------------------------
4            | 3 <= 10 true   | 4      |  true                  | i =  4         | false       | add = 4 + 4 = 8
-----------------------------------------------------------------------------------------------------
5            | 4 <= 10 true   | 5      |  false                  | skip         | true       |
-----------------------------------------------------------------------------------------------------
6            | 5 <= 10 true   | 6      |  false                  | skip         | true       |     
-----------------------------------------------------------------------------------------------------
7            | 6 <= 10 true   | 7      |  false                  | skip         | true       |  
-----------------------------------------------------------------------------------------------------
8            | 7 <= 10 true   | 8      |  false                  | skip         | true       |  
-----------------------------------------------------------------------------------------------------
9            | 8 <= 10 true   | 9      |  false                  | skip         | true       |  
-----------------------------------------------------------------------------------------------------
10            | 9 <= 10 true   | 10    |  false                  | skip         | true       |  
// what should be prompted after the loop?
 
Add = 8


*/
 return 0;
}

/*

echo "# for_loops_c" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/anvpeace/for_loops_c.git
git push -u origin main

*/