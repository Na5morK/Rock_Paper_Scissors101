#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int c=0;
string name[] {"Kamen","NoHHnicu","Bumaga","Yasherica","Spoc","Kolobok", "Nosorog","Java","Sopli","Pidor","Zima","Sanya","LSD","Matematika","Ershic","Andrei","Volvo","Zabor","Tigar-Lev","George Washington","morkovka","Nacist","Bomba","Korol","Ment","Prostimya","Ultrazvuk","Altai","Lobkovie Volosi","Uragan","Terminator","Shluha","Chervyak","Mariya Ivanovna","Anonim","Hleb","Alkash","Mecheny","Kostromskaya Oblast","Priora","Nastya","Koshka","Tok","Bomjara","Meteorit","Jopa","Asus","Romashka","Icloud","Shishka","BMW","Luna","NasVai","Vietnam","Shkolnic","Kasha iz govna i gvozdei","Petr I","Pikachy","Volk","McGregor","Mama (ne tvoya)","Poezia","Nachalnik","Truba","Portret","Yanvar","Bol","Shena","Mer","Porog","Hvost Turbozavra","Flamingo","Selo","Gazeta","Babki","Pismo","Rak legkih","Bykva","137i Arteleriisky polk","Baba Yaga","Gopnic","Stomatolog","Sin maminoi podrygi","Kolya s sishkoi","Respublika Tatarstan","Nalogi","Detdomovec","Tancor","Kaktus","Halk","Prishepka","Samurai Jack","Sosiska","FSKN","Pyatyorochka","Spaklevka","Heinz","Roza","Kokush Andrei Vladimirovich","Wiskey","Sneg"};

void logic (int b, int a)
{
if ((b-a)<((a+c)-b)) 
cout<<  "\t\t\t"<< name[a-1]<<" win!\n";
else cout<<  "\t\t\t"<< name[b-1]<<" win!\n";
}

void show(int c)
{
	for(int i=0;i<c;i++)
		cout<<"\t\t\t"<<i+1<<((i+1>9)? " ": "  ")<<name[i]<<"\n";
}

int main() 
{
int a,b,e=2;
srand(time(NULL));
while(e>=1)
{
	if(e==2)
	{
   cout<<"\t\t\tAll Roles:\n";
   show((sizeof(name)/sizeof(string)));
   cout<<"How much roles you want?\n(only odd value. since 3 to "<<  (sizeof(name)/sizeof(string)) <<")\n";
   cin>>c;
   if ((c%2==0) || (c<3) || (c>(sizeof(name)/sizeof(string))))
   {cout<<"Fuck off\n";}
    }
   if (!((c%2==0) || (c<3) || (c>(sizeof(name)/sizeof(string)))))
   {
      cout<<"Your value man \n";
      cin>>a;
      if ((a>c) || (a<=0)) cout<< "Your value is wrong\n";
      else {
	      b=(rand()%c+1);
          cout<< "\t\t\t"<<name[a-1] << " vs " << name[b-1] << endl; 
          if(a>b)
          logic(a,b);
          if(b>a)
          logic(b,a);
          if (a==b) cout<<"\t\t\tAgane! \n";
       }
   }
cout<<"\t\t\tTry agane?\n\t\t\t1 - Yes, agane!\n\t\t\t2 - Choose new roles\n\t\t\t0 - No, exit\n";
cin>>e;
}
return 0;
}
