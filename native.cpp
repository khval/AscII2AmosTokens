
#include <proto/exec.h>
#include <proto/dos.h>
#include "include/native.h"

struct native nativeList[]={
		{0x0094,"To","",1,272},
		{0x009C,"Not","",1,288},
		{0x00A6,"Swap","",286,1},
		{0x00B0,"Def Fn","",284,1},
		{0x00BC,"Fn","",1,285},
		{0x00C4,"Follow Off","I",1188,1},
		{0x00D4,"Follow","I",1188,1},
		{0x00E0,"Resume Next","I",221,1},
		{0x00F2,"Inkey$","2",1,1257},
		{0x00FE,"Repeat$","22,0",1,1295},
		{0x010E,"Zone$","22,0",1,1297},
		{0x011C,"Border$","22,0",1,1296},
		{0x012C,"Double Buffer","I",841,1},
		{0x0140,"Start","00",1,565},
		{0x014C,"Length","00",1,566},
		{0x015A,"Doke","I0,0",583,1},
		{0x0168,"On Menu Del","I",1363,1},
		{0x017A,"On Menu On","I",1361,1},
		{0x018A,"On Menu Off","I",1362,1},
		{0x019C,"Every On","I",228,1},
		{0x01AA,"Every Off","I",227,1},
		{0x01BA,"Logbase","00",1,839},
		{0x01C8,"Logic","0",1,959},
		{0x01D4,"Logic","00",1,960},
		{0x01DC,"Asc","02",1,1301},
		{0x01E6,"As","I",1188,1188},
		{0x01EE,"Call","I",368,1},
		{0x01F8,"Execall","00",1,596},
		{0x0206,"Gfxcall","00",1,597},
		{0x0214,"Doscall","00",1,598},
		{0x0222,"Intcall","00",1,599},
		{0x0230,"Freeze","I",1048,1},
//		{0x023C,"For","",229,1},
		{0x0246,"Next","",230,1},
//		{0x0250,"Repeat","",233,1},
		{0x025C,"Until","",234,1},
//		{0x0268,"While","",235,1},
		{0x0274,"Wend","",236,1},
//		{0x027E,"Do","",237,1},
		{0x0286,"Loop","",238,1},
//		{0x0290,"Exit If","",240,1},
//		{0x029E,"Exit","",239,1},
		{0x02A8,"Goto","",261,1},
		{0x02B2,"Gosub","",245,1},
//		{0x02BE,"If","",241,1},
//		{0x02C6,"Then","",1,272},
//		{0x02D0,"Else","",243,244},
		{0x02DA,"End If","",271,272},
		{0x02E6,"On Error","",214,1},
		{0x02F4,"On Break Proc","",213,1},
		{0x0308,"On Menu","I0",395,-32768},
//		{0x0316,"On","",262,1},
		{0x031E,"Resume Label","",217,1},
		{0x0330,"Resume","",219,1},
		{0x033C,"Pop Proc","",258,1},
		{0x034A,"Every","I",226,1},
		{0x0356,"Step","",1188,1},
		{0x0360,"Return","I",246,1},
		{0x036C,"Pop","I",247,1},
//		{0x0376,"Procedure","",254,1},
		{0x0386,"Proc","",255,1},
		{0x0390,"End Proc","",257,1},
		{0x039E,"Shared","",283,0},
		{0x03AA,"Global","",283,0},
		{0x03B6,"End","I",135,1},
		{0x03C0,"Stop","I",1202,1},
		{0x03CA,"Param#","0",1,435},
		{0x03D6,"Param$","2",1,541},
		{0x03E2,"Param","0",1,542},
		{0x03EE,"Error","I0",1025,1},
		{0x03FA,"Errn","0",1,501},
//		{0x0404,"Data","",302,1},
		{0x040E,"Read","",303,1},
		{0x0418,"Restore","",306,1},
		{0x0426,"Break Off","I",212,1},
		{0x0436,"Break On","I",211,1},
		{0x0444,"Inc","I",293,1},
		{0x044E,"Dec","I",294,1},
		{0x0458,"Add","I",295,1},
		{0x0462,"Add","I0,0,0t0",296,1},
		{0x046A,"Print #","",315,1},
		{0x0476,"Print","I",317,1},
		{0x0482,"Lprint","I",316,1},
		{0x048E,"Input$","20",1,683},
		{0x049C,"Input$","20,0",1,684},
		{0x04A6,"Using","I",1188,1188},
		{0x04B2,"Input #","",310,1},
		{0x04BE,"Line Input #","",309,1},
		{0x04D0,"Input","I",311,1},
		{0x04DC,"Line Input","I",312,1},
		{0x04EC,"Run","I",168,1},
		{0x04F6,"Run","I2",170,1},
		{0x04FE,"Set Buffers","I",206,1},
		{0x050E,"Mid$","22,0,0",383,-32768},
		{0x051E,"Mid$","22,0",381,-32768},
		{0x0528,"Left$","22,0",377,-32768},
		{0x0536,"Right$","22,0",379,-32768},
		{0x0546,"Flip$","22",1,1278},
		{0x0552,"Chr$","20",1,1283},
		{0x055E,"Space$","20",1,1280},
		{0x056C,"String$","22,0",1,1281},
		{0x057C,"Upper$","22",1,1300},
		{0x058A,"Lower$","22",1,1299},
		{0x0598,"Str$","24",1,505},
		{0x05A4,"Val","02",1,388},
		{0x05AE,"Bin$","20",1,1302},
		{0x05BA,"Bin$","20,0",1,1303},
		{0x05C4,"Hex$","20",1,1304},
		{0x05D0,"Hex$","20,0",1,1305},
		{0x05DA,"Len","02",1,1279},
		{0x05E4,"Instr","02,2",1,1275},
		{0x05F4,"Instr","02,2,0",1,1276},
		{0x0600,"Tab$","2",1,1284},
		{0x060A,"Free","0",1,1256},
		{0x0614,"Varptr","0",1,277},
		{0x0620,"Remember X","I",1248,1},
		{0x0630,"Remember Y","I",1249,1},
		{0x0640,"Dim","I",275,1},
//		{0x064A,"Rem","",205,1},
		{0x0652,"'","",205,1},
		{0x0658,"Sort","I",297,-32768},
		{0x0662,"Match","03,3",-32768,298},
		{0x0670,"Edit","I",209,1},
		{0x067A,"Direct","I",210,1},
		{0x0686,"Rnd","00",1,527},
		{0x0690,"Randomize","I0",529,1},
		{0x06A0,"Sgn","04",1,503},
		{0x06AA,"Abs","44",1,507},
		{0x06B4,"Int","44",1,509},
		{0x06BE,"Radian","I",524,1},
		{0x06CA,"Degree","I",525,1},
		{0x06D6,"Pi#","1",1,532},
		{0x06E0,"Fix","I0",526,1},
		{0x06EA,"Min","00,0",-32768,291},
		{0x06F6,"Max","00,0",-32768,289},
		{0x0702,"Sin","15",1,516},
		{0x070C,"Cos","15",1,517},
		{0x0716,"Tan","15",1,511},
		{0x0720,"Asin","11",1,518},
		{0x072C,"Acos","11",1,519},
		{0x0738,"Atan","11",1,520},
		{0x0744,"Hsin","15",1,521},
		{0x0750,"Hcos","15",1,522},
		{0x075C,"Htan","15",1,523},
		{0x0768,"Sqr","11",1,512},
		{0x0772,"Log","11",1,513},
		{0x077C,"Ln","11",1,514},
		{0x0786,"Exp","11",1,515},
		{0x0790,"Menu To Bank","I0",1365,1},
		{0x07A4,"Bank To Menu","I0",1366,1},
		{0x07B8,"Menu On","I",1367,1},
		{0x07C6,"Menu Off","I",1368,1},
		{0x07D4,"Menu Calc","I",1389,1},
		{0x07E4,"Menu Mouse On","I",1369,1},
		{0x07F8,"Menu Mouse Off","I",1370,1},
		{0x080C,"Menu Base","I0,0",1371,1},
		{0x081E,"Set Menu","I0t0,0",402,-32768},
		{0x0832,"X Menu","00",-32768,1372},
		{0x0832,"X Menu","00,0",-32768,1372},
		{0x0832,"X Menu","00,0,0",-32768,1372},
		{0x0832,"X Menu","00,0,0,0",-32768,1372},
		{0x0840,"Y Menu","00",-32768,1373},
		{0x0840,"Y Menu","00,0",-32768,1373},
		{0x0840,"Y Menu","00,0,0",-32768,1373},
		{0x0840,"Y Menu","00,0,0,0",-32768,1373},
		{0x084E,"Menu Key","I0t0,0",390,-32768},
		{0x0862,"Menu Bar","I0",1376,-32768},
		{0x0872,"Menu Line","I0",1377,-32768},
		{0x0882,"Menu Tline","I0",1378,-32768},
		{0x0894,"Menu Movable","I0",1379,-32768},
		{0x08A8,"Menu Static","I0",1380,-32768},
		{0x08BA,"Menu Item Movable","I0",1381,-32768},
		{0x08D2,"Menu Item Static","I0",1382,-32768},
		{0x08EA,"Menu Active","I0",1383,-32768},
		{0x08FC,"Menu Inactive","I0",1384,-32768},
		{0x0910,"Menu Separate","I0",1385,-32768},
		{0x0924,"Menu Link","I0",1386,-32768},
		{0x0934,"Menu Called","I0",1387,-32768},
		{0x0946,"Menu Once","I0",1388,-32768},
		{0x0956,"Menu Del","I",400,-32768},
		{0x0964,"Menu$","V",396,-32768},
		{0x0970,"Choice","0",1,1374},
		{0x097E,"Choice","00",1,1375},
		{0x0986,"Screen Copy","I0t0",952,1},
		{0x099C,"Screen Copy","I0t00",953,1},
		{0x09A8,"Screen Copy","I0,0,0,0,0t0,0,0",954,1},
		{0x09BE,"Screen Copy","I0,0,0,0,0t0,0,0,0",955,1},
		{0x09D6,"Screen Clone","I0",846,1},
		{0x09EA,"Screen Open","I0,0,0,0,0",847,1},
		{0x0A04,"Screen Close","I0",848,1},
		{0x0A18,"Screen Display","I0,0,0,0,0",849,1},
		{0x0A18,"Screen Display","I0"},		// added used as: Channel 0 To Screen Display 0
		{0x0A36,"Screen Offset","I0,0,0",850,1},
		{0x0A4E,"Screen Size","",1188,1188},
		{0x0A5E,"Screen Colour","0",1,834},
		{0x0A72,"Screen To Front","I",860,1},
		{0x0A88,"Screen To Front","I0",861,1},
		{0x0A90,"Screen To Back","I",862,1},
		{0x0AA6,"Screen To Back","I0",863,1},
		{0x0AAE,"Screen Hide","I",853,1},
		{0x0AC0,"Screen Hide","I0",855,1},
		{0x0AC8,"Screen Show","I",851,1},
		{0x0ADA,"Screen Show","I0",852,1},
		{0x0AE2,"Screen Swap","I",842,1},
		{0x0AF4,"Screen Swap","I0",843,1},
		{0x0AFC,"Save Iff","I2",678,1},
		{0x0B0C,"Save Iff","I2,0",679,1},
		{0x0B16,"View","I",859,1},
		{0x0B20,"Auto View Off","I",858,1},
		{0x0B34,"Auto View On","I",857,1},
		{0x0B46,"Screen Base","0",1,833},
		{0x0B58,"Screen Width","0",1,831},
		{0x0B6C,"Screen Width","00",1,832},
		{0x0B74,"Screen Height","0",1,829},
		{0x0B88,"Screen Height","00",1,830},
		{0x0B90,"Get Palette","I0",877,1},
		{0x0BA4,"Get Palette","I0,0",878,1},
		{0x0BAE,"Cls","I",825,1},
		{0x0BB8,"Cls","I0",826,1},
		{0x0BC0,"Cls","I0,0,0t0,0",827,1},
		{0x0BD0,"Def Scroll","I0,0,0t0,0,0,0",949,1},
		{0x0BEE,"X Hard","00",1,964},
		{0x0BFC,"X Hard","00,0",1,965},
		{0x0C06,"Y Hard","00",1,967},
		{0x0C14,"Y Hard","00,0",1,968},
		{0x0C1E,"X Screen","00",1,970},
		{0x0C2E,"X Screen","00,0",1,971},
		{0x0C38,"Y Screen","00",1,973},
		{0x0C48,"Y Screen","00,0",1,974},
		{0x0C52,"X Text","00",1,976},
		{0x0C60,"Y Text","00",1,977},
		{0x0C6E,"Screen","I0",864,1},
		{0x0C84,"Hires","0",1,867},
		{0x0C90,"Lowres","0",1,868},
		{0x0C9C,"Dual Playfield","I0,0",844,1},
		{0x0CB4,"Dual Priority","I0,0",845,1},
		{0x0CCA,"Wait Vbl","I",538,1},
		{0x0CD8,"Default Palette","I",330,1},
		{0x0CEE,"Default","I",824,1},
		{0x0CFC,"Palette","I",331,1},
		{0x0D0A,"Colour Back","I0",872,1},
		{0x0D1C,"Colour","I0,0}g00",870,1},
		{0x0D34,"Flash Off","I",881,1},
		{0x0D44,"Flash","I0,2",882,1},
		{0x0D52,"Shift Off","I",883,1},
		{0x0D62,"Shift Up","I0,0,0,0",884,1},
		{0x0D78,"Shift Down","I0,0,0,0",885,1},
		{0x0D90,"Set Rainbow","I0,0,0,2,2,2",887,1},
		{0x0DAE,"Set Rainbow","I0,0,0,2,2,2,0",888,1},
		{0x0DC2,"Rainbow Del","I",890,1},
		{0x0DD4,"Rainbow Del","I0",891,1},
		{0x0DDC,"Rainbow","I0,0,0,0",889,1},
		{0x0DF0,"Rain","V00,0",892,893},
		{0x0DFE,"Fade","I",337,1},
		{0x0E08,"Phybase","00",1,840},
		{0x0E16,"Physic","0",1,957},
		{0x0E24,"Physic","00",1,958},
		{0x0E2C,"Autoback","I0",903,1},
		{0x0E3C,"Plot","I0,0",904,1},
		{0x0E4A,"Plot","I0,0,0",905,1},
		{0x0E56,"Point","00,0",1,906},
		{0x0E64,"Draw To","I0,0",908,1},
		{0x0E74,"Draw","I0,0t0,0",909,1},
		{0x0E86,"Ellipse","I0,0,0,0",911,1},
		{0x0E9A,"Circle","I0,0,0",910,1},
		{0x0EAC,"Polyline","I",338,1},
		{0x0EBA,"Polygon","I",339,1},
		{0x0EC8,"Bar","I0,0t0,0",934,1},
		{0x0ED8,"Box","I0,0t0,0",916,1},
		{0x0EE8,"Paint","I0,0",932,1},
		{0x0EF8,"Paint","I0,0,0",933,1},
		{0x0F04,"Gr Locate","I0,0",915,1},
		{0x0F16,"Text Length","02",1,927},
		{0x0F28,"Text Styles","0",1,928},
		{0x0F3A,"Text Base","0",1,926},
		{0x0F4A,"Text","I0,0,2",925,1},
		{0x0F5A,"Set Text","I0",929,1},
		{0x0F6A,"Set Paint","I0",931,1},
		{0x0F7A,"Get Fonts","I",921,1},
		{0x0F8A,"Get Disc Fonts","I",920,1},
		{0x0F9E,"Get Rom Fonts","I",919,1},
		{0x0FB2,"Set Font","I0",924,1},
		{0x0FC2,"Font$","20",1,923},
		{0x0FCE,"Hslider","I0,0t0,0,0,0,0",945,1},
		{0x0FE8,"Vslider","I0,0t0,0,0,0,0",946,1},
		{0x1002,"Set Slider","I0,0,0,0,0,0,0,0",948,1},
		{0x1022,"Set Pattern","I0",930,1},
		{0x1034,"Set Line","I0",944,1},
		{0x1044,"Ink","I0",940,1},
		{0x1050,"Ink","I0,0",941,1},
		{0x105A,"Ink","I0,0,0",942,1},
		{0x1066,"Gr Writing","I0",943,1},
		{0x1078,"Clip","I",917,1},
		{0x1084,"Clip","I0,0t0,0",918,1},
		{0x1092,"Set Tempras","I",936,1},
		{0x10A4,"Set Tempras","I0",935,1},
		{0x10AC,"Set Tempras","I0,0",937,1},
		{0x10B6,"Appear","I0t0,0",961,1},
		{0x10C8,"Appear","I0t0,0,0",962,1},
		{0x10D6,"Zoom","I0,0,0,0,0t0,0,0,0,0",963,1},
		{0x10F4,"Get Cblock","I0,0,0,0,0",996,1},
		{0x110E,"Put Cblock","I0",997,1},
		{0x1120,"Put Cblock","I0,0,0",998,1},
		{0x112C,"Del Cblock","I",999,1},
		{0x113E,"Del Cblock","I0",1000,1},
		{0x1146,"Get Block","I0,0,0,0,0",1001,1},
		{0x1160,"Get Block","I0,0,0,0,0,0",1002,1},
		{0x1172,"Put Block","I0",1003,1},
		{0x1184,"Put Block","I0,0,0",1004,1},
		{0x1190,"Put Block","I0,0,0,0",1005,1},
		{0x119E,"Put Block","I0,0,0,0,0",1006,1},
		{0x11AE,"Del Block","I",1007,1},
		{0x11BE,"Del Block","I0",1008,1},
		{0x11C6,"Key Speed","I0,0",540,1},
		{0x11D8,"Key State","00",1,1260},
		{0x11E8,"Key Shift","0",1,1261},
		{0x11F8,"Joy","00",1,1262},
		{0x1202,"Jup","00",1,1263},
		{0x120C,"Jdown","00",1,1264},
		{0x1218,"Jleft","00",1,1265},
		{0x1224,"Jright","00",1,1266},
		{0x1232,"Fire","00",1,1267},
		{0x123E,"True","0",1,821},
		{0x1248,"False","0",1,823},
		{0x1254,"Put Key","I2",1269,1},
		{0x1262,"Scancode","0",1,1258},
		{0x1270,"Scanshift","0",1,1259},
		{0x1280,"Clear Key","I",1270,1},
		{0x1290,"Wait Key","I",539,1},
		{0x129E,"Wait","I0",533,1},
		{0x12AA,"Key$","V20",1271,1272},
		{0x12B6,"Scan$","20",1,1273},
		{0x12C4,"Scan$","20,0",1,1274},
		{0x12CE,"Timer","V0",530,531},
		{0x12DA,"Wind Open","I0,0,0,0,0",1204,1},
		{0x12F4,"Wind Open","I0,0,0,0,0,0",1205,1},
		{0x1306,"Wind Open","I0,0,0,0,0,0,0",1206,1},
		{0x131A,"Wind Close","I",1210,1},
		{0x132A,"Wind Save","I",1207,1},
		{0x133A,"Wind Move","I0,0",1208,1},
		{0x134C,"Wind Size","I0,0",1209,1},
		{0x135E,"Window","I0",1211,1},
		{0x136C,"Windon","0",1,1212},
		{0x1378,"Locate","I0,0",1222,1},
		{0x1388,"Clw","I",1229,1},
		{0x1392,"Home","I",1230,1},
		{0x139C,"Curs Pen","I0",1225,1},
		{0x13AC,"Pen$","20",1,1290},
		{0x13B8,"Paper$","20",1,1291},
		{0x13C6,"At","20,0",1,1293},
		{0x13D2,"Pen","I0",1227,1},
		{0x13DC,"Paper","I0",1226,1},
		{0x13E8,"Centre","I2",1223,1},
		{0x13F6,"Border","I0,0,0",1215,1},
		{0x1408,"Writing","I0",1213,1},
		{0x1418,"Writing","I0,0",1214,1},
		{0x1422,"Title Top","I2",1216,1},
		{0x1432,"Title Bottom","I2",1217,1},
		{0x1446,"Curs Off","I",1235,1},
		{0x1454,"Curs On","I",1236,1},
		{0x1462,"Inverse Off","I",1238,1},
		{0x1474,"Inverse On","I",1237,1},
		{0x1484,"Under Off","I",1240,1},
		{0x1494,"Under On","I",1239,1},
		{0x14A2,"Shade Off","I",1244,1},
		{0x14B2,"Shade On","I",1243,1},
		{0x14C0,"Scroll Off","I",1242,1},
		{0x14D0,"Scroll On","I",1241,1},
		{0x14E0,"Scroll","I0",950,1},
		{0x14EE,"Cup$","2",1,1287},
		{0x14F8,"Cdown$","2",1,1288},
		{0x1504,"Cleft$","2",1,1285},
		{0x1510,"Cright$","2",1,1286},
		{0x151E,"Cup","I",1233,1},
		{0x1528,"Cdown","I",1234,1},
		{0x1534,"Cleft","I",1231,1},
		{0x1540,"Cright","I",1232,1},
		{0x154C,"Memorize X","I",1246,1},
		{0x155C,"Memorize Y","I",1247,1},
		{0x156C,"Cmove$","20,0",1,1294},
		{0x157C,"Cmove","I0,0",1224,1},
		{0x158A,"Cline","I",1245,1},
		{0x1596,"Cline","I0",1250,1},
		{0x159E,"Hscroll","I0",1251,1},
		{0x15AC,"Vscroll","I0",1252,1},
		{0x15BA,"Set Tab","I0",1254,1},
		{0x15C8,"Set Curs","I0,0,0,0,0,0,0,0",1221,1},
		{0x15E6,"X Curs","0",1,1219},
		{0x15F2,"Y Curs","0",1,1220},
		{0x15FE,"X Graphic","00",1,978},
		{0x160E,"Y Graphic","00",1,979},
		{0x161E,"Xgr","0",1,913},
		{0x1628,"Ygr","0",1,914},
		{0x1632,"Reserve Zone","I",980,1},
		{0x1646,"Reserve Zone","I0",981,1},
		{0x164E,"Reset Zone","I",982,1},
		{0x1660,"Reset Zone","I0",983,1},
		{0x1668,"Set Zone","I0,0,0t0,0",984,1},
		{0x1680,"Zone","00,0",1,985},
		{0x168E,"Zone","00,0,0",1,986},
		{0x169A,"Hzone","00,0",1,988},
		{0x16AA,"Hzone","00,0,0",1,989},
		{0x16B6,"Scin","00,0",1,991},
		{0x16C4,"Scin","00,0,0",1,992},
		{0x16D0,"Mouse Screen","0",1,994},
		{0x16E2,"Mouse Zone","0",1,995},
		{0x16F2,"Set Input","I0,0",682,1},
		{0x1704,"Close Workbench","I",1017,1},
		{0x171A,"Close Editor","I",192,1},
		{0x172C,"Dir First$","22",1,726},
		{0x173E,"Dir Next$","2",1,727},
		{0x174E,"Exist","02",1,729},
		{0x175A,"Dir$","V2",687,688},
		{0x1766,"Ldir/w","I",733,1},
		{0x1774,"Ldir/w","I2",736,1},
		{0x177C,"Dir/w","I",734,1},
		{0x1788,"Dir/w","I2",737,1},
		{0x1790,"Ldir","I",740,1},
		{0x179C,"Ldir","I2",743,1},
		{0x17A4,"Dir","I",741,1},
		{0x17AE,"Dir","I2",744,1},
		{0x17B6,"Set Dir","I0",722,1},
		{0x17C4,"Set Dir","I0,2",721,1},
		{0x17D4,"Load Iff","I2",665,1},
		{0x17E4,"Load Iff","I2,0",666,1},
		{0x17EE,"Mask Iff","I0",663,1},
		{0x17FE,"Picture","0",1,664},
		{0x180C,"Bload","I2,0",661,1},
		{0x181A,"Bsave","I2,0t0",662,1},
		{0x182A,"Pload","I2,0",660,1},
		{0x1838,"Save","I2",652,1},
		{0x1844,"Save","I2,0",651,1},
		{0x184E,"Load","I2",656,1},
		{0x185A,"Load","I2,0",657,1},
		{0x1864,"Dfree","0",1,694},
		{0x1870,"Mkdir","I2",692,1},
		{0x187C,"Lof","00",1,702},
		{0x1886,"Eof","00",1,705},
		{0x1890,"Pof","V00",703,704},
		{0x189C,"Port","00",1,696},
		{0x18A8,"Open Random","I0,2",711,1},
		{0x18BC,"Open In","I0,2",699,1},
		{0x18CC,"Open Out","I0,2",698,1},
		{0x18DE,"Open Port","I0,2",697,1},
		{0x18F0,"Append","I0,2",712,1},
		{0x1900,"Close","I",708,1},
		{0x190C,"Close","I0",707,1},
		{0x1914,"Parent","I",689,1},
		{0x1920,"Rename","I2t2",691,1},
		{0x1930,"Kill","I2",690,1},
		{0x193C,"Drive","02",1,693},
		{0x1948,"Field","I",308,1},
		{0x1954,"Fsel$","22",1,774},
		{0x1962,"Fsel$","22,2",1,775},
		{0x196C,"Fsel$","22,2,2",1,776},
		{0x1978,"Fsel$","22,2,2,2",1,777},
		{0x1986,"Set Sprite Buffer","I0",1122,1},
		{0x199E,"Sprite Off","I",1125,1},
		{0x19B0,"Sprite Off","I0",1126,1},
		{0x19B8,"Sprite Priority","I0",1123,1},
		{0x19CE,"Sprite Update Off","I",1033,1},
		{0x19E6,"Sprite Update On","I",1034,1},
		{0x19FC,"Sprite Update","I",1035,1},
		{0x1A10,"Spritebob Col","00",1,1133},
		{0x1A26,"Spritebob Col","00,0t0",1,1134},
		{0x1A32,"Sprite Col","00",1,1135},
		{0x1A44,"Sprite Col","00,0t0",1,1136},
		{0x1A50,"Set Hardcol","I0,0",1127,1},
		{0x1A64,"Hardcol","00",1,1128},
		{0x1A72,"Sprite Base","00",1,1165},
		{0x1A84,"Icon Base","00",1,1166},
		{0x1A94,"Sprite","I0,0,0,0",1124,1},
		{0x1AA8,"Bob Off","I",1120,1},
		{0x1AB6,"Bob Off","I0",1121,1},
		{0x1ABE,"Bob Update Off","I",1030,1},
		{0x1AD2,"Bob Update On","I",1031,1},
		{0x1AE6,"Bob Update","I",1032,1},
		{0x1AF6,"Bob Clear","I",1037,1},
		{0x1B06,"Bob Draw","I",1038,1},
		{0x1B14,"Bobsprite Col","00",1,1129},
		{0x1B2A,"Bobsprite Col","00,0t0",1,1130},
		{0x1B36,"Bob Col","00",1,1131},
		{0x1B46,"Bob Col","00,0t0",1,1132},
		{0x1B52,"Col","00",1,1137},
		{0x1B5C,"Limit Bob","I",1039,1},
		{0x1B6C,"Limit Bob","I0,0t0,0",1040,1},
		{0x1B7A,"Limit Bob","I0,0,0t0,0",1041,1},
		{0x1B8A,"Set Bob","I0,0,0,0",1118,1},
		{0x1B9E,"Bob","I0,0,0,0",1119,1},
		{0x1BAE,"Get Sprite Palette","I",875,1},
		{0x1BC8,"Get Sprite Palette","I0",876,1},
		{0x1BD0,"Get Sprite","I0,0,0t0,0",1152,1},
		{0x1BEA,"Get Sprite","I0,0,0,0t0,0",1151,1},
		{0x1BFC,"Get Bob","I0,0,0t0,0",1152,1},
		{0x1C14,"Get Bob","I0,0,0,0t0,0",1151,1},
		{0x1C26,"Del Sprite","I0",556,1},
		{0x1C38,"Del Sprite","I0t0",557,1},
		{0x1C42,"Del Bob","I0",556,1},
		{0x1C52,"Del Bob","I0t0",557,1},
		{0x1C5C,"Del Icon","I0",554,1},
		{0x1C6C,"Del Icon","I0t0",555,1},
		{0x1C76,"Ins Sprite","I0",552,1},
		{0x1C88,"Ins Bob","I0",552,1},
		{0x1C96,"Ins Icon","I0",553,1},
		{0x1CA6,"Get Icon Palette","I",873,1},
		{0x1CBE,"Get Icon Palette","I0",874,1},
		{0x1CC6,"Get Icon","I0,0,0t0,0",1155,1},
		{0x1CDE,"Get Icon","I0,0,0,0t0,0",1154,1},
		{0x1CF0,"Put Bob","I0",1158,1},
		{0x1CFE,"Paste Bob","I0,0,0",1162,1},
		{0x1D12,"Paste Icon","I0,0,0",1163,1},
		{0x1D28,"Make Mask","I",1142,1},
		{0x1D38,"Make Mask","I0",1143,1},
		{0x1D40,"No Mask","I",1145,1},
		{0x1D4E,"No Mask","I0",1146,1},
		{0x1D56,"Make Icon Mask","I",1138,1},
		{0x1D6C,"Make Icon Mask","I0",1139,1},
		{0x1D74,"No Icon Mask","I",1140,1},
		{0x1D88,"No Icon Mask","I0",1141,1},
		{0x1D90,"Hot Spot","I0,0",1149,1},
		{0x1DA2,"Hot Spot","I0,0,0",1148,1},
		{0x1DAE,"Priority On","I",1042,1},
		{0x1DC0,"Priority Off","I",1043,1},
		{0x1DD2,"Hide On","I",1110,1},
		{0x1DE0,"Hide","I",1109,1},
		{0x1DEA,"Show On","I",1112,1},
		{0x1DF8,"Show","I",1111,1},
		{0x1E02,"Change Mouse","I0",1117,1},
		{0x1E16,"X Mouse","V0",1103,1104},
		{0x1E24,"Y Mouse","V0",1105,1106},
		{0x1E32,"Mouse Key","0",1,1107},
		{0x1E42,"Mouse Click","0",1,1108},
		{0x1E54,"Limit Mouse","I",1113,1},
		{0x1E66,"Limit Mouse","I0",1114,1},
		{0x1E6E,"Limit Mouse","I0,0t0,0",1116,1},
		{0x1E7C,"Unfreeze","I",1049,1},
		{0x1E8A,"Move X","I0,3",1078,1},
		{0x1E9A,"Move X","I0,2t0",1073,1},
		{0x1EA6,"Move Y","I0,3",1079,1},
		{0x1EB6,"Move Y","I0,2t0",1074,1},
		{0x1EC2,"Move Off","I",1058,1},
		{0x1ED2,"Move Off","I0",1068,1},
		{0x1EDA,"Move On","I",1056,1},
		{0x1EE8,"Move On","I0",1066,1},
		{0x1EF0,"Move Freeze","I",1060,1},
		{0x1F02,"Move Freeze","I0",1070,1},
		{0x1F0A,"Anim Off","I",1059,1},
		{0x1F1A,"Anim Off","I0",1069,1},
		{0x1F22,"Anim On","I",1057,1},
		{0x1F30,"Anim On","I0",1067,1},
		{0x1F38,"Anim Freeze","I",1061,1},
		{0x1F4A,"Anim Freeze","I0",1071,1},
		{0x1F52,"Anim","I0,3",1081,1},
		{0x1F60,"Anim","I0,2t0",1075,1},
		{0x1F6C,"Movon","00",1,1084},
		{0x1F78,"Chanan","00",1,1085},
		{0x1F86,"Chanmv","00",1,1086},
		{0x1F94,"Channel","I",346,1},
		{0x1FA2,"Amreg","V00",1088,1089},
		{0x1FB0,"Amreg","V00,0",1090,1091},
		{0x1FBC,"Amal On","I",1053,1},
		{0x1FCA,"Amal On","I0",1063,1},
		{0x1FD2,"Amal Off","I",1054,1},
		{0x1FE2,"Amal Off","I0",1064,1},
		{0x1FEA,"Amal Freeze","I",1055,1},
		{0x1FFC,"Amal Freeze","I0",1065,1},
		{0x2004,"Amalerr","0",1,1047},
		{0x2012,"Amal","I0,3",1080,1},
		{0x2020,"Amal","I0,2t0",1076,1},
		{0x202C,"Amplay","I0,0",1095,1},
		{0x203C,"Amplay","I0,0,0t0",1096,1},
		{0x204A,"Synchro On","I",1050,1},
		{0x205A,"Synchro Off","I",1051,1},
		{0x206C,"Synchro","I",1052,1},
		{0x207A,"Update Off","I",1027,1},
		{0x208A,"Update On","I",1028,1},
		{0x209A,"Update Every","I0",1036,1},
		{0x20AE,"Update","I",1029,1},
		{0x20BA,"X Bob","00",1,1097},
		{0x20C6,"Y Bob","00",1,1098},
		{0x20D2,"X Sprite","00",1,1099},
		{0x20E2,"Y Sprite","00",1,1100},
		{0x20F2,"Reserve As Work","I0,0",559,1},
		{0x210A,"Reserve As Chip Work","I0,0",560,1},
		{0x2128,"Reserve As Data","I0,0",561,1},
		{0x2140,"Reserve As Chip Data","I0,0",562,1},
		{0x215E,"Erase","I0",544,1},
		{0x216A,"List Bank","I",543,1},
		{0x217A,"Chip Free","0",1,567},
		{0x218A,"Fast Free","0",1,568},
		{0x219A,"Fill","I0t0,0",572,1},
		{0x21AA,"Copy","I0,0t0",571,1},
		{0x21BA,"Hunt","00t0,2",1,574},
		{0x21CA,"Poke","I0,0",582,1},
		{0x21D8,"Loke","I0,0",584,1},
		{0x21E6,"Peek","00",1,585},
		{0x21F2,"Deek","00",1,586},
		{0x21FE,"Leek","00",1,587},
		{0x220A,"Bset","I0,0",347,-32768},
		{0x2218,"Bclr","I0,0",349,-32768},
		{0x2226,"Bchg","I0,0",351,-32768},
		{0x2234,"Btst","00,0",-32768,353},
		{0x2242,"Ror.b","I0,0",355,-32768},
		{0x2250,"Ror.w","I0,0",357,-32768},
		{0x225E,"Ror.l","I0,0",359,-32768},
		{0x226C,"Rol.b","I0,0",361,-32768},
		{0x227A,"Rol.w","I0,0",363,-32768},
		{0x2288,"Rol.l","I0,0",365,-32768},
		{0x2296,"Areg","V00",575,576},
		{0x22A2,"Dreg","V00",577,578},
		{0x22AE,"Copper On","I",894,1},
		{0x22BE,"Copper Off","I",895,1},
		{0x22CE,"Cop Swap","I",896,1},
		{0x22DC,"Cop Reset","I",897,1},
		{0x22EC,"Cop Wait","I0,0",898,1},
		{0x22FE,"Cop Wait","I0,0,0,0",899,1},
		{0x230C,"Cop Movel","I0,0",901,1},
		{0x231E,"Cop Move","I0,0",900,1},
		{0x2330,"Cop Logic","0",1,902},
		{0x2340,"Prg First$","22",1,723},
		{0x2352,"Prg Next$","2",1,727},
		{0x2362,"Psel$","22",1,773},
		{0x2370,"Psel$","22,2",1,773},
		{0x237A,"Psel$","22,2,2",1,773},
		{0x2386,"Psel$","22,2,2,2",1,773},
		{0x2394,"Prun","I2",172,1},
		{0x23A0,"Bgrab","I0",550,1},
		{0x23AC,"Put","I0,0",715,1},
		{0x23B8,"Get","I0,0",714,1},
		{0x23C4,"System","I",208,1},
		{0x23D0,"Multi Wait","I",537,1},
		{0x23E0,"I Bob","00",1,1101},
		{0x23EC,"I Sprite","00",1,1102},
		{0x23FC,"Priority Reverse On","I",1044,1},
		{0x2416,"Priority Reverse Off","I",1045,1},
		{0x2430,"Dev First$","22",1,724},
		{0x2442,"Dev Next$","2",1,727},
		{0x2452,"Hrev Block","I0",1009,1},
		{0x2464,"Vrev Block","I0",1010,1},
		{0x2476,"Hrev","00",1,1159},
		{0x2482,"Vrev","00",1,1160},
		{0x248E,"Rev","00",1,1161},
		{0x2498,"Bank Swap","I0,0",547,1},
		{0x24AA,"Amos To Front","I",1018,1},
		{0x24BE,"Amos To Back","I",1019,1},
		{0x24D0,"Amos Here","0",1,1020},
		{0x24E0,"Amos Lock","I",1021,1},
		{0x24F0,"Amos Unlock","I",1022,1},
		{0x2502,"Display Height","0",1,837},
		{0x2516,"Ntsc","0",1,838},
		{0x2520,"Laced","0",1,866},
		{0x252C,"Prg State","0",1,202},
		{0x253C,"Command Line$","V2",795,796},
		{0x2550,"Disc Info$","22",1,695},
		{0x2578,"Set Accessory","I",271,1},
		{0x259A,"Trap","I",222,1},
//		{0x25A4,"Else If","",243,1},
		{0x25B2,"Include","I2",1,1},
		{0x25C0,"Array","03",-32768,278},
		{0x25CC,"Frame Load","00t0",1,667},
		{0x25E0,"Frame Load","00t0,0",1,668},
		{0x25EC,"Frame Play","00,0",1,671},
		{0x2600,"Frame Play","00,0,0",1,672},
		{0x260C,"Iff Anim","I2t0",675,1},
		{0x261E,"Iff Anim","I2t0,0",676,1},
		{0x262A,"Frame Length","00",1,669},
		{0x263E,"Frame Length","00,0",1,670},
		{0x2648,"Frame Skip","00",1,673},
		{0x265A,"Frame Skip","00,0",1,674},
		{0x2664,"Frame Param","0",1,677},
		{0x2676,"Call Editor","I0",180,1},
		{0x268A,"Call Editor","I0,0",182,1},
		{0x2694,"Call Editor","I0,0,2",184,1},
		{0x26A0,"Ask Editor","I0",174,1},
		{0x26B2,"Ask Editor","I0,0",176,1},
		{0x26BC,"Ask Editor","I0,0,2",178,1},
		{0x26C8,"Erase Temp","I",545,1},
		{0x26D8,"Erase All","I",546,1},
		{0x26E8,"Dialog Box","03",1,1337},
		{0x26FA,"Dialog Box","03,0",1,1338},
		{0x2704,"Dialog Box","03,0,2",1,1339},
		{0x2710,"Dialog Box","03,0,2,0,0",1,1340},
		{0x2720,"Dialog Open","I0,3",1308,1},
		{0x2736,"Dialog Open","I0,3,0",1309,1},
		{0x2742,"Dialog Open","I0,3,0,0",1310,1},
		{0x2750,"Dialog Close","I",1313,1},
		{0x2764,"Dialog Close","I0",1314,1},
		{0x276C,"Dialog Run","00",1,1324},
		{0x277E,"Dialog Run","00,0",1,1325},
		{0x2788,"Dialog Run","00,0,0,0",1,1326},
		{0x2796,"Dialog","00",1,1327},
		{0x27A4,"Vdialog","V00,0",1328,1329},
		{0x27B6,"Vdialog$","V20,0",1330,1331},
		{0x27C8,"Rdialog","00,0",1,1332},
		{0x27DA,"Rdialog","00,0,0",1,1333},
		{0x27E6,"Rdialog$","20,0",1,1334},
		{0x27F8,"Rdialog$","20,0,0",1,1335},
		{0x2804,"Edialog","0",1,1312},
		{0x2812,"Dialog Clr","I0",1315,1},
		{0x2824,"Dialog Update","I0,0",1320,1},
		{0x283C,"Dialog Update","I0,0,3",1321,1},
		{0x2848,"Dialog Update","I0,0,3,0",1322,1},
		{0x2856,"Dialog Update","I0,0,3,0,0",1323,1},
		{0x2866,"Dialog Freeze","I",1316,1},
		{0x287A,"Dialog Freeze","I0",1317,1},
		{0x2882,"Dialog Unfreeze","I",1318,1},
		{0x2898,"Dialog Unfreeze","I0",1319,1},
		{0x28A0,"Poke$","I0,2",588,1},
		{0x28AE,"Peek$","20,0",1,589},
		{0x28BE,"Peek$","20,0,2",1,590},
		{0x28CA,"Resource Bank","I0",1345,1},
		{0x28DE,"Resource$","20",1,389},
		{0x28EE,"Resource Screen Open","I0,0,0,0",1344,1},
		{0x2910,"Resource Unpack","I0,0,0",1348,1},
		{0x292A,"Read Text","I2",1341,1},
		{0x293A,"Read Text","I2,0,0",1342,1},
		{0x2946,"Err$","20",1,502},
		{0x2952,"Assign","I2t2",728,1},
		{0x2962,"Errtrap","0",1,223},
		{0x2970,"Dev Open","I0,2,0,0,0",615,1},
		{0x2988,"Dev Close","I",616,1},
		{0x2998,"Dev Close","I0",617,1},
		{0x29A0,"Dev Base","00",1,618},
		{0x29B0,"Dev Do","I0,0",619,1},
		{0x29C0,"Dev Send","I0,0",620,1},
		{0x29D2,"Dev Abort","I0",621,1},
		{0x29E2,"Dev Check","00",1,622},
		{0x29F2,"Lib Open","I0,2,0",600,1},
		{0x2A06,"Lib Close","I",601,1},
		{0x2A16,"Lib Close","I0",602,1},
		{0x2A1E,"Lib Call","00,0",1,603},
		{0x2A30,"Lib Base","00",1,604},
		{0x2A40,"Equ","02",-32768,369},
		{0x2A4A,"Lvo","02",-32768,369},
		{0x2A54,"Struc","V00,2",370,-32768},
		{0x2A64,"Struc$","V20,2",372,-32768},
		{0x2A74,"Bstart","00",1,548},
		{0x2A82,"Blength","00",1,549},
		{0x2A90,"Bsend","I0",551,1},
		{0x2A9C,"Bank Shrink","I0t0",564,1},
		{0x2AB0,"Prg Under","0",1,190},
		{0x2AC0,"Arexx Open","I2",1350,1},
		{0x2AD2,"Arexx Close","I",1353,1},
		{0x2AE4,"Arexx Exist","02",1,1349},
		{0x2AF6,"Arexx","0",1,1351},
		{0x2B02,"Arexx$","20",1,1354},
		{0x2B10,"Arexx Wait","I",1352,1},
		{0x2B20,"Arexx Answer","I0",1355,1},
		{0x2B34,"Arexx Answer","I0,2",1356,1},
		{0x2B3E,"Exec","I2",623,1},
		{0x2B4A,"Monitor","I",196,1},
		{0x2B58,"Screen Mode","0",1,835},
		{0x2B6A,"Screen Mode","C3",1,281},
		{0x2B72,"Kill Editor","I",194,1},
		{0x2B84,"Set Double Precision","I",271,1},
		{0x2B9E,"Set Stack","I",206,1},
		{0x2BAE,"Get Bob Palette","I",875,1},
		{0x2BC4,"Get Bob Palette","I0",876,1},
		{0x2BCC,"Set Equate Bank","I0",206,1},
		{0x2BE2,"Zdialog","00,0,0",1,1336},
		{0x2BF4,"||apcmp||","I",166,1},
		{0x0000,NULL,NULL,0,0}};
