#include <iostream>
using namespace std;

struct student
{
     int month; //�·�
     double eat; //�Է�����
     double phone; //�绰����
     double book; //��������
     double travel; //��������
     double other; //��������
     double income; //�ڹ���ѧ����
     double zongzhichu; //������֧��
}stu[12],xf={0,0,0,0,0,0,0,0},wu;

/*¼�뺯��*/
void luru()
{
    cout<<"������¼���·ݣ�";
    cin>>xf.month;//����ѡ����·�
    while(xf.month<1||xf.month>12)//�������·ݲ�����1~12ʱ������¼��
    {
        cout<<"������¼���·ݣ�";
        cin>>xf.month;
    }
    int n;
    for(int i=0;i<12;i++){
        cout<<"�밴˳�����룺���·�_�Է�����_�绰����_���黨��_���λ���_��������_�ڹ���ѧ����_����֧����"<<endl;
        cin>>stu[i].month>>stu[i].eat>>stu[i].phone>>stu[i].book>>stu[i].travel>>stu[i].other>>stu[i].income;
        stu[i].zongzhichu=stu[i].eat+stu[i].phone+stu[i].book+stu[i].travel+stu[i].other;
        cout<<"����֧��Ϊ:"<<stu[n].zongzhichu<<endl;
    }
}

/*��ѯ��������*/
void chaxun()
{
    cout<<"��������Ҫ��ѯ���·ݣ�"<<endl;
    cin>>xf.month;//����ѡ����·�
    cout<<"*********���µĸ���������Ϣ����**********"<<endl;
    cout<<"�Է�"<<'\t'<<"�绰"<<'\t'<<"����"<<'\t'<<"����"<<'\t'<<"����"<<'\t'<<"����"<<'\t'<<"��֧��"<<'\t'<<'\n';
    for(int i=0;i<12;i++)//��ѯѡ����·�
    if(xf.month==stu[i].month)
        cout<<stu[i].eat<<'\t'<<stu[i].phone<<'\t'<<stu[i].book<<'\t'<<stu[i].travel<<'\t'<<stu[i].other<<'\t'<<stu[i].income<<'\t'<<stu[i].zongzhichu<<'\t'<<endl; //�����ѯ���·ݵ�����
}
void shanchu()//ɾ����������
{
     int month;
     cout<<"������Ҫɾ�����·�:";
     cin>>month; //ɾ��ѡ����·�
     for(int i=0;i<12;i++)
       if(month==stu[i].month) //����ж�Ӧ���·ݣ�����ִ��
            stu[i]=wu;//����ɾ��
     cout<<"ɾ�����"<<endl;
}
void xiugai(student stu[])//�޸ĺ�������
{
     int n=12,j;
     cout<<"�������޸ĵ��·ݣ�";
     cin>>j; //����Ҫ�޸ĵ��·�
     for(int m=0;m<n;m++)
     {
      if(stu[m].month==j) //���������·���0~12֮�䣬����ִ��
      {
           cout<<"\0"<<endl;
           cout<<"���޸ĳԷ����ѣ�"<<endl;
           cin>>stu[m].eat; //�����µĳԷ���������
           cout<<"���޸ĵ绰����:"<<endl;
           cin>>stu[m].phone; //�����µĵ绰��������
           cout<<"���޸��������ѣ�"<<endl;
           cin>>stu[m].book; //�����µ���������
           cout<<"���޸��������ѣ�"<<endl;
           cin>>stu[m].travel; //�����µ���������
           cout<<"���޸��������ѣ�"<<endl;
           cin>>stu[m].other; //�����µ�������������
           cout<<"���޸��ڹ����룺"<<endl;
           cin>>stu[m].income; //�����µ��ڹ���������
      }
 }
}
void paixu(student stu[])//����������
{
     int m=0,j=0,n=6;
     double t;
     for(m=0;m<n-1;m++)//ð�ݷ�����
     {
      for(j=0;j<n-m-1;j++)
       if(stu[j].zongzhichu>stu[j+1].zongzhichu)
        {
            t=stu[j].zongzhichu;
         stu[j].zongzhichu=stu[j+1].zongzhichu;
         stu[j+1].zongzhichu=t;
       }
     }
      cout<<"�������"<<endl;
}

void tongji()//ͳ�ƺ�������
{
    double eat=0,phone=0,book=0,travel=0,other=0;
    for(int i=0;i<12;i++)
    {
        eat+=stu[i].eat; //�Է������ۼ�
        phone+=stu[i].phone; //�绰�����ۼ�
        book+=stu[i].book; //���������ۼ�
        travel+=stu[i].travel; //���������ۼ�
        other+=stu[i].other; //���������ۼ�
    }
    cout<<"�Է�������"<<" "<<"�绰�ܻ���"<<" "<<"�����ܻ���"<<" "<<"�����ܻ���"<<" "<<"�����ܻ���"<<endl;
    cout<<" "<<eat<<"  "<<phone<<"  "<<book<<"  "<<travel<<"  "<<other<<endl;
}
 void liulan()//�����������
 {
    int i;
    cout<<"�·�"<<" "<<"�Է�����"<<" "<<"�绰����"<<" "<<"���黨��"<<" "<<"���λ���"<<" "<<"��������"<<" "<<"�ڹ���ѧ����"<<" "<<"����֧��"<<endl;

    for(i=0;i<12;i++)
        cout<<stu[i].month<<"  "<<stu[i].eat<<"  "<<stu[i].phone<<"  "<<stu[i].book<<"  "<<stu[i].travel<<"  "<<stu[i].other<<"  "<<stu[i].income<<"  "<<stu[i].zongzhichu<<"  "<<endl;
 }
 int main()
{
     int m;
     do          //ʹ��do-while���������˵������
     {
          cout<<"*****��ӭʹ�ô�ѧ������������Ϣ����ϵͳ*****"<<endl;
          cout<<"************¼�����Ѽ�¼����ѡ1*************"<<endl;
          cout<<"************��ѯ���Ѽ�¼����ѡ2*************"<<endl;
          cout<<"************ɾ�����Ѽ�¼����ѡ3*************"<<endl;
          cout<<"************�޸����Ѽ�¼����ѡ4*************"<<endl;
          cout<<"************�������Ѽ�¼����ѡ5*************"<<endl;
          cout<<"************ͳ�����Ѽ�¼����ѡ6*************"<<endl;
          cout<<"************������Ѽ�¼����ѡ7*************"<<endl;
          cout<<"**************�˳�ϵͳ����ѡ0***************"<<endl;  cout<<endl;
          cout<<"��ѡ��"<<endl;
          cin>>m;
          switch(m)//ѡ����
          {
              case 1:luru();break;
              case 2:chaxun();break;
              case 3:shanchu();break;
              case 4:xiugai(stu);break;
              case 5:paixu(stu);break;
              case 6:tongji();break;
              case 7:liulan();break;
              case 0:break;
              default:cout<<"��������!"<<endl;
            }
     }while(m!=0);
     return 0;
}


