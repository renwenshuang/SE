#include <iostream>
using namespace std;

struct student
{
     int month; //月份
     double eat; //吃饭消费
     double phone; //电话消费
     double book; //买书消费
     double travel; //旅游消费
     double other; //其他消费
     double income; //勤工俭学收入
     double zongzhichu; //当月总支出
}stu[12],xf={0,0,0,0,0,0,0,0},wu;

/*录入函数*/
void luru()
{
    cout<<"请输入录入月份：";
    cin>>xf.month;//输入选择的月份
    while(xf.month<1||xf.month>12)//当输入月份不属于1~12时，重新录入
    {
        cout<<"请重新录入月份：";
        cin>>xf.month;
    }
    int n;
    for(int i=0;i<12;i++){
        cout<<"请按顺序输入：（月份_吃饭消费_电话话费_买书花费_旅游花费_其他花费_勤工俭学收入_月总支出）"<<endl;
        cin>>stu[i].month>>stu[i].eat>>stu[i].phone>>stu[i].book>>stu[i].travel>>stu[i].other>>stu[i].income;
        stu[i].zongzhichu=stu[i].eat+stu[i].phone+stu[i].book+stu[i].travel+stu[i].other;
        cout<<"月总支出为:"<<stu[n].zongzhichu<<endl;
    }
}

/*查询函数定义*/
void chaxun()
{
    cout<<"请输入需要查询的月份："<<endl;
    cin>>xf.month;//输入选择的月份
    cout<<"*********当月的各项消费信息如下**********"<<endl;
    cout<<"吃饭"<<'\t'<<"电话"<<'\t'<<"买书"<<'\t'<<"旅游"<<'\t'<<"其他"<<'\t'<<"收入"<<'\t'<<"总支出"<<'\t'<<'\n';
    for(int i=0;i<12;i++)//查询选择的月份
    if(xf.month==stu[i].month)
        cout<<stu[i].eat<<'\t'<<stu[i].phone<<'\t'<<stu[i].book<<'\t'<<stu[i].travel<<'\t'<<stu[i].other<<'\t'<<stu[i].income<<'\t'<<stu[i].zongzhichu<<'\t'<<endl; //输出查询的月份的数据
}
void shanchu()//删除函数定义
{
     int month;
     cout<<"请输入要删除的月份:";
     cin>>month; //删除选择的月份
     for(int i=0;i<12;i++)
       if(month==stu[i].month) //如果有对应的月份，继续执行
            stu[i]=wu;//进行删除
     cout<<"删除完成"<<endl;
}
void xiugai(student stu[])//修改函数定义
{
     int n=12,j;
     cout<<"请输入修改的月份：";
     cin>>j; //输入要修改的月份
     for(int m=0;m<n;m++)
     {
      if(stu[m].month==j) //如果输入的月份在0~12之间，继续执行
      {
           cout<<"\0"<<endl;
           cout<<"请修改吃饭消费："<<endl;
           cin>>stu[m].eat; //输入新的吃饭消费数据
           cout<<"请修改电话消费:"<<endl;
           cin>>stu[m].phone; //输入新的电话消费数据
           cout<<"请修改买书消费："<<endl;
           cin>>stu[m].book; //输入新的买书消费
           cout<<"请修改旅游消费："<<endl;
           cin>>stu[m].travel; //输入新的旅游消费
           cout<<"请修改其他消费："<<endl;
           cin>>stu[m].other; //输入新的其他消费数据
           cout<<"请修改勤工收入："<<endl;
           cin>>stu[m].income; //输入新的勤工收入数据
      }
 }
}
void paixu(student stu[])//排序函数定义
{
     int m=0,j=0,n=6;
     double t;
     for(m=0;m<n-1;m++)//冒泡法排序
     {
      for(j=0;j<n-m-1;j++)
       if(stu[j].zongzhichu>stu[j+1].zongzhichu)
        {
            t=stu[j].zongzhichu;
         stu[j].zongzhichu=stu[j+1].zongzhichu;
         stu[j+1].zongzhichu=t;
       }
     }
      cout<<"排序完成"<<endl;
}

void tongji()//统计函数定义
{
    double eat=0,phone=0,book=0,travel=0,other=0;
    for(int i=0;i<12;i++)
    {
        eat+=stu[i].eat; //吃饭消费累加
        phone+=stu[i].phone; //电话消费累加
        book+=stu[i].book; //买书消费累加
        travel+=stu[i].travel; //旅游消费累加
        other+=stu[i].other; //其他消费累加
    }
    cout<<"吃饭总消费"<<" "<<"电话总花费"<<" "<<"买书总花费"<<" "<<"旅游总花费"<<" "<<"其它总花费"<<endl;
    cout<<" "<<eat<<"  "<<phone<<"  "<<book<<"  "<<travel<<"  "<<other<<endl;
}
 void liulan()//浏览函数定义
 {
    int i;
    cout<<"月份"<<" "<<"吃饭消费"<<" "<<"电话话费"<<" "<<"买书花费"<<" "<<"旅游花费"<<" "<<"其它花费"<<" "<<"勤工俭学收入"<<" "<<"月总支出"<<endl;

    for(i=0;i<12;i++)
        cout<<stu[i].month<<"  "<<stu[i].eat<<"  "<<stu[i].phone<<"  "<<stu[i].book<<"  "<<stu[i].travel<<"  "<<stu[i].other<<"  "<<stu[i].income<<"  "<<stu[i].zongzhichu<<"  "<<endl;
 }
 int main()
{
     int m;
     do          //使用do-while语句进行主菜单的输出
     {
          cout<<"*****欢迎使用大学生个人消费信息管理系统*****"<<endl;
          cout<<"************录入消费记录，请选1*************"<<endl;
          cout<<"************查询消费记录，请选2*************"<<endl;
          cout<<"************删除消费记录，请选3*************"<<endl;
          cout<<"************修改消费记录，请选4*************"<<endl;
          cout<<"************排序消费记录，请选5*************"<<endl;
          cout<<"************统计消费记录，请选6*************"<<endl;
          cout<<"************浏览消费记录，请选7*************"<<endl;
          cout<<"**************退出系统，请选0***************"<<endl;  cout<<endl;
          cout<<"请选择："<<endl;
          cin>>m;
          switch(m)//选择功能
          {
              case 1:luru();break;
              case 2:chaxun();break;
              case 3:shanchu();break;
              case 4:xiugai(stu);break;
              case 5:paixu(stu);break;
              case 6:tongji();break;
              case 7:liulan();break;
              case 0:break;
              default:cout<<"输入有误!"<<endl;
            }
     }while(m!=0);
     return 0;
}


