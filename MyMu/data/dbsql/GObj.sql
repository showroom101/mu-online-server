
create table IF Not Exists GObj(
	GObjId int  Not Null, 			
	GObjName varchar(10) Null default 'Unknown', 	
	GObjLvl int  not null default 1, 		
	GObjLive int  not null default 1, 		
	GObjMana int  not null default 1, 		
	GObjStam int  not null default 1 , 		
	GObjMagicDevense int not null default 1, 	
	GObjAtackSuccesRate int  not null default 1,
	GObjDevenseSuccesRate int  not null default 1, 
	GObjAttackType int  not null default 1 , 	
	GObjAttackRange int  not null default 1,	
	GObjMoveRange int  not null default 1, 	
	GObjMoveSpeed int  not null default 1, 	
	GObjViewRange int  not null default 1, 	
	GObjRespownTime int  not null default 1, 	
	GObjItemDropRate int  not null default 1, 	
	GObjMaxItemDreopLvl int  not null default 1,
	GObjMonyDropRAte int  not null default 1, 	
	GObjWindResist int  not null default 1, 	
	GObjPoisonResist int  not null default 1, 	
	GObjIceResist int  not null default 1, 	
	GObjElectricResist int  not null default 1, 
	GObjFireResist int  not null default 1, 	
PRIMAry kEY (GObjId)
) ENgine=myISAM;
