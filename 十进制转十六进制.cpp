#include "stdio.h" 
int main() 
{ 
int num=0;
int a[100]; 
int i=0; 
int m=0;
int yushu; 
char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
printf("������һ��ʮ����������"); 
scanf("%d",&num); 
while(num>0) 
{ 
yushu=num%16; 
a[i++]=yushu; 
num=num/16; 

} 
printf("ת��Ϊʮ�����Ƶ���Ϊ��0x"); 
for(i=i-1;i>=0;i--)//������� 
{ 
m=a[i];
printf("%c",hex[m]); 

} 
printf("\n"); 
}
