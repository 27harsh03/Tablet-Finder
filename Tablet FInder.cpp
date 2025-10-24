#include <iostream>
using namespace std;
struct Tablet
{
    int h,w,r,p;
};
int main()
{
    cout<<"\n Enter the details of the tablet: ";
    int n;
    cout<<"\n How many tablets are there? ";
    cin>>n;
    Tablet t[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\n Enter the details for tablet "<<i+1;
        cout<<"\n Enter the Height of tablet: "<<"\n";
        cin>>t[i].h;
        cout<<"\n Enter the width of tablet: "<<"\n";
        cin>>t[i].w;
        cout<<"\n Enter the Price of tablet: "<<"\n";
        cin>>t[i].p;
        cout<<"\n Enter the Resoltuion of tablet: "<<"\n";
        cin>>t[i].r;
    }
    int best_area=0, resoln=0,b,area,index=-1;
    cout<<"\n Enter your budget: ";
    cin>>b;
    for(int i=0;i<n;i++)
    {
        if(b>=t[i].p)
        {
            area=t[i].h*t[i].w;
            if((best_area<area) || (best_area==area && t[i].r>=resoln))
            {
                best_area=area;
                resoln=t[i].r;
                index=i;
            }

        }
    }
    if(index==-1)
    {
        cout<<"\n There is no ideal tablet: ";
    }
    else
        cout<<"\n The best template is at postion: "<<index+1<<" with area: "<<best_area;

}
