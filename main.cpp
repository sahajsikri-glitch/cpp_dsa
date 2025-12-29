#include <iostream>
#include <vector>
using namespace std;

//wrting our first program
// int main(){
//   int fav_number;
//   cout<<"enter your fav no. bw 1 to 100: ";
//   cin>>fav_number;
//   cout<<"amazing that's my fav number too! ";
//   cout<<"\nno really, " <<fav_number<<" is my fav number";

//basic input and output using cin and cout
//eg1
// int main(){
//   cout<<"Hello\nout\nthere";

//eg2
// int main(){
//   int num1,num2;
//   cout<<"enter your first num: ";
//   cin>>num1;
//   cout<<"enter your second num: ";
//   cin>>num2;
//   cout<<"Your num1 is "<<num1<<" and num2 is "<<num2;

//eg3
// int main(){
//   int num1;
//   float num2;

//   cout<<"enter an integer: ";
//   cin>>num1;

//   cout<<"enter your double: ";
//   cin>>num2;

//   cout<<"the number is: "<<num1<<endl;
//   cout<<"the double is: "<<num2<<endl;

//DECLARING N INITIALIZING VARIABLE
// int main(){
//   cout<<"enter the width of room: ";
//     int width{7};//declaring n initializing in case of no input
//   cin>>width;
//   cout<<"enter the length of room: ";
//    int length{1};
//   cin>>length;
//   cout<<"the are of room is : "<<width*length<<" square feet";

  // BUILD IN PRIMITIVE DATA TYPES

// **********************************************************
// character type
// **********************************************************

// // **********************************************************
// // integer type
// // **********************************************************
// long people_in_florida {24345454};
// cout<<people_in_florida<<endl;

// long long people_on_earth {34398479287482};
// cout<<people_on_earth<<endl;

// // **********************************************************
// // float type
// // **********************************************************
// double pi{3.14159};
// cout<<pi<<endl<<endl;//for gap bw lines

// long double large_amount{2.7e120832389273};
// cout<<large_amount<<endl;

// // **********************************************************
// // overflow example
// // **********************************************************
// short value1 {2327};
// short value2 {1000};
// short product {value1*value2};
// cout<<product;//(negative number)coz multiplying it make it a long num

// //section 06 challenge
// int main(){
// // (FRANK'S CARPET CLEANING SERVICE CHARGES)
// int small_rooms;
// int large_rooms {0};
// const int price_small_room {25};
// const int price_large_room {35};
// const double tax {0.06};
// int days {30};
// cout<<"hello wlcme to frank carpet cleaning service!"<<endl<<endl;
// cout<<"how many small rooms would you like to be cleaned?  ";
// cin>>small_rooms;
// cout<<"how many large rooms would you like to be cleaned? ";
// cin>>large_rooms;
// cout<<endl;
// cout<<"Estimate for carpet cleaning services:"<<endl;
// cout<<"no of small rooms : "<<small_rooms<<endl;
// cout<<"no of large rooms : "<<large_rooms<<endl;
// cout<<"price per small room : $"<<price_small_room<<endl;
// cout<<"price per large room : $"<<price_large_room<<endl;
// int total {(small_rooms*price_small_room)+(large_rooms*price_large_room)};
// cout<<"cost : "<<total<<endl;
// cout<<"tax : "<<total*tax<<endl;
// cout<<"========================================="<<endl;
// cout<<"total estimate : "<<total+(total*tax)<<endl;
// cout<<"this estimate is valid for "<<days<<"days"<<endl<<endl;
// return 0;
// };

// ARRAY
// int main(){
// int vowels2 [5] {};
// cout<<vowels2<<endl;
// char vowels [5] {'a','e','i','o','u'};
// cout<<"the first vowel is : "<<vowels[0]<<endl;
// cout<<vowels<<endl; // hexadecimal value(MEMORY ADDRESS)
// // cin>>vowels[5];//dont do this program crashed
// double hi_temp [] {90.1,89.4,22.2,239.2};
// hi_temp[0]=43.2;
// cout<<hi_temp[0]<<endl;
// cout<<hi_temp<<endl;
// return 0;}

// int a[5]={1,2,3,4,5};
// for(int i=0;i<5;i++){

//   cout<<" "<<a[i];
// }
// cout<<endl;

// //2-DIMAENSIONAL ARRAY
// int main(){
// int movie_rating[3][4]{{1,2,3,4},{4,5,6,7,},{6,7,8,9}};
// cout<<movie_rating<<endl;}

//PRINTING A MATRIX
// int main(){
// int b[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
// for(int i=0;i<3;i++){
//   for(int j=0;j<3;j++){
//   cout<<b[i][j];}
//   cout<<endl;
// }}

//VECTOR
// int main(){
// // vector <char> vowel;//empty(declaring)
// vector <char> vowel{'a','e','i'};//(initialization)
// cout<<vowel[2]<<endl;

// vector <int> test_score{100,40,59};
// test_score.push_back(80);
// //array syntax
// cout<<test_score[0];
// cout<<test_score[1];
// cout<<test_score[2];
// cout<<test_score[3]<<endl;
// //vector syntax
// cout<<test_score.at(0)<<endl;
// cout<<test_score.at(2)<<endl;
// cout<<"there are "<<test_score.size()<<" scores in the vector"<<endl;
// // cout<<"program stopping!!!! "<<test_score.at(10)<<endl;
// }

//examples of 2d vectors
// int main(){
// vector <vector <int>> movie_ratings{
//   {1,2,3,3},{3,4,5,7},{8,8,9,6}
// };
// cout<<"here are the movie ratings for reviewers #1 using array syntax"<<endl;
// cout<<movie_ratings[0][0]<<endl;
// cout<<movie_ratings[0][1]<<endl;
// cout<<movie_ratings[0][2]<<endl;
// cout<<movie_ratings[0][3]<<endl;
// cout<<movie_ratings[2][2]<<endl;
// }
// //SECTION CHALLENGE
// int main(){
// vector <int> vector1;
// vector <int> vector2;
// vector1.push_back(10);
// vector1.push_back(20);
// cout<<vector1.at(0)<<endl;
// cout<<vector1.at(1)<<endl;
// cout<<vector1.size()<<endl;
// vector2.push_back(100);
// vector2.push_back(200);
// cout<<vector2.at(0)<<endl;
// cout<<vector2.at(1)<<endl;
// cout<<vector2.size()<<endl;
// vector <vector<int>> vector_2d;
// vector_2d.push_back(vector1);
// vector_2d.push_back(vector2);
// cout<<vector_2d.at(0).at(0)<<endl;
// cout<<vector_2d.at(0).at(1)<<endl;
// cout<<vector_2d.at(1).at(0)<<endl;
// cout<<vector_2d.at(1).at(1)<<endl;
// vector_2d[0][0] = 1000;
// cout<<vector_2d.at(0).at(0)<<endl;
// cout<<vector_2d.at(0).at(1)<<endl;
// cout<<vector_2d.at(1).at(0)<<endl;
// cout<<vector_2d.at(1).at(1)<<endl;
// cout<<vector1.at(0);
// cout<<vector1.at(1);
// return 0;
// }

// //DECLARING EMPTY 2 VECTORS
// // vector <vector<int>> vector_2d;
// // vector_2d.push_back(vector1);
// // vector_2d.push_back(vector2);
// // cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
// // cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
// // vector1.at(0) = 1000;
// // cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
// // cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(0)<<endl;
// // cout<<vector1.at(0);
// // cout<<vector1.at(1); 

// // LOOPS (FOR / WHILE)
// // 1)printing numbers from 75 to 50
// // for (int i =75;i>=50;i=i-5){
// //   cout<<"numbers are "<<i;
// // }
// // int i{75};
// // while(i>50){
// //   cout<<"numbers are "<<i<<endl;
// //   i=i-5;
// // }

// // // 2)FIBINOCCI[1 1 2 3 5 8 13 21]
// // int next;
// // int n1=1,n2 = 1;
// // cout<<n1<<n2;
// // for(int i=1;i<=6;i++){
// //   next=n1+n2;
// //   n1 = n2;
// //   n2=next;
// //   cout<<next;
// // }

// // while()

// //SUM OF POSITIVE INT
// // int num,sum=0;
// // cout<<"the integers are: ";
// // do{
// //   cin>>num;
// //   if(num>0){
// //     sum+=num;
// //   }
// // }
// //   while (num!=0);

// //   cout<<"the sum of positive number integers: "<<sum;

// // PATTERN MAKING
// int main(){
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// int n;
// cin>> n;
// for(int i = 1;i<=n;i++){
//   for(int j=1;j<=i;j++){
//     cout<<"*";
//   }
//   cout<<endl;
// }

// * * * * *
// * * * *
// * * *
// * *
// *
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//   for(int j=n;j>=1;j--){
//     cout<<"*";
//   }
//   cout<<endl;
// }
// }

// for(int i=1;i<=5;i++){
//   cout<<endl;
// }
// for(int j=1;j<=i;j++){
//   cout<<" "<<"*";
// }

// //ARITHMETIC OPERATOR 
// // int num1{100};
// // int num2{200};
// // cout<<num2%num1;

// //INCR/DECR OPERATOR
// int counter = 10;
// int result = 0;
// result = counter++ + 10;
// //iss wale me phele ye uppar wali equation solve hogi fir 
// // neeche baadme counter = 11 hojayega
// cout<<result;

//FUNCTIONS
// int sum(int a , int b){
//   return a+b;
// }
// int main(){
//   int X,Y,result;
//   cin>>X>>Y;
//   result = sum(X,Y);
// cout<<endl<<result;
// char middle_initial{'T'};
// cout<<"the middle initial is "<<middle_initial<<endl;
//    return 0;
// }

// MIXED EXPRESSIONS AND CONVERSIONS
// int main(){
//   int num1 {},num2 {},num3{};
//   int total;
//   const int count {3};
//   cout<<"enter 3 int seperated by spaces";
//   cin>>num1>>num2>>num3;
//   total = num1+num2+num3;
//   double average{0.0};
//   average =static_cast<double> (total) / count;
//   // average = (double)total/count; //OLD STYLE
  
//   cout<<"the 3 numbers were"<<num1<<" "<<num2<<" "<<num3<<endl;
//   cout<<"the sum of the number is "<<total<<endl;
//   cout<<"the average of numbers is"<<average<<endl;
// }

//TESTING FOR EQUALITY
// int main(){
//   bool equal_num;
//   bool notequal_num;
//   int num1{},num2{};
//   cout<<boolalpha;
//   cout<<"enter 2 digit numbers seperated by space";
//   cin>>num1>>num2;
//   equal_num= num1==num2;
//   notequal_num= num1!=num2;
//   cout<<"comparison result (equals) "<<equal_num<<endl;
//   cout<<"comparison result (not equal) "<<notequal_num<<endl;
//   return 0;
// }
//GOOD QUESTION
// Coding Exercise 9: 
// Logical Operators and Operator Precedence - Can you work?
// In order for the individual to be eligible, they must be 18
// years of age or older, or be above the age of  15  and
// have their parents consent to work. Additionally they must 
// possess a valid social security number and have no driving accidents.

// Let the variable age  represent the individual's age,
// and the boolean variables parental_consent  represent
// parental consent, ssn  represent a valid social security
// number, and accidents   represent whether they have had
// any car accidents.

//SECTION CHALLENGE-08
// int main(){
//   int cents;
//   cout<<"enter an amount in cents : ";
//   cin>>cents;
//   cout<<"you can provide change for this as follows: "<<endl;
//   int dollars{100};
//   int quarter{25};
//   int dime{10};
//   int nickles{5};
//   int penny{1};

//   dollars = cents/100;
//   cout<<"dollars : "<<dollars<<endl;
//   cents = cents-(dollars*cents);

//   quarter= cents/25;
//   cout<<"quarter : "<<quarter<<endl;
//   cents = cents -(cents*quarter);

//   dime = cents/10;
//   cout<<"dime : "<<dime<<endl;
//   cents= cents - (cents*dime);
  
//   nickles = cents/5;
//   cout<<"nickles : "<<nickles<<endl;
//   cents = cents- (cents*nickles);

//   penny = cents;
//   cout<<"penny : "<<penny<<endl;
//   return 0;
// }

// //NESTED IF STATEMENT
// // package question (
// // base cost = $2.50
// //   if package dimension greater than 100 = package rejected
// //   and >100 means subcharge of 10%
// //   and >500 means subcharge of 50%
// // )
// int main(){
//   double base_cost{2.50};
//   int length,width,heigth;
//   const int tier1_threshold {100};//volume
//   const int tier2_threshold {500};//volume
//   int max_dimesion_length{10};//inches

//   int package_volume{};
//   cout<<"welcome to the package cost calculator"<<endl;
//   cout<<"enter length , width and height of package seperated by spaces"<<endl;
//   cin>>length>>width>>heigth;

//   // if(length>max_dime)
// }

// NESTED IF STATEMENT
int main(){
int score{};
cout<<"Enter the total number youy got out of 100: ";
cin>>score;
char letter_grade{};
if (score>= 0 && score<=100){
  if (score>=90)
  letter_grade ='A';
  else if (score>=80)
  letter_grade ='B';
  else if (score>=70)
  letter_grade ='C';
  else if (score>=60)
  letter_grade ='D';
  else{
  letter_grade ='F';
}
if (letter_grade == 'F')
  cout<<"FAILED! you must repeat the class";
else{
cout<<"You got "<<letter_grade<<endl;
cout<<"congrats! You're promoted to next class";
}
}
else{
  cout<<"invalid num";
}
}
