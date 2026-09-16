# include<bits/stdc++.h>
# include<vector>
using namespace std;
// int main(){
//     vector<double> number={10.05,20.98,50.45,34.67,49.90};
//     for(auto v: number){
//         cout<<v<<" ";
//     }
//     return 0;
// }
// write a c++ program to store the attendence of 6 students in vector int collection use range based 
//for loop with auto to display all the attendence percentage and encount how many students have 
//attendence more than 75 percentage

// int main(){
//     vector<double>coll={50.45,90.24,78.5,33.7,88.89,62.90};
//     cout<<"Attendence percentage: ";
//     int count=0;
//     for(auto x:coll){
//         cout<<x<<" ";
//         if(x>75.0){
//             count++;
//         }
//     }
//     cout<<endl;
//     cout<<"Students having percentage more than 75% are "<<count;   
// }
//write a c++ program to store the monthly salary of the employees in vector double collection use a range
//based for loop with uto to display the following
//1.display all employees salary 2. calculate the total salary of the employees
// 3.find the highest salary employeed 4.count how many employees have salary greater than 50000
//5.calculate the average salary
int main(){
    int n;
    cout<<"Enter no. of employess: ";
    cin>>n;
    vector<double>emp(n);
    cout<<"Enter salaries: ";
    for(int i=0;i<n;i++){
        cin>>emp[i];
    }
    cout<<endl;
    cout<<"Salary of employees: ";
    double total=0;
    int count=0;
    for(auto s:emp){
        cout<<s<<" ";
        total+=s;
        // if(s>50000.00){
        //     count++;
        // }
    }
    cout<<endl;
    // cout<<"Highest salary: "<<*max_element(emp.begin(),emp.end())<<endl;
    // cout<<"Employees having salary greater than 50 thousand are: "<<count<<endl;
    cout<<"Average salary: "<<total/n;
    return 0;
}

// design a class represents tp bank account with proper data handling and the member functions for deposit 
//withdrawl ans show balance operations



