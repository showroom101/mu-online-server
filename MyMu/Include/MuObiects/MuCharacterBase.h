#ifndef MUCHARACTERBASE_H_
#define MUCHARACTERBASE_H_
#include <string>
enum CharacterClass
  {
    ch_Dk=0x01<<0,
    ch_Bk=0x01<<1,
    ch_Dw=0x01<<2,
    ch_Sm=0x01<<3,
    ch_El=0x01<<4,
    ch_Ml=0x01<<5,
    ch_Mg=0x01<<6,
    ch_Dl=0x01<<8
  };

class MuCharacterBase
{
  std::string   ch_name;			//moj nik
  int 		ch_class;			//klasa
  int 		ch_lvl;				//lvl
  bool 		ch_new;				//czy postac nowa
protected:
  void setAll(std::string name,int clas,int lvl=1,bool n=true)
  {
    ch_name=name;
    ch_class=clas;
    ch_lvl=lvl;
    ch_new=n;
  }
public:
  MuCharacterBase(){};
  MuCharacterBase(std::string name,int clas,int lvl=1,bool n=true)
    :ch_name(name),ch_class(clas),ch_lvl(lvl),ch_new(n){};
  virtual ~MuCharacterBase(){};
  std::string getName()	{return ch_name;};
  int getClass()			{return ch_class;};
  int getLvl()			{return ch_lvl;};
  bool getChNew()			{return ch_new;};
  void setName(std::string n){ch_name=n;};
  void setLvl(int lvl)	{ch_lvl=lvl;};
  void setClass(int cl)	{ch_class=cl;};
  void etChNew(bool n)	{ch_new=n;};
  void Set(MuCharacterBase *b)
  {
    ch_name=b->getName();
    ch_class=b->getClass();
    ch_lvl=b->getLvl();
    ch_new=b->getChNew();
  };

  //KALKULACJE DLA KLAS


};

#endif /*MUCHARACTERBASE_H_*/
