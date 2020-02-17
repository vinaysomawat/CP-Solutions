#include<bits/stdc++.h>
using namespace std;

typedef
struct lnode{
    int data;
    struct lnode *next;
}*lptr;

lptr l;

void insert(lptr l, int d)
{
    lptr t=l;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=new struct lnode;
	t=t->next;
	t->data=d;
	t->next=NULL;
}

void print(lptr &l)
{
    while(l!=NULL)
    {
        cout<<l->data<<" ";
        l = l->next;
    }
}
int main()
{
    lptr l;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        insert(l,data);
    }
    print(l);
    return 0;
}