#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
	cin>>n>>m;
    if(n==0) printf("%d %d\n%d %d\n%d %d\n%d %d\n",0,1,0,m,0,0,0,m-1);
    else if(m==0) printf("%d %d\n%d %d\n%d %d\n%d %d\n",1,0,n,0,0,0,n-1,0);
    else
    {
        double t1=2.0*sqrt((n*1.0-1)*(n*1.0-1)+m*1.0*m);
        double t2=2.0*sqrt(n*1.0*n+(m*1.0-1)*(m*1.0-1));
        double t3=sqrt(n*n*1.0+m*m*1.0)+n;
        double t4=sqrt(n*n*1.0+m*m*1.0)+m;
        if(t1>=t2&&t1>=t3&&t1>=t4)
        printf("%d %d\n%d %d\n%d %d\n%d %d\n",1,0,n,m,0,0,n-1,m);
        else if(t2>=t1&&t2>=t3&&t3>=t4)
        printf("%d %d\n%d %d\n%d %d\n%d %d\n",0,1,n,m,0,0,n,m-1);
        else if(t3>=t1&&t2>=t1&&t3>=t4)
        printf("%d %d\n%d %d\n%d %d\n%d %d\n",0,0,n,m,0,m,n,0);
        else if(t4>=t1&&t4>=t2&&t4>=t3)
        printf("%d %d\n%d %d\n%d %d\n%d %d\n",0,0,n,m,n,0,0,m);	
    }
	return 0;
}