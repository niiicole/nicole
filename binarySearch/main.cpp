#include"main.h"

int main()
{
    // cout<<"hello"<<endl;
    // int n =0;
    // cout<<"请输入arr元素个数: "<<endl;
    // cin>>n;

    // int input=0;
    // vector<int> arr(n);
    // cout<<"请输入arr元素,空格分隔"<<endl;

    // for(int i=0;i<n;i++)
    // {
    //     cin>>input;
    //     arr[i] = input;
    // }

    // cout<<"arr:";
    // printArray(arr);

    // int target =0;
    // cout<<"请输入target: "<<endl;
    // cin>>target;

    vector<int> arr ={0,1,3,5,7,9,10};
    int target =10;
    int output = binarySearch(arr,target);

    cout<<"查询结果为: "<<output<<endl;

}