Stack CreateStack( int MaxSize )
{
	Stack p=(Stack)malloc(sizeof(struct SNode));
	p->Data=(ElementType *)malloc(sizeof(ElementType)*MaxSize);
	p->Top1=-1;
	p->Top2=MaxSize;
	p->MaxSize=MaxSize;
	return p;
}
bool Push( Stack S, ElementType X, int Tag )
{
	if(S==NULL) return false;
	if(S->Top1+1==S->Top2)
	{
		printf("Stack Full\n");
		return false;
	}
	if(Tag==1)
	{
		S->Data[++S->Top1]=X;
	}
	else
	{
		S->Data[--S->Top2]=X;
	}
	return true;
}
ElementType Pop( Stack S, int Tag )
{
	if(Tag==1)
	{
		if(S->Top1==-1)
		{
			printf("Stack 1 Empty\n");
			return ERROR;
		}
		return S->Data[S->Top1--];
		
	}
	else
	{
		if(S->Top2==S->MaxSize)
		{
			printf("Stack 2 Empty\n");
			return ERROR;
		}
		return S->Data[S->Top2++];
	}
}
