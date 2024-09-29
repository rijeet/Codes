#include <bits/stdc++.h>
using namespace std;

vector<int> spriral_Order_print(vector<vector<int>> &mat)
{
    int row = mat.size();
    int col=mat[0].size();
    vector<int> Lenear_arr;
    if (row == 0)
        return Lenear_arr;
    
    int top=0,right=col-1,left=0,bottom=row-1;
   int d=0;

    while(top<=bottom&&left<=right) 
    {
        if(d==0)
        {
            for (int i = left; i <= right; i++)
            {
              Lenear_arr.push_back(mat[top][i]);
            }
            top+=1;
            
        }

        if(d==1)
        {
            for (int i = top; i <= bottom; i++)
            {
              Lenear_arr.push_back(mat[i][right]);
            }
            right-=1;
        }

        if(d==2)
        {
            for (int i = right; i >= left; i--)
            {
              Lenear_arr.push_back(mat[bottom][i]);
            }
            bottom-=1;
            
        }

        if(d==3)
        {
            for (int i = bottom; i >= top; i--)
            {
              Lenear_arr.push_back(mat[i][left]);
            }
            left+=1;
        }

        d=(d+1)%4;
    }
}

int main()
{

    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};  // 4x3 matrix

    vector<int> arr = spriral_Order_print(mat);

    for (int i = 0; i < arr.size()-1; i++)
    {
           cout<<arr[i]<<" ";
    }
    cout<<arr[arr.size()-1]<<"\n";

}
/*
#include <bits/stdc++.h>
using namespace std;

vector<int> spiral_Order_print(vector<vector<int>> &mat)
{
    int lenn = mat.size();
    vector<int> Linear_arr;
    if (lenn == 0)
        return Linear_arr;
    int len=mat[0].size();
    int top = 0, right = len - 1, left = 0, bottom = len - 1;
    int d = 0;

    while (top <= bottom && left <= right) 
    {
        if (d == 0) // left to right
        {
            for (int i = left; i <= right; i++)
            {
                Linear_arr.push_back(mat[top][i]);
            }
            top += 1;
        }
        else if (d == 1) // top to bottom
        {
            for (int i = top; i <= bottom; i++)
            {
                Linear_arr.push_back(mat[i][right]);
            }
            right -= 1;
        }
        else if (d == 2) // right to left
        {
            for (int i = right; i >= left; i--)
            {
                Linear_arr.push_back(mat[bottom][i]);
            }
            bottom -= 1;
        }
        else if (d == 3) // bottom to top
        {
            for (int i = bottom; i >= top; i--)
            {
                Linear_arr.push_back(mat[i][left]);
            }
            left += 1;
        }

        d = (d + 1) % 4;
    }

    return Linear_arr;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
        };

    vector<int> arr = spiral_Order_print(mat);

    for (int i = 0; i < arr.size() - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr[arr.size() - 1] << "\n";
}
*/