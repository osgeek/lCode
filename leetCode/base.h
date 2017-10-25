#ifndef BASE_H
#define BASE_H

class Base(){
	private base_i = 1;
	protected base_j = 2;
	public base_k = 3;

	Base()
	{
		cout<<"I am Base"<<endl;
	}
public:
	doSomeThing(int i)
	{
		i++;
		cout<<"base doSomeThing"<<endl;
		cout<<i<<endl;
	}
};
























#endif