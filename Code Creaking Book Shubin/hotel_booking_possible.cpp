#include <bits/stdc++.h>
using namespace std;

void MaximunArraySum(vector<long long int> &arivals, vector<long long int> &departures, int Num_Conflict)
{
    int maxSum = INT_MIN;
    int carrySum = 0;

    for (int i = 1; i < arivals.size(); i++)
    {
        if (departures[i - 1] >= arivals[i]) // 2>=3//6>=5// need to plus minus k
        {
            Num_Conflict--;
            // cout << "departures :" << departures[i - 1] << "  arival :"s << arivals[i] << "\n";
            // cout<<"Num_Conflict :"<<Num_Conflict<<"\n";
        }

    }
  
   if (Num_Conflict > 0)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
   
}

int main()
{
    vector<long long int> arivals = {1, 3, 4, 5};
    vector<long long int> departures = {1000000, 1000000, 10, 10, 10 };
    int k = 5;
    MaximunArraySum(arivals, departures, k);
   
}