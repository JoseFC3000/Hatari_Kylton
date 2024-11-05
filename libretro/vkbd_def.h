#ifndef VKBD_DEF_H
#define VKBD_DEF_H 1

typedef struct {
	char norml[NLETT];
	char shift[NLETT];
	int val;	
} Mvk;

Mvk MVk[NPLGN*NLIGN*2]={

	{ "F1" ,"F1"  ,59},
	{ "F2" ,"F2"  ,60},
	{ "F3" ,"F3"  ,61}, //30
	{ "F4" ,"F4"  ,62},
	{ "F5" ,"F5"  ,63},
	{ "F6" ,"F6"  ,64},
	{ "F7" ,"F7"  ,65},
	{ "F8" ,"F8"  ,66},	
	{ "F9" ,"F9"  ,67},
	{ "F10","F10" ,68},

	{ " 1" ," !"  ,2 }, //40
	{ " 2" ," \"" ,3 },
	{ " 3" ," 3"  ,4 },
	{ " 4" ," $"  ,5 },
	{ " 5" ," %"  ,6 },
	{ " 6" ," ^"  ,7 },
	{ " 7" ," &"  ,8 },
	{ " 8" ," *"  ,9 },
	{ " 9" ," ("  ,10},
	{ " 0" ," )"  ,11},

	{ " q" ," Q"  ,16},
	{ " w" ," W"  ,17},
	{ " e" ," E"  ,18},
	{ " r" ," R"  ,19},
	{ " t" ," T"  ,20},
	{ " y" ," Y"  ,21},
	{ " u" ," U"  ,22},
	{ " i" ," I"  ,23},
	{ " o" ," O"  ,24}, //10
	{ " p" ," P"  ,25},

	{ "SHF","SHF" ,42},
	{ " a" ," A"  ,30},
	{ " s" ," S"  ,31},
	{ " d" ," D"  ,32},
	{ " f" ," F"  ,33},
	{ " g" ," G"  ,34},
	{ " h" ," H"  ,35},
	{ " j" ," J"  ,36},
	{ " k" ," K"  ,37},
	{ " l" ," L"  ,38}, //20

	{ "PG2","PG2" ,-2}, //50

	{ " z" ," Z"  ,44},
	{ " x" ," X"  ,45},
	{ " c" ," C"  ,46},
	{ " v" ," V"  ,47},
	{ " b" ," B"  ,48},
	{ " n" ," N"  ,49},
	{ " m" ," M"  ,50},
	{ "Ent" ,"Ent",28},
	{ "Spc" ,"Spc",57},

	


	{ "Esc","Esc" ,1 },
    	{ "Cps","Cps" ,58}, //70
	{ "F11","F11" ,87},
	{ "F12","F12" ,88},

	{ " `" ," `"  ,41}, 
	{ " -" ," _"  ,12},
	{ " =" ," +"  ,13},
	{ "Bks" ,"Bks",14},
	{ "Scr" ,"Scr",70},
	{ "Pse" ,"Pse",69},
	{ "Ins" ,"Ins",82},
	{ "Hme" ,"Hme",71},
	{ "PgU" ,"PgU",73},

	{ "Tab" ,"Tab",15}, //60	
	{ " ["  ," {" ,26},
	{ " ]"  ," }" ,27},
	{ "Del" ,"Del",83},
	{ "End" ,"End",79},
	{ "PgD" ,"PgD",81},
	{ " \\" ," |" ,86},	
	{ "Dw"  ,"Dw" ,80},	
	
	{ " ;"  ," :" ,39},
	{ " '"  ," @" ,40},
	{ " #"  ," ~" ,43},
	{ "Ctr" ,"Ctr",29},
	{ "Alt" ,"Alt",56},
	{ "Lft" ," 4" ,75},
	{ "Up"  ," 8" ,72},
	{ "Rgt" ," 6" ,77},
	{ " ,"  ," <" ,51}, //80

	{ " ."  ," >" ,52},
	{ " /"  ," ?" ,53},
	{ " |"  ," ^" ,54},
	{ "Num" ,"Num",69},
	{ " /"  ," /" ,53},
	{ " *"  ," *" ,55},
	{ " -"  ," -" ,74},
	{ "Hme" ," 7" ,71},
	{ " ^"  ," Y" ,72},
	{ "PgU" ," U" ,73}, //90

	{ "PG2" ,"PG2",-2}, //50
	{ " +"  ," I" ,78},
	{ " 4"  ,"Lft",75},
	{ " 5"  ," 5" ,76},
	{ " 6"  ,"Rgt",77},
	{ " 1"  ,"End",79},
	{ "Sta" ,"Sta",-5},
	{ "Col" ,"Col",-3},
	{ "Ent" ,"Ent",28},
	{ "Kbd" ,"Kbd",-4},

} ;

#endif
