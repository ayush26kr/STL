//2D vector matrix or vector of vectors
#include<iostream>
#include<vector>
using namespace std;
#define rows 4   //defining rows and columns in vectors of vectors
#define cols 4
int main()
{
    vector<vector<int>>vec; //initialisation

    int num=10; //elements to insert in column

    //inserting elements to the vector
    for(int i=0;i<rows;i++)
    {
        vector<int>v1; //vector to store column elements
        for(int j=0;j<cols;j++)
        {
            v1.push_back(num);
            num+=5;

        }

        //pushing back above 1d vector to create 2D vector
        vec.push_back(v1);
    }

    //display
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec.size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}