#include <iostream>
#include <cstddef>
using  namespace std;  
class CMemCheck	 
{
  private:
	static int blocks;
  public:
    CMemCheck()
    {
      cout << "Memory logging started ..." << endl;
    }
    ~CMemCheck()
    {
      cout << blocks << " blocks not deleted!!!";
      cout << (blocks ? " - check your program!!!" : " - OK") << endl;
    }
    friend class CDyn;
};	
int CMemCheck::blocks = 0;
class CDyn		
{
  private:
    int data;
  public:
    void *operator new(size_t size)
    {
      ++ CMemCheck::blocks;
      return ::new CDyn;
    }
    void operator delete(void *p)
    {
      if(p)
      {
        ::delete (CDyn*)p;
        -- CMemCheck::blocks;            
      }
      else
        cout << "Delete with NULL!!!!!" << endl;
    }
};

int main()
{
  {
     CMemCheck Memorylogging;  		
     CDyn * nix = 0;
     new CDyn;    					
     delete new CDyn;   
     delete nix;	
  }
  cin.peek();
  return 0;
}

