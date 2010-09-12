
/*  A Bison parser, made from vrml.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	NUMBER	258
#define	FLOAT	259
#define	STRING	260
#define	NAME	261
#define	ANCHOR	262
#define	APPEARANCE	263
#define	AUDIOCLIP	264
#define	BACKGROUND	265
#define	BILLBOARD	266
#define	BOX	267
#define	COLLISION	268
#define	COLOR	269
#define	COLOR_INTERP	270
#define	COORDINATE	271
#define	COORDINATE_INTERP	272
#define	CYLINDER_SENSOR	273
#define	NULL_STRING	274
#define	CONE	275
#define	CUBE	276
#define	CYLINDER	277
#define	DIRECTIONALLIGHT	278
#define	FONTSTYLE	279
#define	ERROR	280
#define	EXTRUSION	281
#define	ELEVATION_GRID	282
#define	FOG	283
#define	INLINE	284
#define	MOVIE_TEXTURE	285
#define	NAVIGATION_INFO	286
#define	PIXEL_TEXTURE	287
#define	GROUP	288
#define	INDEXEDFACESET	289
#define	INDEXEDLINESET	290
#define	S_INFO	291
#define	LOD	292
#define	MATERIAL	293
#define	NORMAL	294
#define	POSITION_INTERP	295
#define	PROXIMITY_SENSOR	296
#define	SCALAR_INTERP	297
#define	SCRIPT	298
#define	SHAPE	299
#define	SOUND	300
#define	SPOTLIGHT	301
#define	SPHERE_SENSOR	302
#define	TEXT	303
#define	TEXTURE_COORDINATE	304
#define	TEXTURE_TRANSFORM	305
#define	TIME_SENSOR	306
#define	SWITCH	307
#define	TOUCH_SENSOR	308
#define	VIEWPOINT	309
#define	VISIBILITY_SENSOR	310
#define	WORLD_INFO	311
#define	NORMAL_INTERP	312
#define	ORIENTATION_INTERP	313
#define	POINTLIGHT	314
#define	POINTSET	315
#define	SPHERE	316
#define	PLANE_SENSOR	317
#define	TRANSFORM	318
#define	S_CHILDREN	319
#define	S_PARAMETER	320
#define	S_URL	321
#define	S_MATERIAL	322
#define	S_TEXTURETRANSFORM	323
#define	S_TEXTURE	324
#define	S_LOOP	325
#define	S_STARTTIME	326
#define	S_STOPTIME	327
#define	S_GROUNDANGLE	328
#define	S_GROUNDCOLOR	329
#define	S_SPEED	330
#define	S_AVATAR_SIZE	331
#define	S_BACKURL	332
#define	S_BOTTOMURL	333
#define	S_FRONTURL	334
#define	S_LEFTURL	335
#define	S_RIGHTURL	336
#define	S_TOPURL	337
#define	S_SKYANGLE	338
#define	S_SKYCOLOR	339
#define	S_AXIS_OF_ROTATION	340
#define	S_COLLIDE	341
#define	S_COLLIDETIME	342
#define	S_PROXY	343
#define	S_SIDE	344
#define	S_AUTO_OFFSET	345
#define	S_DISK_ANGLE	346
#define	S_ENABLED	347
#define	S_MAX_ANGLE	348
#define	S_MIN_ANGLE	349
#define	S_OFFSET	350
#define	S_BBOXSIZE	351
#define	S_BBOXCENTER	352
#define	S_VISIBILITY_LIMIT	353
#define	S_AMBIENT_INTENSITY	354
#define	S_NORMAL	355
#define	S_TEXCOORD	356
#define	S_CCW	357
#define	S_COLOR_PER_VERTEX	358
#define	S_CREASE_ANGLE	359
#define	S_NORMAL_PER_VERTEX	360
#define	S_XDIMENSION	361
#define	S_XSPACING	362
#define	S_ZDIMENSION	363
#define	S_ZSPACING	364
#define	S_BEGIN_CAP	365
#define	S_CROSS_SECTION	366
#define	S_END_CAP	367
#define	S_SPINE	368
#define	S_FOG_TYPE	369
#define	S_VISIBILITY_RANGE	370
#define	S_HORIZONTAL	371
#define	S_JUSTIFY	372
#define	S_LANGUAGE	373
#define	S_LEFT2RIGHT	374
#define	S_TOP2BOTTOM	375
#define	IMAGE_TEXTURE	376
#define	S_SOLID	377
#define	S_KEY	378
#define	S_KEYVALUE	379
#define	S_REPEAT_S	380
#define	S_REPEAT_T	381
#define	S_CONVEX	382
#define	S_BOTTOM	383
#define	S_PICTH	384
#define	S_COORD	385
#define	S_COLOR_INDEX	386
#define	S_COORD_INDEX	387
#define	S_NORMAL_INDEX	388
#define	S_MAX_POSITION	389
#define	S_MIN_POSITION	390
#define	S_ATTENUATION	391
#define	S_APPEARANCE	392
#define	S_GEOMETRY	393
#define	S_DIRECT_OUTPUT	394
#define	S_MUST_EVALUATE	395
#define	S_MAX_BACK	396
#define	S_MIN_BACK	397
#define	S_MAX_FRONT	398
#define	S_MIN_FRONT	399
#define	S_PRIORITY	400
#define	S_SOURCE	401
#define	S_SPATIALIZE	402
#define	S_BERM_WIDTH	403
#define	S_CHOICE	404
#define	S_WHICHCHOICE	405
#define	S_FONTSTYLE	406
#define	S_LENGTH	407
#define	S_MAX_EXTENT	408
#define	S_ROTATION	409
#define	S_SCALE	410
#define	S_CYCLE_INTERVAL	411
#define	S_FIELD_OF_VIEW	412
#define	S_JUMP	413
#define	S_TITLE	414
#define	S_TEXCOORD_INDEX	415
#define	S_HEADLIGHT	416
#define	S_TOP	417
#define	S_BOTTOMRADIUS	418
#define	S_HEIGHT	419
#define	S_POINT	420
#define	S_STRING	421
#define	S_SPACING	422
#define	S_TYPE	423
#define	S_RADIUS	424
#define	S_ON	425
#define	S_INTENSITY	426
#define	S_COLOR	427
#define	S_DIRECTION	428
#define	S_SIZE	429
#define	S_FAMILY	430
#define	S_STYLE	431
#define	S_RANGE	432
#define	S_CENTER	433
#define	S_TRANSLATION	434
#define	S_LEVEL	435
#define	S_DIFFUSECOLOR	436
#define	S_SPECULARCOLOR	437
#define	S_EMISSIVECOLOR	438
#define	S_SHININESS	439
#define	S_TRANSPARENCY	440
#define	S_VECTOR	441
#define	S_POSITION	442
#define	S_ORIENTATION	443
#define	S_LOCATION	444
#define	S_CUTOFFANGLE	445
#define	S_WHICHCHILD	446
#define	S_IMAGE	447
#define	S_SCALEORIENTATION	448
#define	S_DESCRIPTION	449
#define	SFBOOL	450
#define	SFFLOAT	451
#define	SFINT32	452
#define	SFTIME	453
#define	SFROTATION	454
#define	SFNODE	455
#define	SFCOLOR	456
#define	SFIMAGE	457
#define	SFSTRING	458
#define	SFVEC2F	459
#define	SFVEC3F	460
#define	MFBOOL	461
#define	MFFLOAT	462
#define	MFINT32	463
#define	MFTIME	464
#define	MFROTATION	465
#define	MFNODE	466
#define	MFCOLOR	467
#define	MFIMAGE	468
#define	MFSTRING	469
#define	MFVEC2F	470
#define	MFVEC3F	471
#define	FIELD	472
#define	EVENTIN	473
#define	EVENTOUT	474
#define	USE	475
#define	S_VALUE_CHANGED	476

#line 11 "vrml.y"
typedef union {
int		ival;
float	fval;
char	*sval;
} YYSTYPE;
#line 63 "vrml.y"


#include <stdio.h>
#include <stdlib.h>

#ifndef __GNUC__
#define alloca	malloc
#endif

#include "SceneGraph.h"
#include "VRMLNodeType.h"
#include "VRMLSetInfo.h"

float			gColor[3];
float			gVec2f[2];
float			gVec3f[3];
float			gRotation[4];
int				gWidth;
int				gHeight;
int				gComponents;
char            gName[512];

#define	YYMAXDEPTH	(1024 * 8 * 1000)

int yyerror(char *s);
int yyparse(void);
int yylex(void);

/**
 * Dave Cline.  I added this function to support adding new data types
 * to prototype objects, not just renaming old data.
 */
void addFieldAndValue(Node *node, char *fieldName, int fieldType, void *value)
{
	char buff[2048];
	if (!node->getExposedField(fieldName)) {
		node->addExposedField(fieldName, fieldType);
	}
	Field *field = node->getExposedField(fieldName);

	float *vect = (float*) value;
	float *floatVal = (float*) value;
	int *intVal = (int*) value;

	switch (fieldType) {
		case fieldTypeSFColor:
			sprintf(buff, "%0.7f %0.7f %0.7f", vect[0], vect[1], vect[2]);
			field->setValue(buff);
			break;
		case fieldTypeSFFloat:
			sprintf(buff, "%0.7f", *floatVal);
			field->setValue(buff);
			break;
		case fieldTypeSFVec2f:
			sprintf(buff, "%0.7f %0.7f", vect[0], vect[1]);
			field->setValue(buff);
			break;
		case fieldTypeSFVec3f:
			sprintf(buff, "%0.7f %0.7f %0.7f", vect[0], vect[1], vect[2]);
			field->setValue(buff);
			break;
		case fieldTypeSFString:
			sprintf(buff, "%s", (char*)value);
			field->setValue((char*) buff);
			break;
		case fieldTypeSFInt32:
			sprintf(buff, "%d", *intVal);
			field->setValue(buff);
			break;

		case fieldTypeSFBool:
			field->setValue((char*) buff);
			break;
	}

	//printf("%s [%s]\n", fieldName, buff);
}



#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		1211
#define	YYFLAG		-32768
#define	YYNTBASE	227

#define YYTRANSLATE(x) ((unsigned)(x) <= 476 ? yytranslate[x] : 520)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,   224,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   222,     2,   223,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   225,     2,   226,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
   196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
   206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
   216,   217,   218,   219,   220,   221
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     6,     9,    10,    12,    14,    16,    18,
    20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
    40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
    60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
    80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
   100,   102,   104,   106,   108,   110,   112,   114,   116,   118,
   120,   122,   124,   126,   130,   135,   138,   139,   143,   148,
   151,   155,   157,   161,   164,   166,   167,   169,   173,   175,
   179,   182,   184,   185,   187,   191,   193,   197,   200,   202,
   203,   205,   209,   211,   215,   218,   220,   221,   223,   227,
   229,   233,   236,   238,   239,   241,   245,   247,   251,   254,
   256,   257,   259,   263,   265,   269,   272,   274,   275,   277,
   281,   283,   285,   288,   291,   292,   294,   296,   299,   302,
   304,   307,   310,   313,   315,   317,   319,   324,   327,   328,
   331,   334,   337,   340,   343,   346,   349,   352,   355,   358,
   361,   363,   368,   371,   372,   374,   377,   380,   383,   386,
   389,   392,   394,   399,   402,   403,   405,   407,   409,   411,
   413,   415,   417,   419,   421,   423,   426,   429,   432,   435,
   438,   441,   444,   447,   450,   453,   455,   457,   459,   461,
   463,   465,   470,   473,   474,   476,   479,   481,   483,   485,
   490,   493,   494,   497,   499,   504,   507,   508,   513,   516,
   519,   520,   522,   524,   527,   529,   531,   534,   537,   540,
   542,   547,   550,   551,   554,   556,   561,   564,   565,   567,
   569,   572,   575,   577,   582,   585,   586,   589,   592,   595,
   598,   600,   605,   608,   609,   611,   616,   619,   620,   623,
   626,   628,   633,   636,   637,   640,   643,   646,   649,   652,
   654,   659,   662,   663,   666,   669,   672,   675,   678,   681,
   683,   688,   691,   692,   695,   698,   701,   704,   707,   709,
   714,   717,   718,   720,   723,   726,   729,   732,   735,   738,
   741,   744,   747,   750,   753,   756,   759,   762,   765,   768,
   771,   774,   777,   779,   784,   787,   788,   790,   792,   794,
   796,   799,   802,   805,   808,   811,   814,   817,   820,   823,
   826,   828,   833,   836,   837,   840,   843,   846,   848,   853,
   856,   857,   859,   862,   865,   868,   871,   874,   877,   880,
   883,   886,   889,   893,   896,   897,   899,   901,   903,   905,
   910,   913,   914,   916,   919,   922,   925,   927,   932,   935,
   936,   938,   940,   942,   944,   947,   950,   953,   956,   959,
   962,   965,   968,   971,   974,   977,   980,   983,   986,   989,
   992,   995,   998,  1001,  1004,  1007,  1010,  1012,  1017,  1020,
  1021,  1024,  1027,  1030,  1033,  1036,  1039,  1042,  1045,  1048,
  1051,  1055,  1058,  1059,  1061,  1064,  1066,  1068,  1070,  1075,
  1078,  1079,  1081,  1083,  1086,  1089,  1092,  1097,  1099,  1104,
  1107,  1108,  1111,  1114,  1117,  1120,  1123,  1126,  1128,  1130,
  1132,  1134,  1136,  1138,  1143,  1146,  1147,  1149,  1152,  1155,
  1158,  1161,  1164,  1167,  1170,  1172,  1177,  1180,  1181,  1183,
  1185,  1188,  1191,  1194,  1197,  1200,  1202,  1207,  1210,  1211,
  1214,  1216,  1221,  1224,  1225,  1228,  1231,  1234,  1236,  1241,
  1244,  1245,  1248,  1251,  1254,  1256,  1261,  1264,  1265,  1267,
  1272,  1275,  1278,  1280,  1285,  1288,  1289,  1292,  1295,  1298,
  1301,  1304,  1306,  1311,  1314,  1315,  1318,  1321,  1324,  1327,
  1330,  1333,  1336,  1338,  1343,  1346,  1347,  1350,  1353,  1356,
  1359,  1362,  1365,  1367,  1372,  1375,  1376,  1379,  1382,  1385,
  1387,  1392,  1395,  1396,  1399,  1402,  1405,  1407,  1412,  1415,
  1416,  1419,  1422,  1425,  1427,  1432,  1435,  1436,  1438,  1441,
  1444,  1447,  1451,  1455,  1459,  1463,  1467,  1471,  1475,  1479,
  1483,  1487,  1491,  1495,  1499,  1503,  1507,  1511,  1515,  1519,
  1523,  1527,  1531,  1535,  1539,  1543,  1547,  1551,  1555,  1559,
  1563,  1567,  1571,  1575,  1579,  1583,  1587,  1591,  1596,  1601,
  1606,  1611,  1616,  1621,  1627,  1632,  1637,  1642,  1647,  1649,
  1654,  1657,  1658,  1661,  1664,  1667,  1670,  1673,  1676,  1678,
  1683,  1686,  1687,  1690,  1693,  1696,  1699,  1702,  1705,  1708,
  1711,  1714,  1717,  1720,  1723,  1726,  1728,  1733,  1736,  1737,
  1740,  1742,  1747,  1750,  1751,  1754,  1757,  1760,  1762,  1767,
  1770,  1771,  1774,  1777,  1780,  1783,  1786,  1789,  1792,  1795,
  1798,  1801,  1803,  1808,  1811,  1812,  1814,  1817,  1822,  1825,
  1827,  1832,  1835,  1836,  1838,  1840,  1843,  1846,  1849,  1852,
  1855,  1858,  1860,  1865,  1868,  1869,  1872,  1874,  1879,  1882,
  1883,  1886,  1889,  1892,  1895,  1897,  1902,  1905,  1906,  1909,
  1912,  1915,  1918,  1921,  1923,  1928,  1931,  1932,  1935,  1937,
  1942,  1945,  1946,  1948,  1951,  1954,  1957,  1960,  1963,  1965,
  1967,  1969,  1974,  1977,  1978,  1981,  1984,  1987,  1990,  1993,
  1995,  1997,  1999,  2001,  2003,  2005,  2010,  2013,  2014,  2017,
  2020,  2023,  2025,  2030,  2033,  2034,  2036,  2039,  2042,  2044
};

static const short yyrhs[] = {   228,
     0,     1,     0,    25,     0,   236,   228,     0,     0,   270,
     0,   297,     0,   308,     0,   367,     0,   389,     0,   395,
     0,   481,     0,   507,     0,   318,     0,   329,     0,   418,
     0,   422,     0,   443,     0,   451,     0,   337,     0,   431,
     0,   472,     0,   447,     0,   499,     0,   503,     0,   513,
     0,   301,     0,   322,     0,   333,     0,   346,     0,   354,
     0,   380,     0,   384,     0,   439,     0,   468,     0,   487,
     0,   341,     0,   476,     0,   435,     0,   279,     0,   233,
     0,   456,     0,   460,     0,   464,     0,   519,     0,   293,
     0,   358,     0,   410,     0,   511,     0,   234,     0,   235,
     0,   363,     0,   230,     0,   231,     0,   229,     0,   220,
     0,     3,     0,     3,     0,     5,     0,     4,     0,     3,
     0,     4,     0,     3,     0,   240,   240,   240,     0,   240,
   240,   240,   240,     0,   237,   244,     0,     0,     3,     3,
     3,     0,   222,     0,   244,   223,     0,   240,   240,     0,
   240,   240,   240,     0,   242,     0,   242,   224,   247,     0,
   242,   247,     0,   224,     0,     0,   242,     0,   222,   247,
   223,     0,   237,     0,   237,   224,   249,     0,   237,   249,
     0,   224,     0,     0,   237,     0,   222,   249,   223,     0,
   240,     0,   240,   224,   251,     0,   240,   251,     0,   224,
     0,     0,   240,     0,   222,   251,   223,     0,   239,     0,
   239,   224,   253,     0,   239,   253,     0,   224,     0,     0,
   239,     0,   222,   253,   223,     0,   245,     0,   245,   224,
   255,     0,   245,   255,     0,   224,     0,     0,   245,     0,
   222,   255,   223,     0,   246,     0,   246,   224,   257,     0,
   246,   257,     0,   224,     0,     0,   246,     0,   222,   257,
   223,     0,   243,     0,   243,   224,   259,     0,   243,   259,
     0,   224,     0,     0,   243,     0,   222,   259,   223,     0,
   225,     0,   226,     0,   226,   224,     0,   268,   263,     0,
     0,    65,     0,    66,     0,    97,   246,     0,    96,   246,
     0,   303,     0,   194,   239,     0,   264,   254,     0,   265,
   254,     0,   266,     0,   267,     0,     7,     0,   269,   261,
   263,   262,     0,   272,   271,     0,     0,    67,    19,     0,
    67,   399,     0,    67,   220,     0,    69,    19,     0,    69,
   372,     0,    69,   404,     0,    69,   427,     0,    69,   220,
     0,    68,    19,     0,    68,   495,     0,    68,   220,     0,
     8,     0,   273,   261,   271,   262,     0,   277,   275,     0,
     0,    66,     0,   194,   239,     0,    70,   238,     0,   129,
   240,     0,    71,   241,     0,    72,   241,     0,   276,   254,
     0,     9,     0,   278,   261,   275,   262,     0,   291,   280,
     0,     0,    77,     0,    78,     0,    79,     0,    80,     0,
    81,     0,    82,     0,    73,     0,    74,     0,    83,     0,
    84,     0,   287,   252,     0,   288,   248,     0,   281,   254,
     0,   282,   254,     0,   283,   254,     0,   284,   254,     0,
   285,   254,     0,   286,   254,     0,   289,   252,     0,   290,
   248,     0,     6,     0,     5,     0,   240,     0,   246,     0,
   245,     0,    10,     0,   292,   261,   280,   262,     0,   295,
   294,     0,     0,   303,     0,    85,   246,     0,   266,     0,
   267,     0,    11,     0,   296,   261,   294,   262,     0,   299,
   298,     0,     0,   174,   246,     0,    12,     0,   300,   261,
   298,   262,     0,   236,   302,     0,     0,    64,   222,   302,
   223,     0,    64,   236,     0,   306,   304,     0,     0,    88,
     0,   303,     0,    86,   238,     0,   266,     0,   267,     0,
    88,   220,     0,    88,    19,     0,   305,   236,     0,    13,
     0,   307,   261,   304,   262,     0,   310,   309,     0,     0,
   172,   248,     0,    14,     0,   311,   261,   309,   262,     0,
   316,   313,     0,     0,   123,     0,   124,     0,   314,   252,
     0,   315,   248,     0,    15,     0,   317,   261,   313,   262,
     0,   320,   319,     0,     0,    89,   238,     0,   128,   238,
     0,   163,   240,     0,   164,   240,     0,    20,     0,   321,
   261,   319,   262,     0,   165,   258,     0,     0,    16,     0,
   324,   261,   323,   262,     0,   327,   326,     0,     0,   314,
   252,     0,   315,   258,     0,    17,     0,   328,   261,   326,
   262,     0,   331,   330,     0,     0,    89,   238,     0,   128,
   238,     0,   162,   238,     0,   169,   240,     0,   164,   240,
     0,    22,     0,   332,   261,   330,   262,     0,   335,   334,
     0,     0,    90,   238,     0,    91,   240,     0,    92,   238,
     0,    93,   240,     0,    94,   240,     0,    95,   240,     0,
    18,     0,   336,   261,   334,   262,     0,   339,   338,     0,
     0,   170,   238,     0,   171,   240,     0,   172,   242,     0,
   173,   246,     0,    99,   240,     0,    23,     0,   340,   261,
   338,   262,     0,   344,   342,     0,     0,   164,     0,   172,
    19,     0,   172,   312,     0,   172,   220,     0,   100,    19,
     0,   100,   414,     0,   100,   220,     0,   101,    19,     0,
   101,   491,     0,   101,   220,     0,   343,   252,     0,   102,
   238,     0,   104,   240,     0,   122,   238,     0,   103,   238,
     0,   105,   238,     0,   106,   237,     0,   107,   240,     0,
   108,   237,     0,   109,   240,     0,    27,     0,   345,   261,
   342,   262,     0,   352,   347,     0,     0,   111,     0,   188,
     0,   155,     0,   113,     0,   110,   238,     0,   102,   238,
     0,   127,   238,     0,   104,   240,     0,   122,   238,     0,
   348,   256,     0,   112,   238,     0,   349,   260,     0,   350,
   256,     0,   351,   258,     0,    26,     0,   353,   261,   347,
   262,     0,   356,   355,     0,     0,   172,   242,     0,   114,
   239,     0,   115,   240,     0,    28,     0,   357,   261,   355,
   262,     0,   361,   359,     0,     0,   117,     0,   175,   239,
     0,   116,   238,     0,   360,   254,     0,   118,   239,     0,
   119,   238,     0,   174,   240,     0,   167,   240,     0,   176,
   239,     0,   120,   238,     0,    24,   261,     0,   362,   359,
   262,     0,   365,   364,     0,     0,   303,     0,   266,     0,
   267,     0,    33,     0,   366,   261,   364,   262,     0,   370,
   368,     0,     0,    66,     0,   369,   254,     0,   125,   238,
     0,   126,   238,     0,   121,     0,   371,   261,   368,   262,
     0,   378,   373,     0,     0,   131,     0,   132,     0,   133,
     0,   160,     0,   172,    19,     0,   172,   312,     0,   172,
   220,     0,   130,    19,     0,   130,   325,     0,   130,   220,
     0,   100,    19,     0,   100,   414,     0,   100,   220,     0,
   101,    19,     0,   101,   491,     0,   101,   220,     0,   102,
   238,     0,   127,   238,     0,   122,   238,     0,   104,   240,
     0,   374,   250,     0,   103,   238,     0,   375,   250,     0,
   376,   250,     0,   377,   250,     0,   105,   238,     0,    34,
     0,   379,   261,   373,   262,     0,   382,   381,     0,     0,
   172,    19,     0,   172,   312,     0,   172,   220,     0,   130,
    19,     0,   130,   325,     0,   130,   220,     0,   103,   238,
     0,   374,   250,     0,   375,   250,     0,    35,   261,     0,
   383,   381,   262,     0,   387,   385,     0,     0,    66,     0,
   386,   254,     0,   266,     0,   267,     0,    29,     0,   388,
   261,   385,   262,     0,   393,   390,     0,     0,   177,     0,
   180,     0,   391,   252,     0,   178,   246,     0,   392,   236,
     0,   392,   222,   228,   223,     0,    37,     0,   394,   261,
   390,   262,     0,   397,   396,     0,     0,    99,   240,     0,
   181,   242,     0,   183,   242,     0,   184,   240,     0,   182,
   242,     0,   185,   240,     0,     6,     0,     5,     0,   240,
     0,   246,     0,   245,     0,    38,     0,   398,   261,   396,
   262,     0,   402,   400,     0,     0,    66,     0,    70,   238,
     0,    75,   240,     0,    71,   241,     0,    72,   241,     0,
   401,   254,     0,   125,   238,     0,   126,   238,     0,    30,
     0,   403,   261,   400,   262,     0,   408,   405,     0,     0,
    76,     0,   168,     0,   406,   252,     0,   161,   238,     0,
    75,   240,     0,   407,   254,     0,    98,   240,     0,    31,
     0,   409,   261,   405,   262,     0,   412,   411,     0,     0,
   186,   258,     0,    39,     0,   413,   261,   411,   262,     0,
   416,   415,     0,     0,   314,   252,     0,   315,   258,     0,
   221,   246,     0,    57,     0,   417,   261,   415,   262,     0,
   420,   419,     0,     0,   314,   252,     0,   315,   260,     0,
   221,   243,     0,    58,     0,   421,   261,   419,   262,     0,
   425,   423,     0,     0,   192,     0,   424,   222,   244,   223,
     0,   125,   238,     0,   126,   238,     0,    32,     0,   426,
   261,   423,   262,     0,   429,   428,     0,     0,    90,   238,
     0,    92,   238,     0,   134,   245,     0,   135,   245,     0,
    95,   246,     0,    62,     0,   430,   261,   428,   262,     0,
   433,   432,     0,     0,    99,   240,     0,   136,   246,     0,
   172,   242,     0,   171,   240,     0,   189,   246,     0,   170,
   238,     0,   169,   240,     0,    59,     0,   434,   261,   432,
   262,     0,   437,   436,     0,     0,   172,    19,     0,   172,
   312,     0,   172,   220,     0,   130,    19,     0,   130,   325,
     0,   130,   220,     0,    60,     0,   438,   261,   436,   262,
     0,   441,   440,     0,     0,   314,   252,     0,   315,   258,
     0,   221,   246,     0,    40,     0,   442,   261,   440,   262,
     0,   445,   444,     0,     0,   178,   246,     0,   174,   246,
     0,    92,   238,     0,    41,     0,   446,   261,   444,   262,
     0,   449,   448,     0,     0,   314,   252,     0,   315,   252,
     0,   221,   245,     0,    42,     0,   450,   261,   448,   262,
     0,   454,   452,     0,     0,    66,     0,   453,   254,     0,
   139,   238,     0,   140,   238,     0,   218,   195,     6,     0,
   218,   196,     6,     0,   218,   197,     6,     0,   218,   198,
     6,     0,   218,   199,     6,     0,   218,   201,     6,     0,
   218,   202,     6,     0,   218,   203,     6,     0,   218,   204,
     6,     0,   218,   205,     6,     0,   218,   207,     6,     0,
   218,   208,     6,     0,   218,   209,     6,     0,   218,   210,
     6,     0,   218,   212,     6,     0,   218,   214,     6,     0,
   218,   215,     6,     0,   218,   216,     6,     0,   219,   195,
     6,     0,   219,   196,     6,     0,   219,   197,     6,     0,
   219,   198,     6,     0,   219,   199,     6,     0,   219,   201,
     6,     0,   219,   202,     6,     0,   219,   203,     6,     0,
   219,   204,     6,     0,   219,   205,     6,     0,   219,   207,
     6,     0,   219,   208,     6,     0,   219,   209,     6,     0,
   219,   210,     6,     0,   219,   212,     6,     0,   219,   214,
     6,     0,   219,   215,     6,     0,   219,   216,     6,     0,
   217,   195,     6,   238,     0,   217,   196,     6,   240,     0,
   217,   197,     6,   237,     0,   217,   198,     6,   241,     0,
   217,   199,     6,   243,     0,   217,   200,     6,    19,     0,
   217,   200,     6,   220,     6,     0,   217,   201,     6,   242,
     0,   217,   203,     6,   239,     0,   217,   204,     6,   245,
     0,   217,   205,     6,   246,     0,    43,     0,   455,   261,
   452,   262,     0,   458,   457,     0,     0,   137,    19,     0,
   137,   274,     0,   137,   220,     0,   138,    19,     0,   138,
   232,     0,   138,   220,     0,    44,     0,   459,   261,   457,
   262,     0,   462,   461,     0,     0,   173,   246,     0,   171,
   240,     0,   189,   246,     0,   141,   240,     0,   143,   240,
     0,   142,   240,     0,   144,   240,     0,   145,   240,     0,
   146,    19,     0,   146,   279,     0,   146,   404,     0,   146,
   220,     0,   147,   238,     0,    45,     0,   463,   261,   461,
   262,     0,   466,   465,     0,     0,   169,   240,     0,    61,
     0,   467,   261,   465,   262,     0,   470,   469,     0,     0,
    90,   238,     0,    92,   238,     0,    95,   243,     0,    47,
     0,   471,   261,   469,   262,     0,   474,   473,     0,     0,
    99,   240,     0,   136,   246,     0,   148,   240,     0,   172,
   242,     0,   190,   240,     0,   173,   246,     0,   171,   240,
     0,   189,   246,     0,   170,   238,     0,   169,   240,     0,
    46,     0,   475,   261,   473,   262,     0,   479,   477,     0,
     0,   149,     0,   478,   236,     0,   478,   222,   228,   223,
     0,   150,   237,     0,    52,     0,   480,   261,   477,   262,
     0,   485,   482,     0,     0,   166,     0,   152,     0,   483,
   254,     0,   151,    19,     0,   151,   363,     0,   151,   220,
     0,   484,   252,     0,   153,   240,     0,    48,     0,   486,
   261,   482,   262,     0,   489,   488,     0,     0,   165,   256,
     0,    49,     0,   490,   261,   488,   262,     0,   493,   492,
     0,     0,   178,   245,     0,   154,   240,     0,   155,   245,
     0,   179,   245,     0,    50,     0,   494,   261,   492,   262,
     0,   497,   496,     0,     0,   156,   241,     0,    92,   238,
     0,    70,   238,     0,    71,   241,     0,    72,   241,     0,
    51,     0,   498,   261,   496,   262,     0,   501,   500,     0,
     0,    92,   238,     0,    53,     0,   502,   261,   500,   262,
     0,   505,   504,     0,     0,   303,     0,   178,   246,     0,
   154,   243,     0,   155,   246,     0,   193,   243,     0,   179,
   246,     0,   266,     0,   267,     0,    63,     0,   506,   261,
   504,   262,     0,   509,   508,     0,     0,   157,   240,     0,
   158,   238,     0,   188,   243,     0,   187,   246,     0,   194,
   239,     0,     6,     0,     5,     0,   240,     0,   246,     0,
   245,     0,    54,     0,   510,   261,   508,   262,     0,   513,
   512,     0,     0,   178,   246,     0,    92,   238,     0,   174,
   246,     0,    55,     0,   514,   261,   512,   262,     0,   517,
   515,     0,     0,    36,     0,   516,   254,     0,   159,   239,
     0,    56,     0,   518,   261,   515,   262,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   147,   148,   149,   153,   154,   158,   159,   160,   161,   162,
   163,   164,   165,   169,   170,   171,   172,   173,   174,   178,
   179,   180,   181,   182,   183,   184,   188,   189,   190,   191,
   192,   193,   194,   195,   196,   197,   201,   202,   203,   207,
   208,   209,   210,   211,   212,   216,   217,   218,   219,   223,
   224,   225,   226,   227,   228,   229,   233,   240,   244,   251,
   255,   263,   264,   268,   278,   289,   290,   295,   304,   308,
   317,   327,   328,   329,   330,   331,   335,   336,   340,   341,
   342,   343,   344,   348,   349,   354,   355,   356,   357,   358,
   362,   363,   367,   368,   369,   370,   371,   375,   376,   380,
   381,   382,   383,   384,   388,   389,   393,   394,   395,   396,
   397,   401,   402,   406,   407,   408,   409,   410,   414,   415,
   419,   423,   424,   434,   435,   439,   446,   453,   460,   467,
   468,   473,   477,   481,   482,   486,   496,   511,   512,   516,
   517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
   530,   540,   555,   556,   560,   567,   571,   575,   579,   583,
   587,   594,   603,   618,   619,   623,   630,   637,   644,   651,
   658,   665,   672,   679,   686,   693,   697,   701,   705,   709,
   713,   717,   721,   725,   729,   734,   739,   743,   747,   751,
   758,   768,   783,   784,   788,   789,   793,   794,   798,   808,
   823,   824,   828,   835,   845,   860,   861,   865,   866,   876,
   877,   881,   888,   889,   893,   894,   895,   896,   897,   904,
   914,   929,   930,   934,   938,   948,   963,   964,   968,   975,
   982,   986,   993,  1003,  1018,  1019,  1023,  1027,  1031,  1035,
  1042,  1052,  1067,  1068,  1072,  1082,  1097,  1098,  1102,  1106,
  1113,  1123,  1138,  1139,  1143,  1147,  1151,  1155,  1159,  1166,
  1176,  1191,  1192,  1196,  1200,  1204,  1208,  1212,  1216,  1224,
  1234,  1249,  1250,  1254,  1258,  1262,  1266,  1270,  1277,  1287,
  1302,  1303,  1307,  1315,  1316,  1317,  1318,  1319,  1320,  1321,
  1322,  1323,  1324,  1328,  1332,  1336,  1340,  1344,  1348,  1352,
  1356,  1360,  1367,  1377,  1392,  1393,  1397,  1404,  1411,  1418,
  1425,  1429,  1433,  1437,  1441,  1445,  1449,  1453,  1457,  1461,
  1468,  1478,  1493,  1494,  1498,  1502,  1506,  1513,  1523,  1538,
  1539,  1543,  1550,  1554,  1558,  1562,  1566,  1570,  1574,  1578,
  1582,  1589,  1599,  1614,  1615,  1619,  1620,  1621,  1625,  1635,
  1650,  1651,  1655,  1662,  1666,  1670,  1677,  1687,  1702,  1703,
  1707,  1714,  1721,  1728,  1735,  1736,  1737,  1738,  1739,  1740,
  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1751,  1755,  1759,
  1763,  1767,  1771,  1775,  1779,  1783,  1790,  1800,  1815,  1816,
  1820,  1821,  1822,  1823,  1824,  1825,  1826,  1830,  1834,  1841,
  1851,  1866,  1867,  1871,  1878,  1882,  1883,  1887,  1897,  1912,
  1913,  1917,  1925,  1932,  1936,  1940,  1944,  1951,  1961,  1976,
  1977,  1981,  1985,  1989,  1993,  1997,  2001,  2006,  2011,  2015,
  2019,  2023,  2029,  2039,  2054,  2055,  2059,  2066,  2070,  2074,
  2078,  2082,  2086,  2090,  2097,  2107,  2122,  2123,  2127,  2134,
  2141,  2145,  2149,  2153,  2157,  2164,  2174,  2189,  2190,  2194,
  2198,  2208,  2223,  2224,  2228,  2232,  2236,  2242,  2252,  2267,
  2268,  2272,  2276,  2280,  2286,  2296,  2311,  2312,  2316,  2323,
  2327,  2331,  2338,  2348,  2363,  2364,  2368,  2372,  2376,  2380,
  2384,  2391,  2401,  2417,  2418,  2422,  2426,  2430,  2434,  2438,
  2442,  2446,  2453,  2463,  2478,  2479,  2483,  2484,  2485,  2486,
  2487,  2488,  2493,  2503,  2517,  2518,  2522,  2526,  2530,  2536,
  2546,  2561,  2562,  2566,  2570,  2574,  2581,  2591,  2606,  2607,
  2611,  2615,  2619,  2625,  2635,  2650,  2651,  2655,  2662,  2666,
  2670,  2679,  2685,  2691,  2697,  2703,  2717,  2723,  2729,  2735,
  2741,  2752,  2758,  2764,  2770,  2784,  2790,  2796,  2802,  2813,
  2819,  2825,  2831,  2837,  2851,  2857,  2863,  2869,  2875,  2886,
  2892,  2898,  2904,  2918,  2924,  2930,  2936,  2947,  2953,  2959,
  2965,  2971,  2978,  2985,  2993,  3007,  3013,  3019,  3029,  3039,
  3055,  3056,  3060,  3061,  3062,  3063,  3064,  3065,  3069,  3079,
  3094,  3095,  3099,  3103,  3107,  3111,  3115,  3119,  3123,  3127,
  3131,  3132,  3133,  3134,  3135,  3142,  3152,  3167,  3168,  3172,
  3180,  3190,  3205,  3206,  3210,  3214,  3218,  3225,  3235,  3250,
  3251,  3255,  3259,  3263,  3267,  3271,  3275,  3279,  3283,  3287,
  3291,  3298,  3308,  3323,  3324,  3328,  3335,  3339,  3343,  3351,
  3361,  3376,  3377,  3381,  3388,  3395,  3399,  3400,  3401,  3402,
  3406,  3414,  3424,  3439,  3440,  3444,  3449,  3459,  3474,  3475,
  3479,  3483,  3487,  3491,  3499,  3509,  3524,  3525,  3529,  3533,
  3537,  3541,  3545,  3553,  3563,  3578,  3579,  3583,  3590,  3600,
  3615,  3616,  3620,  3621,  3625,  3629,  3633,  3637,  3641,  3642,
  3646,  3656,  3671,  3672,  3676,  3680,  3684,  3688,  3692,  3697,
  3702,  3706,  3710,  3714,  3721,  3731,  3746,  3747,  3751,  3755,
  3759,  3766,  3776,  3791,  3792,  3796,  3803,  3807,  3814,  3824
};

static const char * const yytname[] = {   "$","error","$undefined.","NUMBER",
"FLOAT","STRING","NAME","ANCHOR","APPEARANCE","AUDIOCLIP","BACKGROUND","BILLBOARD",
"BOX","COLLISION","COLOR","COLOR_INTERP","COORDINATE","COORDINATE_INTERP","CYLINDER_SENSOR",
"NULL_STRING","CONE","CUBE","CYLINDER","DIRECTIONALLIGHT","FONTSTYLE","ERROR",
"EXTRUSION","ELEVATION_GRID","FOG","INLINE","MOVIE_TEXTURE","NAVIGATION_INFO",
"PIXEL_TEXTURE","GROUP","INDEXEDFACESET","INDEXEDLINESET","S_INFO","LOD","MATERIAL",
"NORMAL","POSITION_INTERP","PROXIMITY_SENSOR","SCALAR_INTERP","SCRIPT","SHAPE",
"SOUND","SPOTLIGHT","SPHERE_SENSOR","TEXT","TEXTURE_COORDINATE","TEXTURE_TRANSFORM",
"TIME_SENSOR","SWITCH","TOUCH_SENSOR","VIEWPOINT","VISIBILITY_SENSOR","WORLD_INFO",
"NORMAL_INTERP","ORIENTATION_INTERP","POINTLIGHT","POINTSET","SPHERE","PLANE_SENSOR",
"TRANSFORM","S_CHILDREN","S_PARAMETER","S_URL","S_MATERIAL","S_TEXTURETRANSFORM",
"S_TEXTURE","S_LOOP","S_STARTTIME","S_STOPTIME","S_GROUNDANGLE","S_GROUNDCOLOR",
"S_SPEED","S_AVATAR_SIZE","S_BACKURL","S_BOTTOMURL","S_FRONTURL","S_LEFTURL",
"S_RIGHTURL","S_TOPURL","S_SKYANGLE","S_SKYCOLOR","S_AXIS_OF_ROTATION","S_COLLIDE",
"S_COLLIDETIME","S_PROXY","S_SIDE","S_AUTO_OFFSET","S_DISK_ANGLE","S_ENABLED",
"S_MAX_ANGLE","S_MIN_ANGLE","S_OFFSET","S_BBOXSIZE","S_BBOXCENTER","S_VISIBILITY_LIMIT",
"S_AMBIENT_INTENSITY","S_NORMAL","S_TEXCOORD","S_CCW","S_COLOR_PER_VERTEX","S_CREASE_ANGLE",
"S_NORMAL_PER_VERTEX","S_XDIMENSION","S_XSPACING","S_ZDIMENSION","S_ZSPACING",
"S_BEGIN_CAP","S_CROSS_SECTION","S_END_CAP","S_SPINE","S_FOG_TYPE","S_VISIBILITY_RANGE",
"S_HORIZONTAL","S_JUSTIFY","S_LANGUAGE","S_LEFT2RIGHT","S_TOP2BOTTOM","IMAGE_TEXTURE",
"S_SOLID","S_KEY","S_KEYVALUE","S_REPEAT_S","S_REPEAT_T","S_CONVEX","S_BOTTOM",
"S_PICTH","S_COORD","S_COLOR_INDEX","S_COORD_INDEX","S_NORMAL_INDEX","S_MAX_POSITION",
"S_MIN_POSITION","S_ATTENUATION","S_APPEARANCE","S_GEOMETRY","S_DIRECT_OUTPUT",
"S_MUST_EVALUATE","S_MAX_BACK","S_MIN_BACK","S_MAX_FRONT","S_MIN_FRONT","S_PRIORITY",
"S_SOURCE","S_SPATIALIZE","S_BERM_WIDTH","S_CHOICE","S_WHICHCHOICE","S_FONTSTYLE",
"S_LENGTH","S_MAX_EXTENT","S_ROTATION","S_SCALE","S_CYCLE_INTERVAL","S_FIELD_OF_VIEW",
"S_JUMP","S_TITLE","S_TEXCOORD_INDEX","S_HEADLIGHT","S_TOP","S_BOTTOMRADIUS",
"S_HEIGHT","S_POINT","S_STRING","S_SPACING","S_TYPE","S_RADIUS","S_ON","S_INTENSITY",
"S_COLOR","S_DIRECTION","S_SIZE","S_FAMILY","S_STYLE","S_RANGE","S_CENTER","S_TRANSLATION",
"S_LEVEL","S_DIFFUSECOLOR","S_SPECULARCOLOR","S_EMISSIVECOLOR","S_SHININESS",
"S_TRANSPARENCY","S_VECTOR","S_POSITION","S_ORIENTATION","S_LOCATION","S_CUTOFFANGLE",
"S_WHICHCHILD","S_IMAGE","S_SCALEORIENTATION","S_DESCRIPTION","SFBOOL","SFFLOAT",
"SFINT32","SFTIME","SFROTATION","SFNODE","SFCOLOR","SFIMAGE","SFSTRING","SFVEC2F",
"SFVEC3F","MFBOOL","MFFLOAT","MFINT32","MFTIME","MFROTATION","MFNODE","MFCOLOR",
"MFIMAGE","MFSTRING","MFVEC2F","MFVEC3F","FIELD","EVENTIN","EVENTOUT","USE",
"S_VALUE_CHANGED","'['","']'","','","'{'","'}'","Vrml","VrmlNodes","GroupingNode",
"InterpolatorNode","SensorNode","GeometryNode","LightNode","CommonNode","BindableNode",
"SFNode","SFInt32","SFBool","SFString","SFFloat","SFTime","SFColor","SFRotation",
"SFImageList","SFVec2f","SFVec3f","SFColorList","MFColor","SFInt32List","MFInt32",
"SFFloatList","MFFloat","SFStringList","MFString","SFVec2fList","MFVec2f","SFVec3fList",
"MFVec3f","SFRotationList","MFRotation","NodeBegin","NodeEnd","AnchorElements",
"AnchorElementParameterBegin","AnchorElementURLBegin","bboxCenter","bboxSize",
"AnchorElement","AnchorBegin","Anchor","AppearanceNodes","AppearanceNode","AppearanceBegin",
"Appearance","AudioClipElements","AudioClipURL","AudioClipElement","AudioClipBegin",
"AudioClip","BackGroundElements","BackGroundBackURL","BackGroundBottomURL","BackGroundFrontURL",
"BackGroundLeftURL","BackGroundRightURL","BackGroundTopURL","BackGroundGroundAngle",
"BackGroundGroundColor","BackGroundSkyAngle","BackGroundSkyColor","BackGroundElement",
"BackgroundBegin","Background","BillboardElements","BillboardElement","BillboardBegin",
"Billboard","BoxElements","BoxElement","BoxBegin","Box","childrenElements","children",
"CollisionElements","CollisionElementProxyBegin","CollisionElement","CollisionBegin",
"Collision","ColorElements","ColorElement","ColorBegin","Color","ColorInterpElements",
"InterpolateKey","InterporlateKeyValue","ColorInterpElement","ColorInterpBegin",
"ColorInterp","ConeElements","ConeElement","ConeBegin","Cone","CoordinateElements",
"CoordinateBegin","Coordinate","CoordinateInterpElements","CoordinateInterpElement",
"CoordinateInterpBegin","CoordinateInterp","CylinderElements","CylinderElement",
"CylinderBegin","Cylinder","CylinderSensorElements","CylinderSensorElement",
"CylinderSensorBegin","CylinderSensor","DirLightElements","DirLightElement",
"DirLightBegin","DirLight","ElevationGridElements","ElevationGridHeight","ElevationGridElement",
"ElevationGridBegin","ElevationGrid","ExtrusionElements","ExtrusionCrossSection",
"ExtrusionOrientation","ExtrusionScale","ExtrusionSpine","ExtrusionElement",
"ExtrusionBegin","Extrusion","FogElements","FogElement","FogBegin","Fog","FontStyleElements",
"FontStyleJustify","FontStyleElement","FontStyleBegin","FontStyle","GroupElements",
"GroupElement","GroupBegin","Group","ImgTexElements","ImgTexURL","ImgTexElement",
"ImageTextureBegin","ImageTexture","IdxFacesetElements","ColorIndex","CoordIndex",
"NormalIndex","TextureIndex","IdxFacesetElement","IdxFacesetBegin","IdxFaceset",
"IdxLinesetElements","IdxLinesetElement","IdxLinesetBegin","IdxLineset","InlineElements",
"InlineURL","InlineElement","InlineBegin","Inline","LodElements","LodRange",
"LodLevel","LodElement","LodBegin","Lod","MaterialElements","MaterialElement",
"MaterialBegin","Material","MovieTextureElements","MovieTextureURL","MovieTextureElement",
"MovieTextureBegin","MovieTexture","NavigationInfoElements","NavigationInfoAvatarSize",
"NavigationInfoType","NavigationInfoElement","NavigationInfoBegin","NavigationInfo",
"NormalElements","NormalElement","NormalBegin","Normal","NormalInterpElements",
"NormalInterpElement","NormalInterpBegin","NormalInterp","OrientationInterpElements",
"OrientationInterpElement","OrientationInterpBegin","OrientationInterp","PixelTextureElements",
"PixelTextureImage","PixelTextureElement","PixelTextureBegin","PixelTexture",
"PlaneSensorElements","PlaneSensorElement","PlaneSensorBegin","PlaneSensor",
"PointLightNodes","PointLightNode","PointLightBegin","PointLight","PointsetElements",
"PointsetElement","PointsetBegin","Pointset","PositionInterpElements","PositionInterpElement",
"PositionInterpBegin","PositionInterp","ProximitySensorElements","ProximitySensorElement",
"ProximitySensorBegin","ProximitySensor","ScalarInterpElements","ScalarInterpElement",
"ScalarInterpBegin","ScalarInterp","ScriptElements","ScriptURL","ScriptElement",
"ScriptBegin","Script","SharpElements","SharpElement","ShapeBegin","Shape","SoundElements",
"SoundElement","SoundBegin","Sound","SphereElements","SphereElement","SphereBegin",
"Sphere","SphereSensorElements","SphereSensorElement","SphereSensorBegin","SphereSensor",
"SpotLightElements","SpotLightElement","SpotLightBegin","SpotLight","SwitchElements",
"SwitchChoice","SwitchElement","SwitchBegin","Switch","TextElements","TextString",
"TextLength","TextElement","TextBegin","Text","TexCoordElements","TexCoordElement",
"TexCoordBegin","TexCoordinate","TextureTransformElements","TextureTransformElement",
"TexTransformBegin","TexTransform","TimeSensorElements","TimeSensorElement",
"TimeSensorBegin","TimeSensor","TouchSensorElements","TouchSensorElement","TouchSensorBegin",
"TouchSensor","TransformElements","TransformElement","TransformBegin","Transform",
"ViewpointElements","ViewpointElement","ViewpointBegin","Viewpoint","VisibilitySensors",
"VisibilitySensor","VisibilitySensorBegine","WorldInfoElements","WorldInfoInfo",
"WorldInfoElement","WorldInfoBegin","WorldInfo","WorldInfoBegin"
};
#endif

static const short yyr1[] = {     0,
   227,   227,   227,   228,   228,   229,   229,   229,   229,   229,
   229,   229,   229,   230,   230,   230,   230,   230,   230,   231,
   231,   231,   231,   231,   231,   231,   232,   232,   232,   232,
   232,   232,   232,   232,   232,   232,   233,   233,   233,   234,
   234,   234,   234,   234,   234,   235,   235,   235,   235,   236,
   236,   236,   236,   236,   236,   236,   237,   238,   239,   240,
   240,   241,   241,   242,   243,   244,   244,    -1,    -1,   245,
   246,   247,   247,   247,   247,   247,   248,   248,   249,   249,
   249,   249,   249,   250,   250,   251,   251,   251,   251,   251,
   252,   252,   253,   253,   253,   253,   253,   254,   254,   255,
   255,   255,   255,   255,   256,   256,   257,   257,   257,   257,
   257,   258,   258,   259,   259,   259,   259,   259,   260,   260,
   261,   262,   262,   263,   263,   264,   265,   266,   267,   268,
   268,   268,   268,   268,   268,   269,   270,   271,   271,   272,
   272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
   273,   274,   275,   275,   276,   277,   277,   277,   277,   277,
   277,   278,   279,   280,   280,   281,   282,   283,   284,   285,
   286,   287,   288,   289,   290,   291,   291,   291,   291,   291,
   291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
   292,   293,   294,   294,   295,   295,   295,   295,   296,   297,
   298,   298,   299,   300,   301,   302,   302,   303,   303,   304,
   304,   305,   306,   306,   306,   306,   306,   306,   306,   307,
   308,   309,   309,   310,   311,   312,   313,   313,   314,   315,
   316,   316,   317,   318,   319,   319,   320,   320,   320,   320,
   321,   322,   323,   323,   324,   325,   326,   326,   327,   327,
   328,   329,   330,   330,   331,   331,   331,   331,   331,   332,
   333,   334,   334,   335,   335,   335,   335,   335,   335,   336,
   337,   338,   338,   339,   339,   339,   339,   339,   340,   341,
   342,   342,   343,   344,   344,   344,   344,   344,   344,   344,
   344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
   344,   344,   345,   346,   347,   347,   348,   349,   350,   351,
   352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
   353,   354,   355,   355,   356,   356,   356,   357,   358,   359,
   359,   360,   361,   361,   361,   361,   361,   361,   361,   361,
   361,   362,   363,   364,   364,   365,   365,   365,   366,   367,
   368,   368,   369,   370,   370,   370,   371,   372,   373,   373,
   374,   375,   376,   377,   378,   378,   378,   378,   378,   378,
   378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
   378,   378,   378,   378,   378,   378,   379,   380,   381,   381,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   383,
   384,   385,   385,   386,   387,   387,   387,   388,   389,   390,
   390,   391,   392,   393,   393,   393,   393,   394,   395,   396,
   396,   397,   397,   397,   397,   397,   397,   397,   397,   397,
   397,   397,   398,   399,   400,   400,   401,   402,   402,   402,
   402,   402,   402,   402,   403,   404,   405,   405,   406,   407,
   408,   408,   408,   408,   408,   409,   410,   411,   411,   412,
   413,   414,   415,   415,   416,   416,   416,   417,   418,   419,
   419,   420,   420,   420,   421,   422,   423,   423,   424,   425,
   425,   425,   426,   427,   428,   428,   429,   429,   429,   429,
   429,   430,   431,   432,   432,   433,   433,   433,   433,   433,
   433,   433,   434,   435,   436,   436,   437,   437,   437,   437,
   437,   437,   438,   439,   440,   440,   441,   441,   441,   442,
   443,   444,   444,   445,   445,   445,   446,   447,   448,   448,
   449,   449,   449,   450,   451,   452,   452,   453,   454,   454,
   454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
   454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
   454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
   454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
   454,   454,   454,   454,   454,   454,   454,   454,   455,   456,
   457,   457,   458,   458,   458,   458,   458,   458,   459,   460,
   461,   461,   462,   462,   462,   462,   462,   462,   462,   462,
   462,   462,   462,   462,   462,   463,   464,   465,   465,   466,
   467,   468,   469,   469,   470,   470,   470,   471,   472,   473,
   473,   474,   474,   474,   474,   474,   474,   474,   474,   474,
   474,   475,   476,   477,   477,   478,   479,   479,   479,   480,
   481,   482,   482,   483,   484,   485,   485,   485,   485,   485,
   485,   486,   487,   488,   488,   489,   490,   491,   492,   492,
   493,   493,   493,   493,   494,   495,   496,   496,   497,   497,
   497,   497,   497,   498,   499,   500,   500,   501,   502,   503,
   504,   504,   505,   505,   505,   505,   505,   505,   505,   505,
   506,   507,   508,   508,   509,   509,   509,   509,   509,   509,
   509,   509,   509,   509,   510,   511,   512,   512,   513,   513,
   513,   514,   513,   515,   515,   516,   517,   517,   518,   519
};

static const short yyr2[] = {     0,
     1,     1,     1,     2,     0,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     3,     4,     2,     0,     3,     4,     2,
     3,     1,     3,     2,     1,     0,     1,     3,     1,     3,
     2,     1,     0,     1,     3,     1,     3,     2,     1,     0,
     1,     3,     1,     3,     2,     1,     0,     1,     3,     1,
     3,     2,     1,     0,     1,     3,     1,     3,     2,     1,
     0,     1,     3,     1,     3,     2,     1,     0,     1,     3,
     1,     1,     2,     2,     0,     1,     1,     2,     2,     1,
     2,     2,     2,     1,     1,     1,     4,     2,     0,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     1,     4,     2,     0,     1,     2,     2,     2,     2,     2,
     2,     1,     4,     2,     0,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
     1,     4,     2,     0,     1,     2,     1,     1,     1,     4,
     2,     0,     2,     1,     4,     2,     0,     4,     2,     2,
     0,     1,     1,     2,     1,     1,     2,     2,     2,     1,
     4,     2,     0,     2,     1,     4,     2,     0,     1,     1,
     2,     2,     1,     4,     2,     0,     2,     2,     2,     2,
     1,     4,     2,     0,     1,     4,     2,     0,     2,     2,
     1,     4,     2,     0,     2,     2,     2,     2,     2,     1,
     4,     2,     0,     2,     2,     2,     2,     2,     2,     1,
     4,     2,     0,     2,     2,     2,     2,     2,     1,     4,
     2,     0,     1,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     1,     4,     2,     0,     1,     1,     1,     1,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     1,     4,     2,     0,     2,     2,     2,     1,     4,     2,
     0,     1,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     3,     2,     0,     1,     1,     1,     1,     4,
     2,     0,     1,     2,     2,     2,     1,     4,     2,     0,
     1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     1,     4,     2,     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     3,     2,     0,     1,     2,     1,     1,     1,     4,     2,
     0,     1,     1,     2,     2,     2,     4,     1,     4,     2,
     0,     2,     2,     2,     2,     2,     2,     1,     1,     1,
     1,     1,     1,     4,     2,     0,     1,     2,     2,     2,
     2,     2,     2,     2,     1,     4,     2,     0,     1,     1,
     2,     2,     2,     2,     2,     1,     4,     2,     0,     2,
     1,     4,     2,     0,     2,     2,     2,     1,     4,     2,
     0,     2,     2,     2,     1,     4,     2,     0,     1,     4,
     2,     2,     1,     4,     2,     0,     2,     2,     2,     2,
     2,     1,     4,     2,     0,     2,     2,     2,     2,     2,
     2,     2,     1,     4,     2,     0,     2,     2,     2,     2,
     2,     2,     1,     4,     2,     0,     2,     2,     2,     1,
     4,     2,     0,     2,     2,     2,     1,     4,     2,     0,
     2,     2,     2,     1,     4,     2,     0,     1,     2,     2,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     4,     4,     4,
     4,     4,     4,     5,     4,     4,     4,     4,     1,     4,
     2,     0,     2,     2,     2,     2,     2,     2,     1,     4,
     2,     0,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     4,     2,     0,     2,
     1,     4,     2,     0,     2,     2,     2,     1,     4,     2,
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     1,     4,     2,     0,     1,     2,     4,     2,     1,
     4,     2,     0,     1,     1,     2,     2,     2,     2,     2,
     2,     1,     4,     2,     0,     2,     1,     4,     2,     0,
     2,     2,     2,     2,     1,     4,     2,     0,     2,     2,
     2,     2,     2,     1,     4,     2,     0,     2,     1,     4,
     2,     0,     1,     2,     2,     2,     2,     2,     1,     1,
     1,     4,     2,     0,     2,     2,     2,     2,     2,     1,
     1,     1,     1,     1,     1,     4,     2,     0,     2,     2,
     2,     1,     4,     2,     0,     1,     2,     2,     1,     4
};

static const short yydefact[] = {     0,
     2,   136,   162,   191,   199,   220,   233,   251,   270,   279,
     0,     3,   328,   408,   456,   349,   418,   520,   527,   534,
   589,   599,   616,   642,   628,   684,   650,   689,   715,   722,
   729,   468,   475,   503,   492,   701,     0,     0,     0,    56,
     1,    55,    53,    54,    41,    50,    51,     5,     0,     6,
     0,    40,     0,    46,     0,     7,     0,     8,     0,    14,
     0,    15,     0,    20,     0,    37,     0,    47,   331,    52,
     0,     9,     0,    10,     0,    11,     0,    48,     0,    16,
     0,    17,     0,    21,     0,    39,     0,    18,     0,    23,
     0,    19,     0,    42,     0,    43,     0,    44,     0,    22,
     0,    38,     0,    12,     0,    24,     0,    25,     0,    13,
     0,    49,    26,     0,     0,    45,   121,   342,    58,   720,
    61,    60,     0,   721,   719,     4,   125,   154,   165,   194,
   211,   228,   248,   263,   273,   324,     0,   332,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   331,   345,   403,
   411,   448,   464,   471,   486,   495,   516,   523,   530,   537,
   592,   602,   624,   631,   645,   678,   687,   692,   704,   718,
   725,     0,     0,   126,   127,     0,     0,     0,     0,     0,
     0,   134,   135,   125,   130,   155,     0,     0,     0,     0,
     0,     0,     0,   154,   187,   186,   172,   173,   166,   167,
   168,   169,   170,   171,   174,   175,   188,   190,   189,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   165,     0,   197,   198,     0,   194,   195,     0,   212,   215,
   216,   213,     0,     0,   211,   229,   230,     0,     0,     0,
   228,     0,     0,     0,   248,     0,     0,     0,     0,     0,
     0,     0,   263,     0,     0,     0,     0,     0,     0,   273,
     0,     0,     0,     0,   324,   334,    59,   336,   337,   341,
   339,   338,   333,   340,   122,   343,    97,    98,   335,   330,
   347,   348,   346,     0,   345,   404,   406,   407,     0,     0,
   403,   412,     0,   413,     0,     0,     0,   411,     0,   449,
     0,     0,   450,     0,     0,     0,   448,     0,     0,     0,
     0,   464,     0,     0,     0,     0,   471,     0,     0,     0,
     0,     0,     0,   486,     0,     0,     0,     0,     0,     0,
     0,     0,   495,     0,     0,     0,     0,   516,     0,     0,
     0,     0,   523,     0,     0,     0,     0,   530,   538,     0,
     0,     0,     0,     0,     0,     0,   537,     0,     0,     0,
   592,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   602,     0,     0,     0,     0,   624,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   631,
   646,     0,     0,     0,   645,     0,     0,     0,     0,     0,
     0,   678,     0,     0,   687,     0,     0,     0,     0,     0,
   699,   700,   693,     0,   692,   711,   710,     0,     0,     0,
     0,     0,   712,   714,   713,     0,   704,     0,   718,   726,
     0,     0,     0,   725,    71,   207,   209,   129,   128,   131,
   137,   132,   133,   124,   157,    63,    62,   159,   160,   158,
   156,   163,   161,   153,    70,   192,   178,   179,   180,   181,
   182,   183,    90,    91,   176,    76,     0,    77,   177,   184,
   185,   164,   196,   200,   193,   214,   218,   217,   221,   219,
   210,   234,   231,   232,   227,   249,   111,   112,   250,   252,
   247,   264,   265,   266,   267,   268,   269,   271,   262,   278,
   274,   275,   276,   277,   280,   272,   326,   327,   325,   329,
   323,   123,    96,    93,     0,   350,   344,   409,   405,   402,
   415,   419,   414,     5,   416,   410,   453,   455,   452,   457,
   451,   454,   447,   467,   465,   466,   469,   463,     0,   474,
   472,   118,   119,   473,   476,   470,   487,   488,   491,     0,
   489,   490,   493,   485,   496,   497,   502,   501,   499,   498,
   500,   504,   494,   519,   517,   518,   521,   515,   526,   525,
   524,   528,   522,   533,   531,   532,   535,   529,   540,   541,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   590,   539,   536,   151,
   593,   595,     0,   594,   204,   596,   241,   260,   321,   303,
   387,     0,   662,   513,   621,   598,   597,     0,    27,     0,
    28,     0,    29,     0,    30,     0,    31,     0,    32,   390,
    33,     0,    34,     0,    35,     0,    36,   600,   591,   606,
   608,   607,   609,   610,   611,   445,   614,   612,     0,   613,
   615,   604,   603,   605,   617,   601,   625,   626,   627,   629,
   623,   632,   633,   634,   641,   640,   638,   635,   637,   639,
   636,   643,   630,    57,   649,   651,     5,   647,   644,   681,
   682,   683,   680,   679,   685,   677,   688,   690,   686,   695,
   696,   694,   698,   697,   702,   691,   705,   706,   708,   707,
   709,   716,   703,   723,   717,   728,   730,   727,   724,   207,
     0,    89,    86,     0,    75,    72,     0,     0,   110,   107,
     0,    96,    95,    99,     0,     0,   117,   114,     0,    70,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
   552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
   562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
   572,   573,   574,   575,   576,   577,   139,   400,   202,   236,
   254,   282,   306,   360,     0,     0,   361,   362,     0,     0,
     0,     0,   390,   506,   619,   653,   436,     0,   206,   208,
    89,    88,    92,    75,    74,    78,    64,   110,   109,   113,
    94,   417,     0,   117,   116,   120,   578,   579,   580,   581,
   582,   583,     0,   585,   586,   587,   588,     0,     0,     0,
     0,   139,     0,     0,   202,     0,     0,     0,     0,     0,
   236,     0,     0,     0,     0,     0,     0,   254,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
     0,     0,     0,   282,     0,     0,     0,   307,     0,   310,
     0,     0,   309,   308,     0,     0,     0,     0,     0,   306,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   363,
   364,     0,     0,     0,     0,     0,     0,   360,   397,   245,
   394,   396,     0,   395,   225,   391,   393,     0,   392,    83,
    84,   398,   399,   401,   389,     0,     0,     0,   506,     0,
     0,   619,     0,   655,     0,   654,     0,     0,     0,   653,
   437,     0,     0,     0,     0,     0,     0,     0,     0,   436,
   648,    87,    73,   108,    65,   115,   584,   140,   433,   142,
     0,   141,   148,   675,   150,     0,   149,   143,   483,   357,
   147,     0,   144,   145,     0,   146,   152,   138,   203,   205,
   201,   237,   238,   239,   240,   242,   235,   255,   256,   257,
   259,   258,   261,   253,   287,   461,   289,     0,   288,   290,
   667,   292,     0,   291,   294,   297,   295,   298,   299,   300,
   301,   302,   296,   284,   286,   285,   304,   293,   281,   312,
   314,   311,   317,   315,   313,   322,   104,   105,   316,   318,
   319,   320,   305,   371,   373,   372,   374,   376,   375,   377,
   382,   380,   386,   379,   378,   368,   370,   369,   365,   367,
   366,   388,   381,   383,   384,   385,   359,   244,   223,    82,
    79,     0,   510,   512,   511,   507,   509,   508,   514,   505,
   620,   622,   618,   657,   659,   658,   661,   663,   656,   660,
   652,   438,   440,   441,   439,   443,   444,   446,   442,   435,
   421,   670,   352,   478,   459,   665,   103,   100,     0,     0,
     0,     0,     0,   223,    82,    81,    85,   429,   428,     0,
     0,     0,     0,     0,     0,   430,   432,   431,     0,   421,
     0,     0,     0,     0,     0,   670,   353,     0,     0,     0,
     0,   352,     0,     0,   479,     0,     0,   478,     0,     0,
   459,     0,     0,   665,   103,   102,   106,   243,   246,   224,
   226,   222,    80,   422,   423,   426,   424,   425,   427,   434,
   420,   672,   673,   671,   674,   676,   669,   355,   356,   358,
   354,   351,   481,   482,   484,    67,   477,   460,   462,   458,
   666,   668,   664,   101,    67,     0,    66,   480,     0,     0,
     0
};

static const short yydefgoto[] = {  1209,
    41,    42,    43,    44,   647,    45,    46,    47,    48,   941,
   120,   278,   123,   448,   468,   758,  1206,  1048,   488,   747,
   469,  1082,   942,   744,   465,   515,   279,  1119,  1049,   751,
   489,   759,   544,   118,   276,   179,   180,   181,   182,   183,
   184,    49,    50,   861,   862,   633,   634,   192,   193,   194,
    51,    52,   210,   211,   212,   213,   214,   215,   216,   217,
   218,   219,   220,   221,    53,    54,   225,   226,    55,    56,
   864,   865,   648,   649,   741,   185,   233,   234,   235,    57,
    58,  1123,  1124,   938,   939,   238,   239,   240,   241,    59,
    60,   870,   871,   650,   651,  1121,   933,   934,   244,   245,
    61,    62,   877,   878,   652,   653,   252,   253,    63,    64,
   259,   260,    65,    66,   892,   893,   894,   654,   655,   905,
   906,   907,   908,   909,   910,   656,   657,   264,   265,    67,
    68,   146,   147,   148,    69,    70,   284,   285,    71,    72,
  1150,  1151,  1152,   992,   993,   923,   820,   821,   926,   927,
   928,   658,   659,   822,   823,   660,   661,   289,   290,   291,
    73,    74,   295,   296,   297,   298,    75,    76,  1139,  1140,
   981,   982,   968,   969,   970,   679,   680,   304,   305,   306,
   307,    77,    78,  1160,  1161,  1018,  1019,   311,   312,    79,
    80,   316,   317,    81,    82,  1156,  1157,  1158,   995,   996,
   323,   324,    83,    84,   332,   333,    85,    86,   948,   949,
   662,   663,   337,   338,    87,    88,   342,   343,    89,    90,
   347,   348,    91,    92,   355,   356,   357,    93,    94,   360,
   361,    95,    96,   372,   373,    97,    98,   951,   952,   664,
   665,   377,   378,    99,   100,   389,   390,   101,   102,   393,
   394,   395,   103,   104,   957,   958,   959,   960,   666,   667,
  1163,  1164,  1023,  1024,  1145,  1146,   986,   987,   401,   402,
   105,   106,   404,   405,   107,   108,   414,   415,   109,   110,
   426,   427,   111,   112,   428,   113,   114,   432,   433,   434,
   115,   116
};

static const short yypact[] = {  1363,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -164,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,    60,   222,   222,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1759,  -164,-32768,
  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,
  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,   584,-32768,
  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,
  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,
  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,
  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,
  -164,-32768,-32768,  -164,  -164,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   222,-32768,-32768,-32768,   350,   357,   636,   496,
   647,   321,   321,   770,   302,   172,    60,-32768,   128,    60,
    60,   222,   222,   128,   128,  -100,    37,   584,   366,   426,
   330,   345,   215,   240,   540,   455,   284,    26,   311,   214,
   329,   686,   227,   397,   400,   492,    54,   401,   354,    35,
    -2,   222,  1420,-32768,-32768,   222,   222,   128,  -100,    37,
    37,-32768,-32768,   350,-32768,-32768,    60,   568,   568,   222,
   128,  -100,    37,   357,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   222,-32768,-32768,  -100,
    37,    37,    37,    37,    37,    37,    73,    77,    73,    77,
   636,   222,-32768,-32768,  -100,   496,-32768,    60,    30,-32768,
-32768,-32768,  -100,  1759,   647,-32768,-32768,  -100,    73,    77,
   321,    73,    96,  -100,   321,    60,   222,    60,   222,   222,
   222,  -100,   770,   222,    60,   222,   222,   222,  -100,   302,
   128,   222,   222,  -100,   172,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   -88,-32768,    22,-32768,-32768,-32768,
-32768,-32768,-32768,  -100,   366,-32768,-32768,-32768,  -100,    37,
   426,-32768,   222,-32768,  -100,    73,  1507,   330,   222,-32768,
   222,    60,-32768,  -100,    73,    37,   345,   222,    73,    96,
  -100,   215,   222,    73,    99,  -100,   240,    60,    60,   222,
   222,   222,  -100,   540,   222,   222,   222,    60,   222,   222,
   222,  -100,   455,   222,    73,    96,  -100,   284,    60,   222,
   222,  -100,    26,   222,    73,    73,  -100,   311,-32768,    60,
    60,   646,   730,   752,  -100,    37,   214,    70,   365,  -100,
   329,   222,   222,   222,   222,   222,    87,    60,   222,   222,
   222,  -100,   686,    60,    60,   222,  -100,   227,   222,   222,
   222,   222,    60,   222,   222,   222,   222,   222,  -100,   397,
-32768,   173,  -100,  1615,   400,    60,   568,   568,    60,   568,
  -100,   492,    60,  -100,    54,   222,   222,   222,   222,   222,
-32768,-32768,-32768,  -100,   401,-32768,-32768,   222,    60,   222,
   222,   128,   222,-32768,-32768,  -100,   354,  -100,    35,-32768,
   128,  -100,    37,    -2,-32768,  1759,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   222,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,    15,-32768,-32768,    42,   222,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,    44,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,    25,   -42,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1759,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   222,-32768,
-32768,    47,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   222,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   188,   193,   205,   210,   216,   224,   230,   232,   234,   248,
   259,   269,   271,   275,   294,   299,   306,   314,   320,   340,
   346,   349,   355,   360,   375,   382,   387,   404,   418,   431,
   442,   444,   449,   465,   475,   477,   482,   487,   497,   508,
   524,   529,   532,   541,   553,   569,-32768,-32768,-32768,-32768,
-32768,-32768,  -164,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  -164,-32768,-32768,-32768,-32768,-32768,  -164,-32768,  -164,
-32768,  -164,-32768,  -164,-32768,  -164,-32768,  -164,-32768,   550,
-32768,  -164,-32768,  -164,-32768,  -164,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -164,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1759,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1759,
   112,-32768,    50,   351,-32768,    61,   367,   222,-32768,    65,
   373,    22,-32768,-32768,   376,   222,-32768,    67,   377,-32768,
    60,   222,   173,   568,   222,    63,   222,   128,   222,   222,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   390,-32768,   414,   363,
   469,   557,   501,   676,    60,   147,-32768,-32768,    94,    29,
    29,  -100,   550,   -78,   420,   533,   601,   378,-32768,-32768,
    15,-32768,-32768,    42,-32768,-32768,-32768,    44,-32768,-32768,
-32768,-32768,   222,    47,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   598,-32768,-32768,-32768,-32768,   105,   123,    93,
  -100,   390,   222,  -100,   414,    60,    60,   222,   222,  -100,
   363,    60,    60,    60,   222,   222,  -100,   469,   159,   148,
    60,    60,   222,    60,   173,   222,   173,   222,    60,-32768,
   121,  -100,    73,   557,    60,   222,    60,-32768,    60,-32768,
    60,    60,-32768,-32768,  -100,   106,    99,   106,    96,   501,
   166,   170,    60,    60,   222,    60,    60,    60,   158,-32768,
-32768,   130,  -100,    29,    29,    29,    29,   676,-32768,-32768,
-32768,-32768,  -164,-32768,-32768,-32768,-32768,  -164,-32768,    13,
-32768,-32768,-32768,-32768,-32768,   163,   145,  -100,   -78,   222,
  -100,   420,   183,-32768,   222,-32768,  -100,    37,    73,   533,
-32768,    60,   568,   568,   222,    60,    60,  -100,    37,   601,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -164,-32768,-32768,-32768,-32768,  -164,-32768,-32768,-32768,-32768,
-32768,  -164,-32768,-32768,  -164,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -164,-32768,-32768,
-32768,-32768,  -164,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,    80,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   231,   435,-32768,
    21,   385,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   257,   374,   353,   117,   423,   450,-32768,    84,   393,    96,
  -100,    77,  -100,   435,    13,-32768,-32768,-32768,-32768,   222,
   222,   222,   222,   222,   222,   222,-32768,-32768,  -100,   257,
   222,   222,   222,   222,  -100,   374,-32768,    60,    60,  -100,
    37,   353,    60,    60,-32768,  -100,   395,   117,    96,  -100,
   423,   106,  -100,   450,    80,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   173,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   173,   396,-32768,-32768,   620,   629,
-32768
};

static const short yypgoto[] = {-32768,
   -37,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -142,  -383,
  -127,  -116,   155,  -169,  -251,  -256,  -568,  -126,   -38,  -641,
  -218,  -984,  -692,  -628,  -198,  -499,  -176, -1092,  -883,  -580,
  -303,  -636,  -262,  1251,   827,   462,-32768,-32768,   -64,    38,
-32768,-32768,-32768,  -215,-32768,-32768,-32768,   456,-32768,-32768,
-32768,   282,   433,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   429,-32768,-32768,-32768,
  -197,-32768,-32768,-32768,   -71,   -75,   443,-32768,-32768,-32768,
-32768,  -447,-32768,-32768,  -345,   446,    -1,   177,-32768,-32768,
-32768,  -188,-32768,-32768,-32768,-32768,-32768,  -729,   445,-32768,
-32768,-32768,  -187,-32768,-32768,-32768,   439,-32768,-32768,-32768,
   436,-32768,-32768,-32768,  -201,-32768,-32768,-32768,-32768,  -204,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   458,-32768,-32768,
-32768,   559,-32768,-32768,-32768,  -245,   440,-32768,-32768,-32768,
  -428,-32768,-32768,-32768,-32768,  -200,  -756,  -742,-32768,-32768,
-32768,-32768,-32768,   -93,-32768,-32768,-32768,   447,-32768,-32768,
-32768,-32768,   438,-32768,-32768,-32768,-32768,-32768,  -409,-32768,
-32768,-32768,  -236,-32768,-32768,-32768,  -123,   434,-32768,-32768,
-32768,-32768,-32768,  -413,-32768,-32768,  -161,   437,-32768,-32768,
-32768,   448,-32768,-32768,-32768,  -406,-32768,-32768,-32768,-32768,
   432,-32768,-32768,-32768,   430,-32768,-32768,-32768,  -196,-32768,
-32768,-32768,   428,-32768,-32768,-32768,   421,-32768,-32768,-32768,
   419,-32768,-32768,-32768,   412,-32768,-32768,-32768,-32768,   410,
-32768,-32768,-32768,   411,-32768,-32768,-32768,  -179,-32768,-32768,
-32768,   405,-32768,-32768,-32768,   398,-32768,-32768,-32768,   402,
-32768,-32768,-32768,-32768,  -175,-32768,-32768,-32768,-32768,-32768,
  -372,-32768,-32768,  -113,  -350,-32768,-32768,-32768,   399,-32768,
-32768,-32768,   406,-32768,-32768,-32768,   389,-32768,-32768,-32768,
   383,-32768,-32768,-32768,   386,  -162,-32768,   368,-32768,-32768,
-32768,-32768
};


#define	YYLAST		2274


static const short yytable[] = {   124,
   125,   471,   208,   442,   443,   503,   536,   429,   705,   266,
   126,   509,   269,   270,   753,   704,   453,   121,   122,   449,
   470,   484,   268,   704,  1051,  1166,   267,   273,   274,   267,
   437,   704,   566,   430,   457,   458,   459,   460,   461,   462,
   483,   267,   424,   486,   121,   122,   121,   122,   477,   121,
   122,   946,   121,   122,   227,   232,   540,   924,   543,   445,
   117,   440,   119,   121,   122,   223,   230,   121,   122,   121,
   122,   925,  1204,   283,   451,   121,   122,   630,   560,   121,
   122,   852,   121,   122,   281,   287,   121,   122,   631,    30,
   209,   480,   413,   947,   208,     3,  1126,   523,   121,   122,
   476,   121,   122,   411,   835,   675,   531,   935,   121,   122,
   535,   988,   936,   519,   832,   541,   676,   339,   492,   689,
   494,   845,   676,   978,   989,   275,    37,   501,   943,   532,
   425,   242,   267,   698,   935,   512,   565,   438,   439,  1034,
  1173,   983,   979,   935,   507,   403,   575,   576,  1069,   720,
   227,   309,   314,   724,   525,   335,   431,   345,   935,   232,
   514,   223,   930,  1086,   730,   931,  1020,   224,   231,   839,
   230,   924,   984,   930,   529,   704,  1066,  1015,   930,   628,
   754,  1083,   209,   473,  1054,   925,   282,   288,  1057,  1068,
   547,   548,   973,   761,   551,   552,  1021,  1016,   762,   340,
   558,  1094,   972,   341,  1016,   412,    11,   976,    38,   283,
   763,   569,    39,   990,   746,   764,  1085,   574,  1021,   504,
   281,   765,   579,   580,   121,   122,   287,   711,   712,   766,
   714,  1073,  1074,  1075,  1076,   767,  1080,   768,   742,   769,
   681,  1153,  1154,   242,  1125,   513,   687,   688,   752,   478,
   940,   708,   841,   770,   521,   696,   738,   974,   277,   121,
   122,  1128,  1129,   224,   771,   745,   429,   749,   710,   534,
   757,   713,   231,   831,   772,   717,   773,   172,  1201,   349,
   774,   549,   853,   207,   834,   261,   262,   556,   838,   632,
   844,   728,   561,   740,   463,   564,   271,   272,   466,   775,
   424,   570,   571,  1117,   776,   731,   677,  1165,  1155,   243,
   309,   777,   991,   937,   736,   314,   374,   487,   375,   778,
   542,   376,   282,   423,   980,   779,   435,  1047,   288,   310,
   315,   683,   684,   336,   830,   346,   335,   236,   237,   413,
  1035,   693,   985,   263,   450,   780,   345,   699,   700,  1070,
   411,   781,   350,   351,   782,  1130,   121,   122,   416,   417,
   783,   455,   236,   237,  1087,   784,   932,  1022,   721,   722,
   723,   464,   467,   464,   467,   207,   635,  1067,  1017,   849,
   785,   729,  1084,   636,   637,  1055,   638,   786,   425,  1058,
   639,   640,   787,   464,   467,  1120,   464,   514,   641,   642,
   254,   493,  1095,   495,   496,   497,   236,   237,   500,   788,
   502,   467,   643,   173,   174,   175,   508,   467,  1147,   299,
   300,   243,   186,   789,   644,   645,   187,   188,   189,   173,
   352,   353,   354,   236,   237,   308,   790,  1131,  1132,  1133,
  1134,  1135,   301,   236,   237,   176,   177,   791,   750,   792,
   464,   866,   412,   527,   793,   528,   858,   859,   860,   464,
   313,   176,   177,   464,   173,   358,   359,   539,   464,   539,
   794,   255,   256,   257,   258,   550,   550,  1148,  1149,   555,
   795,   557,   796,   559,   467,   190,   755,   797,   310,   464,
   867,   286,   798,   315,   746,   379,   176,   177,   550,   464,
   464,  1029,   799,  1031,   334,   302,   292,   293,   851,   294,
   418,   419,   303,   800,   336,   854,   670,   671,   672,   673,
   674,   176,   177,   682,   346,   868,   869,  1141,  1142,   801,
   539,   344,   380,   692,   802,   694,   695,   803,   697,   467,
   420,   421,   701,   178,   381,  1036,   804,   422,   391,   392,
   191,  1143,  1144,   325,   406,   407,  1081,   872,   805,   173,
   539,   396,   397,   398,   539,   382,   383,   384,   385,   386,
   446,   447,   727,   833,   806,   539,  1071,   455,   408,   409,
   222,   423,   746,   399,   646,   387,   388,   863,   950,   836,
   326,   176,   177,   410,   850,   840,   873,   740,   842,   846,
   971,  1088,   895,   977,   896,  1052,  1122,  1127,  1159,   435,
   897,   898,   899,   900,  1162,  1167,  1196,   743,  1208,  1210,
   467,   748,   901,   327,   328,   329,   330,   902,  1211,   318,
   874,   319,   875,   847,   320,   514,  1207,   876,   121,   122,
   195,   196,   856,   331,  1050,   444,   998,   400,   678,   454,
   543,   855,   815,   472,   475,   903,   879,   880,   881,   882,
   883,   884,   885,   886,   887,   888,   961,  1001,   829,   828,
   962,   963,   964,   321,   322,   965,  1172,   481,   889,   816,
   817,   818,  1007,   953,   954,   955,   485,   929,   904,   491,
  1014,   499,  1039,   756,  1038,   506,   539,  1081,   956,   137,
   138,   139,   140,   141,   760,  1053,   280,  1096,   197,   198,
   173,   750,   199,   200,   201,   202,   203,   204,   205,   206,
   890,   819,   511,  1192,   517,   966,   967,  1077,   891,   945,
  1181,   857,   228,  1110,   229,   526,   994,   520,  1002,  1003,
   533,  1081,   176,   177,  1008,  1009,  1010,  1200,   538,  1056,
   142,  1197,  1090,  1025,  1026,   554,  1028,   143,   144,   145,
  1100,  1033,   563,   573,   546,   568,   578,  1040,   629,  1042,
   669,  1043,  1093,  1044,  1045,   911,   912,   913,   914,   915,
   916,  1099,   691,   686,  1101,  1060,  1061,   703,  1063,  1064,
  1065,  1203,  1109,  1103,  1104,  1187,   709,   917,  1059,   750,
   716,   739,   918,   726,     0,   919,   817,   818,   920,   733,
   719,     0,  1205,     0,   735,     0,  1168,     0,     0,     0,
     0,  1205,     0,     0,   999,     0,   362,   363,   364,   365,
   366,   367,   368,     0,  1102,   921,     0,     0,  1106,  1107,
   581,   582,   583,   584,   585,   586,   587,   922,   588,   589,
   590,     0,     0,     0,     0,  1198,   369,     0,   370,   246,
   247,   248,   249,   250,   251,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   371,     0,     0,     0,     0,  1175,
  1176,  1177,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   743,     0,     0,
   467,     0,   837,  1170,     0,     0,     0,     0,     0,     0,
   843,     0,   539,     0,     0,     0,   848,     0,     0,   539,
  1118,   467,     0,   550,   591,   592,   593,   594,   595,     0,
   596,   597,   598,   599,   600,     0,   601,   602,   603,   604,
     0,   605,     0,   606,   607,   608,   609,   610,   611,   612,
   613,     0,   614,   615,   616,   617,   618,     0,   619,   620,
   621,   622,     0,   623,     0,   624,   625,   626,     0,     0,
     0,     0,     0,     0,  1191,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1137,   743,     0,     0,   467,     0,
     0,  1118,     0,     0,     0,     0,     0,   975,   539,     0,
     0,     0,     0,     0,     0,   441,     0,     0,     0,     0,
     0,     0,     0,  1137,     0,  1183,  1184,  1185,   452,     0,
  1188,  1189,  1004,  1005,     0,  1193,  1194,     0,     0,  1011,
  1012,     0,     0,     0,     0,     0,   456,  1027,  1118,     0,
  1030,     0,  1032,     0,     0,     0,     0,   464,     0,     0,
  1041,   474,     0,     0,     0,     0,     0,     0,     0,   479,
   550,   539,   550,     0,   482,     0,     0,     0,     0,  1062,
   490,     0,  1138,     0,     0,     0,     0,     0,   498,     0,
     0,     0,     0,     0,     0,   505,     0,     0,     0,     0,
   510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1138,     0,     0,  1091,     0,     0,     0,     0,  1097,
   516,     0,     0,   464,     0,   518,     0,     0,     0,  1105,
     0,   522,     0,     0,     0,     0,     0,     0,     0,     0,
   530,     0,     0,     0,     0,     0,     0,   537,     0,     0,
     0,     0,   545,     0,     0,     0,     0,     0,     0,   553,
     0,     0,     0,     0,     0,     0,     0,     0,   562,     0,
     0,     0,     0,   567,     0,     0,     0,     0,   572,     0,
     0,     0,     0,   577,     0,     0,     0,     0,     0,     0,
     0,   627,     0,     0,     0,     0,   668,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   685,     0,
     0,   550,     0,   690,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   702,     0,     0,     0,   706,
     0,     0,     0,     0,     0,     0,     0,   715,     0,     0,
   718,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   725,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   732,     0,   734,     0,     0,     0,   737,     0,
     0,     0,     0,     0,     0,  1136,     0,     0,     0,     0,
     0,     0,   550,     0,     0,     0,   467,     0,     0,     0,
     0,     0,     0,     0,  1174,   467,   467,   467,  1178,  1179,
   455,     0,     0,     0,  1136,  1182,   550,   550,   550,   127,
     0,   128,     0,   129,     0,   130,     0,   131,     0,   132,
     0,   133,     0,   134,     0,   135,   550,   136,     0,   550,
     0,   149,     0,   150,     0,   151,     0,   152,     0,   153,
     0,   154,     0,   155,     0,   156,     0,   157,     0,   158,
     0,   159,     0,   160,     0,   161,     0,   162,     0,   163,
     0,   164,     0,   165,     0,   166,     0,   167,     0,   168,
     0,   169,    -5,     1,   170,   171,     0,     0,     0,     2,
     0,     3,     4,     5,     0,     6,     0,     7,     0,     8,
     9,     0,     0,     0,     0,    10,    11,    12,     0,     0,
    13,    14,     0,    15,     0,    16,     0,     0,     0,    17,
     0,     0,    18,    19,    20,    21,    22,    23,    24,    25,
     0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
    33,    34,     0,     0,    35,    36,     2,     0,     3,     4,
     5,     0,     6,     0,     7,     0,     8,     9,     0,     0,
     0,     0,    10,    11,     0,     0,     0,    13,    14,     0,
    15,     0,    16,     0,    37,     0,    17,     0,     0,    18,
    19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
    26,    27,    28,    29,    30,    31,    32,    33,    34,     0,
     0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    37,     0,     2,     0,     3,     4,     5,     0,     6,
     0,     7,     0,     8,     9,     0,     0,     0,     0,    10,
    11,     0,     0,     0,    13,    14,    38,    15,     0,    16,
    39,     0,     0,    17,     0,     0,    18,    19,    20,    21,
    22,    23,    24,    25,     0,     0,     0,    26,    27,    28,
    29,    30,    31,    32,    33,    34,     0,     0,    35,    36,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    40,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    38,     0,     0,     0,    39,    37,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     2,     0,     3,     4,     5,     0,     6,     0,     7,
     0,     8,     9,     0,     0,     0,     0,    10,    11,    40,
     0,   436,    13,    14,     0,    15,     0,    16,   944,     0,
     0,    17,     0,     0,    18,    19,    20,    21,    22,    23,
    24,    25,     0,     0,     0,    26,    27,    28,    29,    30,
    31,    32,    33,    34,     0,     0,    35,    36,     0,     0,
    38,     0,     0,     0,    39,     0,     0,   997,     0,     0,
  1000,     0,     0,     0,     0,     0,  1006,     0,     0,     0,
     0,     0,     0,  1013,     0,     0,    37,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1037,     0,
     0,     0,     0,     0,     0,     0,    40,     0,   524,     0,
     0,  1046,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1072,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
     0,     6,     0,     7,  1089,     8,     9,  1092,     0,     0,
     0,    10,    11,  1098,     0,     0,    13,    14,    38,    15,
     0,    16,    39,     0,  1108,    17,     0,     0,    18,    19,
    20,    21,    22,    23,    24,    25,     0,     0,     0,    26,
    27,    28,    29,    30,    31,    32,    33,    34,     0,     0,
    35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    40,     0,   707,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   807,     0,     0,     0,     0,     0,     0,
     0,     0,   808,     0,     0,     0,     0,     0,   809,     0,
   810,     0,   811,     0,   812,     0,   813,     0,   814,     0,
     0,     0,   824,     0,   825,     0,   826,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   827,
     0,     0,    38,     0,     0,     0,    39,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1169,     0,  1171,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1180,     0,     0,     0,     0,
     0,  1186,     0,     0,     0,     0,  1190,     0,    40,     0,
     0,     0,  1195,     0,     0,     0,  1199,     0,     0,  1202,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1078,     0,     0,     0,     0,  1079,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1111,     0,     0,     0,     0,  1112,     0,     0,     0,
     0,     0,  1113,     0,     0,  1114,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1115,     0,
     0,     0,     0,  1116
};

static const short yycheck[] = {    38,
    39,   220,   129,   180,   181,   257,   310,   170,   392,   137,
    48,   263,   140,   141,   514,     3,   193,     3,     4,   189,
   219,   240,   139,     3,   908,  1118,     5,   144,   145,     5,
   173,     3,   336,    36,   211,   212,   213,   214,   215,   216,
   239,     5,   169,   242,     3,     4,     3,     4,    19,     3,
     4,   130,     3,     4,   130,   131,   313,   814,   315,   187,
   225,   178,     3,     3,     4,   130,   131,     3,     4,     3,
     4,   814,  1165,   149,   191,     3,     4,     8,   330,     3,
     4,    19,     3,     4,   149,   150,     3,     4,    19,    55,
   129,   234,   168,   172,   221,     9,  1081,   296,     3,     4,
   228,     3,     4,   168,   746,    19,   305,    14,     3,     4,
   309,    19,    19,   290,   743,   314,    30,    92,   246,   376,
   248,   758,    30,    19,    32,   226,    92,   255,   821,   306,
   169,   133,     5,   385,    14,   224,   335,   176,   177,    19,
  1125,    19,    38,    14,   261,    92,   345,   346,    19,   406,
   226,   153,   154,   410,   297,   157,   159,   159,    14,   235,
   277,   226,    16,    19,   421,    19,    19,   130,   131,   750,
   235,   928,    50,    16,   302,     3,    19,    19,    16,   356,
   223,    19,   221,   222,    19,   928,   149,   150,    19,   919,
   318,   319,   834,     6,   321,   322,    49,    39,     6,   174,
   328,    19,   831,   178,    39,   168,    24,   844,   174,   285,
     6,   339,   178,   121,   466,     6,   946,   344,    49,   258,
   285,     6,   350,   351,     3,     4,   291,   397,   398,     6,
   400,   924,   925,   926,   927,     6,   224,     6,   224,     6,
   368,   125,   126,   245,   224,   224,   374,   375,   224,   220,
   222,   394,   752,     6,   293,   383,   433,   838,   222,     3,
     4,     5,     6,   226,     6,   224,   429,   224,   396,   308,
   224,   399,   235,   224,     6,   403,     6,   123,  1162,    66,
     6,   320,   220,   129,   224,   114,   115,   326,   224,   220,
   224,   419,   331,   436,   222,   334,   142,   143,   222,     6,
   427,   340,   341,   224,     6,   422,   220,   224,   192,   133,
   312,     6,   220,   220,   431,   317,    90,   222,    92,     6,
   222,    95,   285,   169,   220,     6,   172,   222,   291,   153,
   154,   370,   371,   157,   223,   159,   338,   123,   124,   415,
   220,   380,   220,   172,   190,     6,   348,   386,   387,   220,
   415,     6,   139,   140,     6,    99,     3,     4,     5,     6,
     6,   207,   123,   124,   220,     6,   220,   220,   407,   408,
   409,   217,   218,   219,   220,   221,    12,   220,   220,   763,
     6,   420,   220,    19,    20,   220,    22,     6,   427,   220,
    26,    27,     6,   239,   240,   165,   242,   514,    34,    35,
    99,   247,   220,   249,   250,   251,   123,   124,   254,     6,
   256,   257,    48,    64,    65,    66,   262,   263,    66,    75,
    76,   245,    66,     6,    60,    61,    70,    71,    72,    64,
   217,   218,   219,   123,   124,   221,     6,   181,   182,   183,
   184,   185,    98,   123,   124,    96,    97,     6,   487,     6,
   296,    89,   415,   299,     6,   301,    67,    68,    69,   305,
   221,    96,    97,   309,    64,   137,   138,   313,   314,   315,
     6,   170,   171,   172,   173,   321,   322,   125,   126,   325,
     6,   327,     6,   329,   330,   129,   524,     6,   312,   335,
   128,    66,     6,   317,   746,    99,    96,    97,   344,   345,
   346,   885,     6,   887,   221,   161,   177,   178,   765,   180,
   157,   158,   168,     6,   338,   767,   362,   363,   364,   365,
   366,    96,    97,   369,   348,   163,   164,   154,   155,     6,
   376,   221,   136,   379,     6,   381,   382,     6,   384,   385,
   187,   188,   388,   194,   148,   891,     6,   194,   149,   150,
   194,   178,   179,    99,   154,   155,   940,    89,     6,    64,
   406,    70,    71,    72,   410,   169,   170,   171,   172,   173,
     3,     4,   418,   223,     6,   421,   922,   423,   178,   179,
    85,   427,   834,    92,   220,   189,   190,   174,   169,   223,
   136,    96,    97,   193,   764,   223,   128,   740,   223,   223,
   223,   947,   102,     6,   104,   909,   172,   223,   186,   455,
   110,   111,   112,   113,   165,   223,   222,   463,   223,     0,
   466,   467,   122,   169,   170,   171,   172,   127,     0,    90,
   162,    92,   164,   761,    95,   752,  1205,   169,     3,     4,
     5,     6,   769,   189,   907,   184,   862,   156,   367,   194,
   907,   768,   103,   221,   226,   155,   100,   101,   102,   103,
   104,   105,   106,   107,   108,   109,    66,   865,   740,   707,
    70,    71,    72,   134,   135,    75,  1124,   235,   122,   130,
   131,   132,   871,   151,   152,   153,   241,   815,   188,   245,
   878,   253,   894,   539,   893,   260,   542,  1081,   166,   116,
   117,   118,   119,   120,   550,   910,   148,   953,    73,    74,
    64,   750,    77,    78,    79,    80,    81,    82,    83,    84,
   164,   172,   265,  1152,   285,   125,   126,   928,   172,   823,
  1140,   770,    86,   970,    88,   298,   860,   291,   866,   867,
   307,  1125,    96,    97,   872,   873,   874,  1161,   312,   911,
   167,  1158,   949,   881,   882,   324,   884,   174,   175,   176,
   959,   889,   333,   343,   317,   338,   348,   895,   357,   897,
   361,   899,   952,   901,   902,   100,   101,   102,   103,   104,
   105,   958,   378,   373,   960,   913,   914,   390,   916,   917,
   918,  1164,   969,   963,   964,  1146,   395,   122,   912,   838,
   402,   434,   127,   415,    -1,   130,   131,   132,   133,   427,
   405,    -1,  1196,    -1,   429,    -1,  1120,    -1,    -1,    -1,
    -1,  1205,    -1,    -1,   863,    -1,   141,   142,   143,   144,
   145,   146,   147,    -1,   962,   160,    -1,    -1,   966,   967,
   195,   196,   197,   198,   199,   200,   201,   172,   203,   204,
   205,    -1,    -1,    -1,    -1,  1159,   171,    -1,   173,    90,
    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,  1131,
  1132,  1133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   743,    -1,    -1,
   746,    -1,   748,  1122,    -1,    -1,    -1,    -1,    -1,    -1,
   756,    -1,   758,    -1,    -1,    -1,   762,    -1,    -1,   765,
  1047,   767,    -1,   769,   195,   196,   197,   198,   199,    -1,
   201,   202,   203,   204,   205,    -1,   207,   208,   209,   210,
    -1,   212,    -1,   214,   215,   216,   195,   196,   197,   198,
   199,    -1,   201,   202,   203,   204,   205,    -1,   207,   208,
   209,   210,    -1,   212,    -1,   214,   215,   216,    -1,    -1,
    -1,    -1,    -1,    -1,  1151,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1111,   831,    -1,    -1,   834,    -1,
    -1,  1118,    -1,    -1,    -1,    -1,    -1,   843,   844,    -1,
    -1,    -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1140,    -1,  1142,  1143,  1144,   192,    -1,
  1148,  1149,   868,   869,    -1,  1153,  1154,    -1,    -1,   875,
   876,    -1,    -1,    -1,    -1,    -1,   210,   883,  1165,    -1,
   886,    -1,   888,    -1,    -1,    -1,    -1,   893,    -1,    -1,
   896,   225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
   906,   907,   908,    -1,   238,    -1,    -1,    -1,    -1,   915,
   244,    -1,  1111,    -1,    -1,    -1,    -1,    -1,   252,    -1,
    -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
   264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1140,    -1,    -1,   950,    -1,    -1,    -1,    -1,   955,
   284,    -1,    -1,   959,    -1,   289,    -1,    -1,    -1,   965,
    -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   304,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,
    -1,    -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,   323,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,
    -1,    -1,    -1,   337,    -1,    -1,    -1,    -1,   342,    -1,
    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   355,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,
    -1,  1047,    -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   389,    -1,    -1,    -1,   393,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   401,    -1,    -1,
   404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   414,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   426,    -1,   428,    -1,    -1,    -1,   432,    -1,
    -1,    -1,    -1,    -1,    -1,  1111,    -1,    -1,    -1,    -1,
    -1,    -1,  1118,    -1,    -1,    -1,  1122,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1130,  1131,  1132,  1133,  1134,  1135,
  1136,    -1,    -1,    -1,  1140,  1141,  1142,  1143,  1144,    49,
    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,
    -1,    61,    -1,    63,    -1,    65,  1162,    67,    -1,  1165,
    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,
    -1,    81,    -1,    83,    -1,    85,    -1,    87,    -1,    89,
    -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
    -1,   101,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
    -1,   111,     0,     1,   114,   115,    -1,    -1,    -1,     7,
    -1,     9,    10,    11,    -1,    13,    -1,    15,    -1,    17,
    18,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
    28,    29,    -1,    31,    -1,    33,    -1,    -1,    -1,    37,
    -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    -1,    -1,    62,    63,     7,    -1,     9,    10,
    11,    -1,    13,    -1,    15,    -1,    17,    18,    -1,    -1,
    -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
    31,    -1,    33,    -1,    92,    -1,    37,    -1,    -1,    40,
    41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    92,    -1,     7,    -1,     9,    10,    11,    -1,    13,
    -1,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,    23,
    24,    -1,    -1,    -1,    28,    29,   174,    31,    -1,    33,
   178,    -1,    -1,    37,    -1,    -1,    40,    41,    42,    43,
    44,    45,    46,    47,    -1,    -1,    -1,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    -1,    -1,    62,    63,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   174,    -1,    -1,    -1,   178,    92,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     7,    -1,     9,    10,    11,    -1,    13,    -1,    15,
    -1,    17,    18,    -1,    -1,    -1,    -1,    23,    24,   220,
    -1,   222,    28,    29,    -1,    31,    -1,    33,   822,    -1,
    -1,    37,    -1,    -1,    40,    41,    42,    43,    44,    45,
    46,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    -1,    -1,    62,    63,    -1,    -1,
   174,    -1,    -1,    -1,   178,    -1,    -1,   861,    -1,    -1,
   864,    -1,    -1,    -1,    -1,    -1,   870,    -1,    -1,    -1,
    -1,    -1,    -1,   877,    -1,    -1,    92,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   892,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,   222,    -1,
    -1,   905,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   923,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     7,    -1,     9,    10,    11,
    -1,    13,    -1,    15,   948,    17,    18,   951,    -1,    -1,
    -1,    23,    24,   957,    -1,    -1,    28,    29,   174,    31,
    -1,    33,   178,    -1,   968,    37,    -1,    -1,    40,    41,
    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   220,    -1,   222,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   633,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   642,    -1,    -1,    -1,    -1,    -1,   648,    -1,
   650,    -1,   652,    -1,   654,    -1,   656,    -1,   658,    -1,
    -1,    -1,   662,    -1,   664,    -1,   666,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   679,
    -1,    -1,   174,    -1,    -1,    -1,   178,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1121,    -1,  1123,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1139,    -1,    -1,    -1,    -1,
    -1,  1145,    -1,    -1,    -1,    -1,  1150,    -1,   220,    -1,
    -1,    -1,  1156,    -1,    -1,    -1,  1160,    -1,    -1,  1163,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   933,    -1,    -1,    -1,    -1,   938,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   981,    -1,    -1,    -1,    -1,   986,    -1,    -1,    -1,
    -1,    -1,   992,    -1,    -1,   995,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1018,    -1,
    -1,    -1,    -1,  1023
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 2:
#line 148 "vrml.y"
{YYABORT;;
    break;}
case 3:
#line 149 "vrml.y"
{YYABORT;;
    break;}
case 57:
#line 234 "vrml.y"
{
			AddSFInt32(yyvsp[0].ival);
		;
    break;}
case 59:
#line 245 "vrml.y"
{
			AddSFString(yyvsp[0].sval);
		;
    break;}
case 60:
#line 252 "vrml.y"
{
			AddSFFloat(yyvsp[0].fval);
		;
    break;}
case 61:
#line 256 "vrml.y"
{
			yyval.fval = (float)yyvsp[0].ival;
			AddSFFloat((float)yyvsp[0].ival);
		;
    break;}
case 63:
#line 264 "vrml.y"
{yyval.fval = (float)yyvsp[0].ival;;
    break;}
case 64:
#line 269 "vrml.y"
{
			gColor[0] = yyvsp[-2].fval;
			gColor[1] = yyvsp[-1].fval;
			gColor[2] = yyvsp[0].fval;
			AddSFColor(gColor);
	    ;
    break;}
case 65:
#line 279 "vrml.y"
{
			gRotation[0] = yyvsp[-3].fval;
			gRotation[1] = yyvsp[-2].fval;
			gRotation[2] = yyvsp[-1].fval;
			gRotation[3] = yyvsp[0].fval;
			AddSFRotation(gRotation);
		;
    break;}
case 66:
#line 289 "vrml.y"
{;
    break;}
case 68:
#line 296 "vrml.y"
{
			gWidth = yyvsp[-2].ival;
			gHeight = yyvsp[-1].ival;
			gComponents = yyvsp[0].ival;
	    ;
    break;}
case 70:
#line 309 "vrml.y"
{
			gVec2f[0] = yyvsp[-1].fval;
			gVec2f[1] = yyvsp[0].fval;
			AddSFVec2f(gVec2f);
		;
    break;}
case 71:
#line 318 "vrml.y"
{
			gVec3f[0] = yyvsp[-2].fval;
			gVec3f[1] = yyvsp[-1].fval;
			gVec3f[2] = yyvsp[0].fval;
			AddSFVec3f(gVec3f);
		;
    break;}
case 79:
#line 340 "vrml.y"
{;
    break;}
case 80:
#line 341 "vrml.y"
{;
    break;}
case 81:
#line 342 "vrml.y"
{;
    break;}
case 84:
#line 348 "vrml.y"
{;
    break;}
case 85:
#line 349 "vrml.y"
{;
    break;}
case 86:
#line 354 "vrml.y"
{;
    break;}
case 87:
#line 355 "vrml.y"
{;
    break;}
case 88:
#line 356 "vrml.y"
{;
    break;}
case 91:
#line 362 "vrml.y"
{;
    break;}
case 92:
#line 363 "vrml.y"
{;
    break;}
case 93:
#line 367 "vrml.y"
{;
    break;}
case 94:
#line 368 "vrml.y"
{;
    break;}
case 95:
#line 369 "vrml.y"
{;
    break;}
case 98:
#line 375 "vrml.y"
{;
    break;}
case 99:
#line 376 "vrml.y"
{;
    break;}
case 126:
#line 440 "vrml.y"
{
			PushNode(VRML_NODETYPE_ANCHOR_PARAMETER, GetCurrentNodeObject());
		;
    break;}
case 127:
#line 447 "vrml.y"
{
			PushNode(VRML_NODETYPE_ANCHOR_URL, GetCurrentNodeObject());
		;
    break;}
case 128:
#line 454 "vrml.y"
{
			((GroupingNode *)GetCurrentNodeObject())->setBoundingBoxCenter(gVec3f);
		;
    break;}
case 129:
#line 461 "vrml.y"
{
			((GroupingNode *)GetCurrentNodeObject())->setBoundingBoxSize(gVec3f);
		;
    break;}
case 131:
#line 469 "vrml.y"
{
			((AnchorNode *)GetCurrentNodeObject())->setDescription(yyvsp[0].sval);
		;
    break;}
case 132:
#line 474 "vrml.y"
{
			PopNode();
		;
    break;}
case 133:
#line 478 "vrml.y"
{
			PopNode();
		;
    break;}
case 136:
#line 487 "vrml.y"
{   
			AnchorNode	*anchor = new AnchorNode();
			anchor->setName(GetDEFName());
			AddNode(anchor);
			PushNode(VRML_NODETYPE_ANCHOR, anchor);
		;
    break;}
case 137:
#line 497 "vrml.y"
{
			AnchorNode *anchor = (AnchorNode *)GetCurrentNodeObject();
			anchor->initialize();
			PopNode();
		;
    break;}
case 151:
#line 531 "vrml.y"
{
			AppearanceNode	*appearance = new AppearanceNode();
			appearance->setName(GetDEFName());
			AddNode(appearance);
			PushNode(VRML_NODETYPE_APPEARANCE, appearance);
		;
    break;}
case 152:
#line 541 "vrml.y"
{
			AppearanceNode	*appearance = (AppearanceNode *)GetCurrentNodeObject();
			appearance->initialize();
			PopNode();
		;
    break;}
case 155:
#line 561 "vrml.y"
{
			PushNode(VRML_NODETYPE_AUDIOCLIP_URL, GetCurrentNodeObject());
		;
    break;}
case 156:
#line 568 "vrml.y"
{
			((AudioClipNode *)GetCurrentNodeObject())->setDescription(yyvsp[0].sval);
		;
    break;}
case 157:
#line 572 "vrml.y"
{
			((AudioClipNode *)GetCurrentNodeObject())->setLoop(yyvsp[0].ival);
		;
    break;}
case 158:
#line 576 "vrml.y"
{
			((AudioClipNode *)GetCurrentNodeObject())->setPitch(yyvsp[0].fval);
		;
    break;}
case 159:
#line 580 "vrml.y"
{
			((AudioClipNode *)GetCurrentNodeObject())->setStartTime(yyvsp[0].fval);
		;
    break;}
case 160:
#line 584 "vrml.y"
{
			((AudioClipNode *)GetCurrentNodeObject())->setStopTime(yyvsp[0].fval);
		;
    break;}
case 161:
#line 588 "vrml.y"
{
			PopNode();
		;
    break;}
case 162:
#line 595 "vrml.y"
{
			AudioClipNode	*audioClip = new AudioClipNode();
			audioClip->setName(GetDEFName());
			AddNode(audioClip);
			PushNode(VRML_NODETYPE_AUDIOCLIP, audioClip);
		;
    break;}
case 163:
#line 604 "vrml.y"
{
			AudioClipNode *audioClip = (AudioClipNode *)GetCurrentNodeObject();
			audioClip->initialize();
			PopNode();
		;
    break;}
case 166:
#line 624 "vrml.y"
{
			PushNode(VRML_NODETYPE_BACKGROUND_BACKURL, GetCurrentNodeObject());
		;
    break;}
case 167:
#line 631 "vrml.y"
{
			PushNode(VRML_NODETYPE_BACKGROUND_BOTTOMURL, GetCurrentNodeObject());
		;
    break;}
case 168:
#line 638 "vrml.y"
{
			PushNode(VRML_NODETYPE_BACKGROUND_FRONTURL, GetCurrentNodeObject());
		;
    break;}
case 169:
#line 645 "vrml.y"
{
			PushNode(VRML_NODETYPE_BACKGROUND_LEFTURL, GetCurrentNodeObject());
		;
    break;}
case 170:
#line 652 "vrml.y"
{
			PushNode(VRML_NODETYPE_BACKGROUND_RIGHTURL, GetCurrentNodeObject());
		;
    break;}
case 171:
#line 659 "vrml.y"
{
			PushNode(VRML_NODETYPE_BACKGROUND_TOPURL, GetCurrentNodeObject());
		;
    break;}
case 172:
#line 666 "vrml.y"
{
			PushNode(VRML_NODETYPE_BACKGROUND_GROUNDANGLE, GetCurrentNodeObject());
		;
    break;}
case 173:
#line 673 "vrml.y"
{
			PushNode(VRML_NODETYPE_BACKGROUND_GROUNDCOLOR, GetCurrentNodeObject());
		;
    break;}
case 174:
#line 680 "vrml.y"
{
			PushNode(VRML_NODETYPE_BACKGROUND_SKYANGLE, GetCurrentNodeObject());
		;
    break;}
case 175:
#line 687 "vrml.y"
{
			PushNode(VRML_NODETYPE_BACKGROUND_SKYCOLOR, GetCurrentNodeObject());
		;
    break;}
case 176:
#line 694 "vrml.y"
{
			PopNode();
		;
    break;}
case 177:
#line 698 "vrml.y"
{
			PopNode();
		;
    break;}
case 178:
#line 702 "vrml.y"
{
			PopNode();
		;
    break;}
case 179:
#line 706 "vrml.y"
{
			PopNode();
		;
    break;}
case 180:
#line 710 "vrml.y"
{
			PopNode();
		;
    break;}
case 181:
#line 714 "vrml.y"
{
			PopNode();
		;
    break;}
case 182:
#line 718 "vrml.y"
{
			PopNode();
		;
    break;}
case 183:
#line 722 "vrml.y"
{
			PopNode();
		;
    break;}
case 184:
#line 726 "vrml.y"
{
			PopNode();
		;
    break;}
case 185:
#line 730 "vrml.y"
{
			PopNode();
		;
    break;}
case 186:
#line 736 "vrml.y"
{
			strcpy(gName, yyvsp[0].sval);
		;
    break;}
case 187:
#line 740 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFString, yyvsp[0].sval);
		;
    break;}
case 188:
#line 744 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFFloat, &yyvsp[0].fval);
		;
    break;}
case 189:
#line 748 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFVec3f, gVec3f);
		;
    break;}
case 190:
#line 752 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFVec2f, gVec2f);
		;
    break;}
case 191:
#line 759 "vrml.y"
{
			BackgroundNode *bg = new BackgroundNode();
			bg->setName(GetDEFName());
			AddNode(bg);
			PushNode(VRML_NODETYPE_BACKGROUND, bg);
		;
    break;}
case 192:
#line 769 "vrml.y"
{
			BackgroundNode *bg = (BackgroundNode *)GetCurrentNodeObject();
			bg->initialize();
			PopNode();
		;
    break;}
case 196:
#line 790 "vrml.y"
{
			((BillboardNode *)GetCurrentNodeObject())->setAxisOfRotation(gVec3f);
		;
    break;}
case 199:
#line 799 "vrml.y"
{   
			BillboardNode *billboard = new BillboardNode();
			billboard->setName(GetDEFName());
			AddNode(billboard);
			PushNode(VRML_NODETYPE_BILLBOARD, billboard);
		;
    break;}
case 200:
#line 809 "vrml.y"
{
			BillboardNode *billboard = (BillboardNode *)GetCurrentNodeObject();
			billboard->initialize();
			PopNode();
		;
    break;}
case 203:
#line 829 "vrml.y"
{
			((BoxNode *)GetCurrentNodeObject())->setSize(gVec3f);
		;
    break;}
case 204:
#line 836 "vrml.y"
{
			BoxNode *box = new BoxNode();
			box->setName(GetDEFName());
			AddNode(box);
			PushNode(VRML_NODETYPE_BOX, box);
		;
    break;}
case 205:
#line 846 "vrml.y"
{
			BoxNode *box = (BoxNode *)GetCurrentNodeObject();
			box->initialize();
			PopNode();
		;
    break;}
case 212:
#line 882 "vrml.y"
{
			PushNode(VRML_NODETYPE_COLLISION_PROXY, GetCurrentNodeObject());
		;
    break;}
case 214:
#line 890 "vrml.y"
{
			((CollisionNode *)GetCurrentNodeObject())->setCollide(yyvsp[0].ival);
		;
    break;}
case 219:
#line 898 "vrml.y"
{
			PopNode();							
		;
    break;}
case 220:
#line 905 "vrml.y"
{   
			CollisionNode *collision = new CollisionNode();
			collision->setName(GetDEFName());
			AddNode(collision);
			PushNode(VRML_NODETYPE_BOX, collision);
		;
    break;}
case 221:
#line 915 "vrml.y"
{
			CollisionNode *collision = (CollisionNode *)GetCurrentNodeObject();
			collision->initialize();
			PopNode();
		;
    break;}
case 225:
#line 939 "vrml.y"
{
			ColorNode *color = new ColorNode();
			color->setName(GetDEFName());
			AddNode(color);
			PushNode(VRML_NODETYPE_COLOR, color);
		;
    break;}
case 226:
#line 949 "vrml.y"
{
			ColorNode *color = (ColorNode *)GetCurrentNodeObject();
			color->initialize();
			PopNode();
		;
    break;}
case 229:
#line 969 "vrml.y"
{
			PushNode(VRML_NODETYPE_INTERPOLATOR_KEY, GetCurrentNodeObject());
		;
    break;}
case 230:
#line 976 "vrml.y"
{
			PushNode(VRML_NODETYPE_INTERPOLATOR_KEYVALUE, GetCurrentNodeObject());
		;
    break;}
case 231:
#line 983 "vrml.y"
{
			PopNode();
		;
    break;}
case 232:
#line 987 "vrml.y"
{
			PopNode();
		;
    break;}
case 233:
#line 994 "vrml.y"
{
			ColorInterpolatorNode *colInterp = new ColorInterpolatorNode();
			colInterp->setName(GetDEFName());
			AddNode(colInterp);
			PushNode(VRML_NODETYPE_COLORINTERPOLATOR, colInterp);
		;
    break;}
case 234:
#line 1004 "vrml.y"
{
			ColorInterpolatorNode *colInterp = (ColorInterpolatorNode *)GetCurrentNodeObject();
			colInterp->initialize();
			PopNode();
		;
    break;}
case 237:
#line 1024 "vrml.y"
{
			((ConeNode *)GetCurrentNodeObject())->setSide(yyvsp[0].ival);
		;
    break;}
case 238:
#line 1028 "vrml.y"
{
			((ConeNode *)GetCurrentNodeObject())->setBottom(yyvsp[0].ival);
		;
    break;}
case 239:
#line 1032 "vrml.y"
{
			((ConeNode *)GetCurrentNodeObject())->setBottomRadius(yyvsp[0].fval);
		;
    break;}
case 240:
#line 1036 "vrml.y"
{
			((ConeNode *)GetCurrentNodeObject())->setHeight(yyvsp[0].fval);
		;
    break;}
case 241:
#line 1043 "vrml.y"
{
			ConeNode *cone = new ConeNode();
			cone->setName(GetDEFName());
			AddNode(cone);
			PushNode(VRML_NODETYPE_CONE, cone);
		;
    break;}
case 242:
#line 1053 "vrml.y"
{
			ConeNode *cone = (ConeNode *)GetCurrentNodeObject();
			cone->initialize();
			PopNode();
		;
    break;}
case 245:
#line 1073 "vrml.y"
{
			CoordinateNode *coord = new CoordinateNode();
			coord->setName(GetDEFName());
			AddNode(coord);
			PushNode(VRML_NODETYPE_COORDINATE, coord);
		;
    break;}
case 246:
#line 1083 "vrml.y"
{
			CoordinateNode *coord = (CoordinateNode *)GetCurrentNodeObject();
			coord->initialize();
			PopNode();
		;
    break;}
case 249:
#line 1103 "vrml.y"
{
			PopNode();
		;
    break;}
case 250:
#line 1107 "vrml.y"
{
			PopNode();
		;
    break;}
case 251:
#line 1114 "vrml.y"
{
			CoordinateInterpolatorNode *coordInterp = new CoordinateInterpolatorNode();
			coordInterp->setName(GetDEFName());
			AddNode(coordInterp);
			PushNode(VRML_NODETYPE_COORDINATEINTERPOLATOR, coordInterp);
		;
    break;}
case 252:
#line 1124 "vrml.y"
{
			CoordinateInterpolatorNode *coordInterp = (CoordinateInterpolatorNode *)GetCurrentNodeObject();
			coordInterp->initialize();
			PopNode();
		;
    break;}
case 255:
#line 1144 "vrml.y"
{
			((CylinderNode *)GetCurrentNodeObject())->setSide(yyvsp[0].ival);
		;
    break;}
case 256:
#line 1148 "vrml.y"
{
			((CylinderNode *)GetCurrentNodeObject())->setBottom(yyvsp[0].ival);
		;
    break;}
case 257:
#line 1152 "vrml.y"
{
			((CylinderNode *)GetCurrentNodeObject())->setTop(yyvsp[0].ival);
		;
    break;}
case 258:
#line 1156 "vrml.y"
{
			((CylinderNode *)GetCurrentNodeObject())->setRadius(yyvsp[0].fval);
		;
    break;}
case 259:
#line 1160 "vrml.y"
{
			((CylinderNode *)GetCurrentNodeObject())->setHeight(yyvsp[0].fval);
		;
    break;}
case 260:
#line 1167 "vrml.y"
{
			CylinderNode *cylinder = new CylinderNode();
			cylinder->setName(GetDEFName());
			AddNode(cylinder);
			PushNode(VRML_NODETYPE_CYLINDER, cylinder);
		;
    break;}
case 261:
#line 1177 "vrml.y"
{
			CylinderNode *cylinder = (CylinderNode *)GetCurrentNodeObject();
			cylinder->initialize();
			PopNode();
		;
    break;}
case 264:
#line 1197 "vrml.y"
{
			((CylinderSensorNode *)GetCurrentNodeObject())->setAutoOffset(yyvsp[0].ival);
		;
    break;}
case 265:
#line 1201 "vrml.y"
{
			((CylinderSensorNode *)GetCurrentNodeObject())->setDiskAngle(yyvsp[0].fval);
		;
    break;}
case 266:
#line 1205 "vrml.y"
{
			((CylinderSensorNode *)GetCurrentNodeObject())->setEnabled(yyvsp[0].ival);
		;
    break;}
case 267:
#line 1209 "vrml.y"
{
			((CylinderSensorNode *)GetCurrentNodeObject())->setMaxAngle(yyvsp[0].fval);
		;
    break;}
case 268:
#line 1213 "vrml.y"
{
			((CylinderSensorNode *)GetCurrentNodeObject())->setMinAngle(yyvsp[0].fval);
		;
    break;}
case 269:
#line 1217 "vrml.y"
{
			((CylinderSensorNode *)GetCurrentNodeObject())->setOffset(yyvsp[0].fval);
		;
    break;}
case 270:
#line 1225 "vrml.y"
{
			CylinderSensorNode *cysensor = new CylinderSensorNode();
			cysensor->setName(GetDEFName());
			AddNode(cysensor);
			PushNode(VRML_NODETYPE_CYLINDERSENSOR, cysensor);
		;
    break;}
case 271:
#line 1235 "vrml.y"
{
			CylinderSensorNode *cysensor = (CylinderSensorNode *)GetCurrentNodeObject();
			cysensor->initialize();
			PopNode();
		;
    break;}
case 274:
#line 1255 "vrml.y"
{
			((DirectionalLightNode *)GetCurrentNodeObject())->setOn(yyvsp[0].ival);
		;
    break;}
case 275:
#line 1259 "vrml.y"
{
			((DirectionalLightNode *)GetCurrentNodeObject())->setIntensity(yyvsp[0].fval);
		;
    break;}
case 276:
#line 1263 "vrml.y"
{
			((DirectionalLightNode *)GetCurrentNodeObject())->setColor(gColor);
		;
    break;}
case 277:
#line 1267 "vrml.y"
{
			((DirectionalLightNode *)GetCurrentNodeObject())->setDirection(gVec3f);
		;
    break;}
case 278:
#line 1271 "vrml.y"
{
			((DirectionalLightNode *)GetCurrentNodeObject())->setAmbientIntensity(yyvsp[0].fval);
		;
    break;}
case 279:
#line 1278 "vrml.y"
{
			DirectionalLightNode *dirLight = new DirectionalLightNode();
			dirLight->setName(GetDEFName());
			AddNode(dirLight);
			PushNode(VRML_NODETYPE_DIRECTIONALLIGHT, dirLight);
		;
    break;}
case 280:
#line 1288 "vrml.y"
{
			DirectionalLightNode *dirLight = (DirectionalLightNode *)GetCurrentNodeObject();
			dirLight->initialize();
			PopNode();
		;
    break;}
case 283:
#line 1308 "vrml.y"
{
			PushNode(VRML_NODETYPE_ELEVATIONGRID_HEIGHT, GetCurrentNodeObject());
		;
    break;}
case 293:
#line 1325 "vrml.y"
{
			PopNode();
		;
    break;}
case 294:
#line 1329 "vrml.y"
{
			((ElevationGridNode *)GetCurrentNodeObject())->setCCW(yyvsp[0].ival);
		;
    break;}
case 295:
#line 1333 "vrml.y"
{
			((ElevationGridNode *)GetCurrentNodeObject())->setCreaseAngle(yyvsp[0].fval);
		;
    break;}
case 296:
#line 1337 "vrml.y"
{
			((ElevationGridNode *)GetCurrentNodeObject())->setSolid(yyvsp[0].ival);
		;
    break;}
case 297:
#line 1341 "vrml.y"
{
			((ElevationGridNode *)GetCurrentNodeObject())->setColorPerVertex(yyvsp[0].ival);
		;
    break;}
case 298:
#line 1345 "vrml.y"
{
			((ElevationGridNode *)GetCurrentNodeObject())->setNormalPerVertex(yyvsp[0].ival);
		;
    break;}
case 299:
#line 1349 "vrml.y"
{
			((ElevationGridNode *)GetCurrentNodeObject())->setXDimension(yyvsp[0].ival);
		;
    break;}
case 300:
#line 1353 "vrml.y"
{
			((ElevationGridNode *)GetCurrentNodeObject())->setXSpacing(yyvsp[0].fval);
		;
    break;}
case 301:
#line 1357 "vrml.y"
{
			((ElevationGridNode *)GetCurrentNodeObject())->setZDimension(yyvsp[0].ival);
		;
    break;}
case 302:
#line 1361 "vrml.y"
{
			((ElevationGridNode *)GetCurrentNodeObject())->setZSpacing(yyvsp[0].fval);
		;
    break;}
case 303:
#line 1368 "vrml.y"
{
			ElevationGridNode *elev = new ElevationGridNode();
			elev->setName(GetDEFName());
			AddNode(elev);
			PushNode(VRML_NODETYPE_ELEVATIONGRID, elev);
		;
    break;}
case 304:
#line 1378 "vrml.y"
{
			ElevationGridNode *elev = (ElevationGridNode *)GetCurrentNodeObject();
			elev->initialize();
			PopNode();
		;
    break;}
case 307:
#line 1398 "vrml.y"
{
			PushNode(VRML_NODETYPE_EXTRUSION_CROSSSECTION, GetCurrentNodeObject());
		;
    break;}
case 308:
#line 1405 "vrml.y"
{
			PushNode(VRML_NODETYPE_EXTRUSION_ORIENTATION, GetCurrentNodeObject());
		;
    break;}
case 309:
#line 1412 "vrml.y"
{
			PushNode(VRML_NODETYPE_EXTRUSION_SCALE, GetCurrentNodeObject());
		;
    break;}
case 310:
#line 1419 "vrml.y"
{
			PushNode(VRML_NODETYPE_EXTRUSION_SPINE, GetCurrentNodeObject());
		;
    break;}
case 311:
#line 1426 "vrml.y"
{
			((ExtrusionNode *)GetCurrentNodeObject())->setBeginCap(yyvsp[0].ival);
		;
    break;}
case 312:
#line 1430 "vrml.y"
{
			((ExtrusionNode *)GetCurrentNodeObject())->setCCW(yyvsp[0].ival);
		;
    break;}
case 313:
#line 1434 "vrml.y"
{
			((ExtrusionNode *)GetCurrentNodeObject())->setConvex(yyvsp[0].ival);
		;
    break;}
case 314:
#line 1438 "vrml.y"
{
			((ExtrusionNode *)GetCurrentNodeObject())->setCreaseAngle(yyvsp[0].fval);
		;
    break;}
case 315:
#line 1442 "vrml.y"
{
			((ExtrusionNode *)GetCurrentNodeObject())->setSolid(yyvsp[0].ival);
		;
    break;}
case 316:
#line 1446 "vrml.y"
{
			PopNode();
		;
    break;}
case 317:
#line 1450 "vrml.y"
{
			((ExtrusionNode *)GetCurrentNodeObject())->setEndCap(yyvsp[0].ival);
		;
    break;}
case 318:
#line 1454 "vrml.y"
{
			PopNode();
		;
    break;}
case 319:
#line 1458 "vrml.y"
{
			PopNode();
		;
    break;}
case 320:
#line 1462 "vrml.y"
{
			PopNode();
		;
    break;}
case 321:
#line 1469 "vrml.y"
{
			ExtrusionNode *ex = new ExtrusionNode();
			ex->setName(GetDEFName());
			AddNode(ex);
			PushNode(VRML_NODETYPE_EXTRUSION, ex);
		;
    break;}
case 322:
#line 1479 "vrml.y"
{
			ExtrusionNode *ex = (ExtrusionNode *)GetCurrentNodeObject();
			ex->initialize();
			PopNode();
		;
    break;}
case 325:
#line 1499 "vrml.y"
{
			((FogNode *)GetCurrentNodeObject())->setColor(gColor);
		;
    break;}
case 326:
#line 1503 "vrml.y"
{
			((FogNode *)GetCurrentNodeObject())->setFogType(yyvsp[0].sval);
		;
    break;}
case 327:
#line 1507 "vrml.y"
{
			((FogNode *)GetCurrentNodeObject())->setVisibilityRange(yyvsp[0].fval);
		;
    break;}
case 328:
#line 1514 "vrml.y"
{
			FogNode *fog= new FogNode();
			fog->setName(GetDEFName());
			AddNode(fog);
			PushNode(VRML_NODETYPE_FOG, fog);
		;
    break;}
case 329:
#line 1524 "vrml.y"
{
			FogNode *fog= (FogNode *)GetCurrentNodeObject();
			fog->initialize();
			PopNode();
		;
    break;}
case 332:
#line 1544 "vrml.y"
{
			PushNode(VRML_NODETYPE_FONTSTYLE_JUSTIFY, GetCurrentNodeObject());
		;
    break;}
case 333:
#line 1551 "vrml.y"
{
			((FontStyleNode *)GetCurrentNodeObject())->setFamily(yyvsp[0].sval);
		;
    break;}
case 334:
#line 1555 "vrml.y"
{
			((FontStyleNode *)GetCurrentNodeObject())->setHorizontal(yyvsp[0].ival);
		;
    break;}
case 335:
#line 1559 "vrml.y"
{
			PopNode();
		;
    break;}
case 336:
#line 1563 "vrml.y"
{
			((FontStyleNode *)GetCurrentNodeObject())->setLanguage(yyvsp[0].sval);
		;
    break;}
case 337:
#line 1567 "vrml.y"
{
			((FontStyleNode *)GetCurrentNodeObject())->setLeftToRight(yyvsp[0].ival);
		;
    break;}
case 338:
#line 1571 "vrml.y"
{
			((FontStyleNode *)GetCurrentNodeObject())->setSize(yyvsp[0].fval);
		;
    break;}
case 339:
#line 1575 "vrml.y"
{
			((FontStyleNode *)GetCurrentNodeObject())->setSpacing(yyvsp[0].fval);
		;
    break;}
case 340:
#line 1579 "vrml.y"
{
			((FontStyleNode *)GetCurrentNodeObject())->setStyle(yyvsp[0].sval);
		;
    break;}
case 341:
#line 1583 "vrml.y"
{
			((FontStyleNode *)GetCurrentNodeObject())->setTopToBottom(yyvsp[0].ival);
		;
    break;}
case 342:
#line 1590 "vrml.y"
{
			FontStyleNode *fs = new FontStyleNode();
			fs->setName(GetDEFName());
			AddNode(fs);
			PushNode(VRML_NODETYPE_FONTSTYLE, fs);
		;
    break;}
case 343:
#line 1600 "vrml.y"
{
			FontStyleNode *fs = (FontStyleNode *)GetCurrentNodeObject();
			fs->initialize();
			PopNode();
		;
    break;}
case 349:
#line 1626 "vrml.y"
{   
			GroupNode *group = new GroupNode();
			group->setName(GetDEFName());
			AddNode(group);
			PushNode(VRML_NODETYPE_GROUP, group);
		;
    break;}
case 350:
#line 1636 "vrml.y"
{
			GroupNode *group = (GroupNode *)GetCurrentNodeObject();
			group->initialize();
			PopNode();
		;
    break;}
case 353:
#line 1656 "vrml.y"
{
			PushNode(VRML_NODETYPE_IMAGETEXTURE_URL, GetCurrentNodeObject());
		;
    break;}
case 354:
#line 1663 "vrml.y"
{
			PopNode();
		;
    break;}
case 355:
#line 1667 "vrml.y"
{
			((ImageTextureNode *)GetCurrentNodeObject())->setRepeatS(yyvsp[0].ival);
		;
    break;}
case 356:
#line 1671 "vrml.y"
{
			((ImageTextureNode *)GetCurrentNodeObject())->setRepeatT(yyvsp[0].ival);
		;
    break;}
case 357:
#line 1678 "vrml.y"
{
			ImageTextureNode *imgTexture = new ImageTextureNode();
			imgTexture->setName(GetDEFName());
			AddNode(imgTexture);
			PushNode(VRML_NODETYPE_IMAGETEXTURE, imgTexture);
		;
    break;}
case 358:
#line 1688 "vrml.y"
{
			ImageTextureNode *imgTexture = (ImageTextureNode *)GetCurrentNodeObject();
			imgTexture->initialize();
			PopNode();
		;
    break;}
case 361:
#line 1708 "vrml.y"
{
			PushNode(VRML_NODETYPE_COLOR_INDEX, GetCurrentNodeObject());
		;
    break;}
case 362:
#line 1715 "vrml.y"
{
			PushNode(VRML_NODETYPE_COORDINATE_INDEX, GetCurrentNodeObject());
		;
    break;}
case 363:
#line 1722 "vrml.y"
{
			PushNode(VRML_NODETYPE_NORMAL_INDEX, GetCurrentNodeObject());
		;
    break;}
case 364:
#line 1729 "vrml.y"
{
			PushNode(VRML_NODETYPE_TEXTURECOODINATE_INDEX, GetCurrentNodeObject());
		;
    break;}
case 377:
#line 1748 "vrml.y"
{
			((IndexedFaceSetNode *)GetCurrentNodeObject())->setCCW(yyvsp[0].ival);
		;
    break;}
case 378:
#line 1752 "vrml.y"
{
			((IndexedFaceSetNode *)GetCurrentNodeObject())->setConvex(yyvsp[0].ival);
		;
    break;}
case 379:
#line 1756 "vrml.y"
{
			((IndexedFaceSetNode *)GetCurrentNodeObject())->setSolid(yyvsp[0].ival);
		;
    break;}
case 380:
#line 1760 "vrml.y"
{
			((IndexedFaceSetNode *)GetCurrentNodeObject())->setCreaseAngle(yyvsp[0].fval);
		;
    break;}
case 381:
#line 1764 "vrml.y"
{
			PopNode();
		;
    break;}
case 382:
#line 1768 "vrml.y"
{
			((IndexedFaceSetNode *)GetCurrentNodeObject())->setColorPerVertex(yyvsp[0].ival);
		;
    break;}
case 383:
#line 1772 "vrml.y"
{
			PopNode();
		;
    break;}
case 384:
#line 1776 "vrml.y"
{
			PopNode();
		;
    break;}
case 385:
#line 1780 "vrml.y"
{
			PopNode();
		;
    break;}
case 386:
#line 1784 "vrml.y"
{
			((IndexedFaceSetNode *)GetCurrentNodeObject())->setNormalPerVertex(yyvsp[0].ival);
		;
    break;}
case 387:
#line 1791 "vrml.y"
{
			IndexedFaceSetNode	*idxFaceset = new IndexedFaceSetNode();
			idxFaceset->setName(GetDEFName());
			AddNode(idxFaceset);
			PushNode(VRML_NODETYPE_INDEXEDFACESET, idxFaceset);
		;
    break;}
case 388:
#line 1801 "vrml.y"
{
			IndexedFaceSetNode *idxFaceset = (IndexedFaceSetNode *)GetCurrentNodeObject();
			idxFaceset->initialize();
			PopNode();
		;
    break;}
case 397:
#line 1827 "vrml.y"
{
			((IndexedLineSetNode *)GetCurrentNodeObject())->setColorPerVertex(yyvsp[0].ival);
		;
    break;}
case 398:
#line 1831 "vrml.y"
{
			PopNode();
		;
    break;}
case 399:
#line 1835 "vrml.y"
{
			PopNode();
		;
    break;}
case 400:
#line 1842 "vrml.y"
{
			IndexedLineSetNode	*idxLineset = new IndexedLineSetNode();
			idxLineset->setName(GetDEFName());
			AddNode(idxLineset);
			PushNode(VRML_NODETYPE_INDEXEDLINESET, idxLineset);
		;
    break;}
case 401:
#line 1852 "vrml.y"
{
			IndexedLineSetNode *idxLineset = (IndexedLineSetNode *)GetCurrentNodeObject();
			idxLineset->initialize();
			PopNode();
		;
    break;}
case 404:
#line 1872 "vrml.y"
{
			PushNode(VRML_NODETYPE_INLINE_URL, GetCurrentNodeObject());
		;
    break;}
case 405:
#line 1879 "vrml.y"
{
			PopNode();
		;
    break;}
case 408:
#line 1888 "vrml.y"
{   
			InlineNode *inlineNode = new InlineNode();
			inlineNode->setName(GetDEFName());
			AddNode(inlineNode);
			PushNode(VRML_NODETYPE_INLINE, inlineNode);
		;
    break;}
case 409:
#line 1898 "vrml.y"
{
			InlineNode *inlineNode = (InlineNode *)GetCurrentNodeObject();
			//inlineNode->initialize();
			PopNode();
		;
    break;}
case 412:
#line 1918 "vrml.y"
{
			PushNode(VRML_NODETYPE_LOD_RANGE, GetCurrentNodeObject());
		;
    break;}
case 413:
#line 1926 "vrml.y"
{
			PushNode(VRML_NODETYPE_LOD_LEVEL, GetCurrentNodeObject());
		;
    break;}
case 414:
#line 1933 "vrml.y"
{
			PopNode();							
		;
    break;}
case 415:
#line 1937 "vrml.y"
{
			((LodNode *)GetCurrentNodeObject())->setCenter(gVec3f);
		;
    break;}
case 416:
#line 1941 "vrml.y"
{
			PopNode();							
		;
    break;}
case 417:
#line 1945 "vrml.y"
{
			PopNode();							
		;
    break;}
case 418:
#line 1952 "vrml.y"
{   
			LodNode	*lod = new LodNode();
			lod->setName(GetDEFName());
			AddNode(lod);
			PushNode(VRML_NODETYPE_INLINE, lod);
		;
    break;}
case 419:
#line 1962 "vrml.y"
{
			LodNode	*lod = (LodNode *)GetCurrentNodeObject();
			lod->initialize();
			PopNode();
		;
    break;}
case 422:
#line 1982 "vrml.y"
{
			((MaterialNode *)GetCurrentNodeObject())->setAmbientIntensity(yyvsp[0].fval);
		;
    break;}
case 423:
#line 1986 "vrml.y"
{
			((MaterialNode *)GetCurrentNodeObject())->setDiffuseColor(gColor);
		;
    break;}
case 424:
#line 1990 "vrml.y"
{
			((MaterialNode *)GetCurrentNodeObject())->setEmissiveColor(gColor);
		;
    break;}
case 425:
#line 1994 "vrml.y"
{
			((MaterialNode *)GetCurrentNodeObject())->setShininess(yyvsp[0].fval);
		;
    break;}
case 426:
#line 1998 "vrml.y"
{
			((MaterialNode *)GetCurrentNodeObject())->setSpecularColor(gColor);
		;
    break;}
case 427:
#line 2002 "vrml.y"
{
			((MaterialNode *)GetCurrentNodeObject())->setTransparency(yyvsp[0].fval);
		;
    break;}
case 428:
#line 2008 "vrml.y"
{
			strcpy(gName, yyvsp[0].sval);
		;
    break;}
case 429:
#line 2012 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFString, yyvsp[0].sval);
		;
    break;}
case 430:
#line 2016 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFFloat, &yyvsp[0].fval);
		;
    break;}
case 431:
#line 2020 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFVec3f, gVec3f);
		;
    break;}
case 432:
#line 2024 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFVec2f, gVec2f);
		;
    break;}
case 433:
#line 2030 "vrml.y"
{
			MaterialNode *material = new MaterialNode();
			material->setName(GetDEFName());
			AddNode(material);
			PushNode(VRML_NODETYPE_MATERIAL, material);
		;
    break;}
case 434:
#line 2040 "vrml.y"
{
			MaterialNode *material = (MaterialNode *)GetCurrentNodeObject();
			material->initialize();
			PopNode();
		;
    break;}
case 437:
#line 2060 "vrml.y"
{
			PushNode(VRML_NODETYPE_MOVIETEXTURE_URL, GetCurrentNodeObject());
		;
    break;}
case 438:
#line 2067 "vrml.y"
{
			((MovieTextureNode *)GetCurrentNodeObject())->setLoop(yyvsp[0].ival);
		;
    break;}
case 439:
#line 2071 "vrml.y"
{
			((MovieTextureNode *)GetCurrentNodeObject())->setSpeed(yyvsp[0].fval);
		;
    break;}
case 440:
#line 2075 "vrml.y"
{
			((MovieTextureNode *)GetCurrentNodeObject())->setStartTime(yyvsp[0].fval);
		;
    break;}
case 441:
#line 2079 "vrml.y"
{
			((MovieTextureNode *)GetCurrentNodeObject())->setStopTime(yyvsp[0].fval);
		;
    break;}
case 442:
#line 2083 "vrml.y"
{
			PopNode();
		;
    break;}
case 443:
#line 2087 "vrml.y"
{
			((MovieTextureNode *)GetCurrentNodeObject())->setRepeatS(yyvsp[0].ival);
		;
    break;}
case 444:
#line 2091 "vrml.y"
{
			((MovieTextureNode *)GetCurrentNodeObject())->setRepeatT(yyvsp[0].ival);
		;
    break;}
case 445:
#line 2098 "vrml.y"
{
			MovieTextureNode *movieTexture = new MovieTextureNode();
			movieTexture->setName(GetDEFName());
			AddNode(movieTexture);
			PushNode(VRML_NODETYPE_MOVIETEXTURE, movieTexture);
		;
    break;}
case 446:
#line 2108 "vrml.y"
{
			MovieTextureNode *movieTexture = (MovieTextureNode *)GetCurrentNodeObject();
			movieTexture->initialize();
			PopNode();
		;
    break;}
case 449:
#line 2128 "vrml.y"
{
			PushNode(VRML_NODETYPE_NAVIGATIONINFO_AVATARSIZE, GetCurrentNodeObject());
		;
    break;}
case 450:
#line 2135 "vrml.y"
{
			PushNode(VRML_NODETYPE_NAVIGATIONINFO_TYPE, GetCurrentNodeObject());
		;
    break;}
case 451:
#line 2142 "vrml.y"
{
			PopNode();
		;
    break;}
case 452:
#line 2146 "vrml.y"
{
			((NavigationInfoNode *)GetCurrentNodeObject())->setHeadlight(yyvsp[0].ival);
		;
    break;}
case 453:
#line 2150 "vrml.y"
{
			((NavigationInfoNode *)GetCurrentNodeObject())->setSpeed(yyvsp[0].fval);
		;
    break;}
case 454:
#line 2154 "vrml.y"
{
			PopNode();
		;
    break;}
case 455:
#line 2158 "vrml.y"
{
			((NavigationInfoNode *)GetCurrentNodeObject())->setVisibilityLimit(yyvsp[0].fval);
		;
    break;}
case 456:
#line 2165 "vrml.y"
{
			NavigationInfoNode *navInfo = new NavigationInfoNode();
			navInfo->setName(GetDEFName());
			AddNode(navInfo);
			PushNode(VRML_NODETYPE_NAVIGATIONINFO, navInfo);
		;
    break;}
case 457:
#line 2175 "vrml.y"
{
			NavigationInfoNode *navInfo = (NavigationInfoNode *)GetCurrentNodeObject();
			navInfo->initialize();
			PopNode();
		;
    break;}
case 461:
#line 2199 "vrml.y"
{
			NormalNode *normal = new NormalNode();
			normal->setName(GetDEFName());
			AddNode(normal);
			PushNode(VRML_NODETYPE_NORMAL, normal);
		;
    break;}
case 462:
#line 2209 "vrml.y"
{
			NormalNode *normal = (NormalNode *)GetCurrentNodeObject();
			normal->initialize();
			PopNode();
		;
    break;}
case 465:
#line 2229 "vrml.y"
{
			PopNode();
		;
    break;}
case 466:
#line 2233 "vrml.y"
{
			PopNode();
		;
    break;}
case 467:
#line 2237 "vrml.y"
{
		;
    break;}
case 468:
#line 2243 "vrml.y"
{
			NormalInterpolatorNode *normInterp = new NormalInterpolatorNode();
			normInterp->setName(GetDEFName());
			AddNode(normInterp);
			PushNode(VRML_NODETYPE_NORMALINTERPOLATOR, normInterp);
		;
    break;}
case 469:
#line 2253 "vrml.y"
{
			NormalInterpolatorNode *normInterp = (NormalInterpolatorNode *)GetCurrentNodeObject();
			normInterp->initialize();
			PopNode();
		;
    break;}
case 472:
#line 2273 "vrml.y"
{
			PopNode();
		;
    break;}
case 473:
#line 2277 "vrml.y"
{
			PopNode();
		;
    break;}
case 474:
#line 2281 "vrml.y"
{
		;
    break;}
case 475:
#line 2287 "vrml.y"
{
			OrientationInterpolatorNode *oriInterp = new OrientationInterpolatorNode();
			oriInterp->setName(GetDEFName());
			AddNode(oriInterp);
			PushNode(VRML_NODETYPE_ORIENTATIONINTERPOLATOR, oriInterp);
		;
    break;}
case 476:
#line 2297 "vrml.y"
{
			OrientationInterpolatorNode *oriInterp = (OrientationInterpolatorNode *)GetCurrentNodeObject();
			oriInterp->initialize();
			PopNode();
		;
    break;}
case 479:
#line 2317 "vrml.y"
{
			PushNode(VRML_NODETYPE_PIXELTEXTURE_IMAGE, GetCurrentNodeObject());
		;
    break;}
case 480:
#line 2324 "vrml.y"
{
			PopNode();
		;
    break;}
case 481:
#line 2328 "vrml.y"
{
			((PixelTextureNode *)GetCurrentNodeObject())->setRepeatS(yyvsp[0].ival);
		;
    break;}
case 482:
#line 2332 "vrml.y"
{
			((PixelTextureNode *)GetCurrentNodeObject())->setRepeatT(yyvsp[0].ival);
		;
    break;}
case 483:
#line 2339 "vrml.y"
{
			PixelTextureNode *pixTexture = new PixelTextureNode();
			pixTexture->setName(GetDEFName());
			AddNode(pixTexture);
			PushNode(VRML_NODETYPE_PIXELTEXTURE, pixTexture);
		;
    break;}
case 484:
#line 2349 "vrml.y"
{
			PixelTextureNode *pixTexture = (PixelTextureNode *)GetCurrentNodeObject();
			pixTexture->initialize();
			PopNode();
		;
    break;}
case 487:
#line 2369 "vrml.y"
{
			((PlaneSensorNode *)GetCurrentNodeObject())->setAutoOffset(yyvsp[0].ival);
		;
    break;}
case 488:
#line 2373 "vrml.y"
{
			((PlaneSensorNode *)GetCurrentNodeObject())->setEnabled(yyvsp[0].ival);
		;
    break;}
case 489:
#line 2377 "vrml.y"
{
			((PlaneSensorNode *)GetCurrentNodeObject())->setMaxPosition(gVec2f);
		;
    break;}
case 490:
#line 2381 "vrml.y"
{
			((PlaneSensorNode *)GetCurrentNodeObject())->setMinPosition(gVec2f);
		;
    break;}
case 491:
#line 2385 "vrml.y"
{
			((PlaneSensorNode *)GetCurrentNodeObject())->setOffset(gVec3f);
		;
    break;}
case 492:
#line 2392 "vrml.y"
{
			PlaneSensorNode *psensor = new PlaneSensorNode();
			psensor->setName(GetDEFName());
			AddNode(psensor);
			PushNode(VRML_NODETYPE_PLANESENSOR, psensor);
		;
    break;}
case 493:
#line 2402 "vrml.y"
{
			PlaneSensorNode *psensor = (PlaneSensorNode *)GetCurrentNodeObject();
			psensor->initialize();
			PopNode();
		;
    break;}
case 496:
#line 2423 "vrml.y"
{
			((PointLightNode *)GetCurrentNodeObject())->setAmbientIntensity(yyvsp[0].fval);
		;
    break;}
case 497:
#line 2427 "vrml.y"
{
			((PointLightNode *)GetCurrentNodeObject())->setAttenuation(gVec3f);
		;
    break;}
case 498:
#line 2431 "vrml.y"
{
			((PointLightNode *)GetCurrentNodeObject())->setColor(gColor);
		;
    break;}
case 499:
#line 2435 "vrml.y"
{
			((PointLightNode *)GetCurrentNodeObject())->setIntensity(yyvsp[0].fval);
		;
    break;}
case 500:
#line 2439 "vrml.y"
{
			((PointLightNode *)GetCurrentNodeObject())->setLocation(gVec3f);
		;
    break;}
case 501:
#line 2443 "vrml.y"
{
			((PointLightNode *)GetCurrentNodeObject())->setOn(yyvsp[0].ival);
		;
    break;}
case 502:
#line 2447 "vrml.y"
{
			((PointLightNode *)GetCurrentNodeObject())->setRadius(yyvsp[0].fval);
		;
    break;}
case 503:
#line 2454 "vrml.y"
{
			PointLightNode *pointLight = new PointLightNode();
			pointLight->setName(GetDEFName());
			AddNode(pointLight);
			PushNode(VRML_NODETYPE_POINTLIGHT, pointLight);
		;
    break;}
case 504:
#line 2464 "vrml.y"
{
			PointLightNode *pointLight = (PointLightNode *)GetCurrentNodeObject();
			pointLight->initialize();
			PopNode();
		;
    break;}
case 513:
#line 2494 "vrml.y"
{
			PointSetNode *pset = new PointSetNode();
			pset->setName(GetDEFName());
			AddNode(pset);
			PushNode(VRML_NODETYPE_POINTSET, pset);
		;
    break;}
case 514:
#line 2504 "vrml.y"
{
			PointSetNode *pset = (PointSetNode *)GetCurrentNodeObject();
			pset->initialize();
			PopNode();
		;
    break;}
case 517:
#line 2523 "vrml.y"
{
			PopNode();
		;
    break;}
case 518:
#line 2527 "vrml.y"
{
			PopNode();
		;
    break;}
case 519:
#line 2531 "vrml.y"
{
		;
    break;}
case 520:
#line 2537 "vrml.y"
{
			PositionInterpolatorNode *posInterp = new PositionInterpolatorNode();
			posInterp->setName(GetDEFName());
			AddNode(posInterp);
			PushNode(VRML_NODETYPE_POSITIONINTERPOLATOR, posInterp);
		;
    break;}
case 521:
#line 2547 "vrml.y"
{
			PositionInterpolatorNode *posInterp = (PositionInterpolatorNode *)GetCurrentNodeObject();
			posInterp->initialize();
			PopNode();
		;
    break;}
case 524:
#line 2567 "vrml.y"
{
			((ProximitySensorNode *)GetCurrentNodeObject())->setCenter(gVec3f);
		;
    break;}
case 525:
#line 2571 "vrml.y"
{
			((ProximitySensorNode *)GetCurrentNodeObject())->setSize(gVec3f);
		;
    break;}
case 526:
#line 2575 "vrml.y"
{
			((ProximitySensorNode *)GetCurrentNodeObject())->setEnabled(yyvsp[0].ival);
		;
    break;}
case 527:
#line 2582 "vrml.y"
{
			ProximitySensorNode *psensor = new ProximitySensorNode();
			psensor->setName(GetDEFName());
			AddNode(psensor);
			PushNode(VRML_NODETYPE_PROXIMITYSENSOR, psensor);
		;
    break;}
case 528:
#line 2592 "vrml.y"
{
			ProximitySensorNode *psensor = (ProximitySensorNode *)GetCurrentNodeObject();
			psensor->initialize();
			PopNode();
		;
    break;}
case 531:
#line 2612 "vrml.y"
{
			PopNode();
		;
    break;}
case 532:
#line 2616 "vrml.y"
{
			PopNode();
		;
    break;}
case 533:
#line 2620 "vrml.y"
{
		;
    break;}
case 534:
#line 2626 "vrml.y"
{
			ScalarInterpolatorNode *scalarInterp = new ScalarInterpolatorNode();
			scalarInterp->setName(GetDEFName());
			AddNode(scalarInterp);
			PushNode(VRML_NODETYPE_SCALARINTERPOLATOR, scalarInterp);
		;
    break;}
case 535:
#line 2636 "vrml.y"
{
			ScalarInterpolatorNode *scalarInterp = (ScalarInterpolatorNode *)GetCurrentNodeObject();
			scalarInterp->initialize();
			PopNode();
		;
    break;}
case 538:
#line 2656 "vrml.y"
{
			PushNode(VRML_NODETYPE_SCRIPT_URL, GetCurrentNodeObject());
		;
    break;}
case 539:
#line 2663 "vrml.y"
{
			PopNode();
		;
    break;}
case 540:
#line 2667 "vrml.y"
{
			((ScriptNode *)GetCurrentNodeObject())->setDirectOutput(yyvsp[0].ival);
		;
    break;}
case 541:
#line 2671 "vrml.y"
{
			((ScriptNode *)GetCurrentNodeObject())->setMustEvaluate(yyvsp[0].ival);
		;
    break;}
case 542:
#line 2680 "vrml.y"
{
			SFBool *value = new SFBool();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 543:
#line 2686 "vrml.y"
{
			SFFloat *value = new SFFloat();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 544:
#line 2692 "vrml.y"
{
			SFInt32 *value = new SFInt32();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 545:
#line 2698 "vrml.y"
{
			SFTime *value = new SFTime();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 546:
#line 2704 "vrml.y"
{
			SFRotation *value = new SFRotation();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 547:
#line 2718 "vrml.y"
{
			SFColor *value = new SFColor();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 548:
#line 2724 "vrml.y"
{
			SFImage *value = new SFImage();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 549:
#line 2730 "vrml.y"
{
			SFString *value = new SFString();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 550:
#line 2736 "vrml.y"
{
			SFVec2f *value = new SFVec2f();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 551:
#line 2742 "vrml.y"
{
			SFVec3f *value = new SFVec3f();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 552:
#line 2753 "vrml.y"
{
			MFFloat *value = new MFFloat();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 553:
#line 2759 "vrml.y"
{
			MFInt32 *value = new MFInt32();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 554:
#line 2765 "vrml.y"
{
			MFTime *value = new MFTime();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 555:
#line 2771 "vrml.y"
{
			MFRotation *value = new MFRotation();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 556:
#line 2785 "vrml.y"
{
			MFColor *value = new MFColor();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 557:
#line 2791 "vrml.y"
{
			MFString *value = new MFString();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 558:
#line 2797 "vrml.y"
{
			MFVec2f *value = new MFVec2f();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 559:
#line 2803 "vrml.y"
{
			MFVec3f *value = new MFVec3f();
			((ScriptNode *)GetCurrentNodeObject())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 560:
#line 2814 "vrml.y"
{
			SFBool *value = new SFBool();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 561:
#line 2820 "vrml.y"
{
			SFFloat *value = new SFFloat();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 562:
#line 2826 "vrml.y"
{
			SFInt32 *value = new SFInt32();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 563:
#line 2832 "vrml.y"
{
			SFTime *value = new SFTime();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 564:
#line 2838 "vrml.y"
{
			SFRotation *value = new SFRotation();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 565:
#line 2852 "vrml.y"
{
			SFColor *value = new SFColor();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 566:
#line 2858 "vrml.y"
{
			SFImage *value = new SFImage();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 567:
#line 2864 "vrml.y"
{
			SFString *value = new SFString();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 568:
#line 2870 "vrml.y"
{
			SFVec2f *value = new SFVec2f();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 569:
#line 2876 "vrml.y"
{
			SFVec3f *value = new SFVec3f();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 570:
#line 2887 "vrml.y"
{
			MFFloat *value = new MFFloat();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 571:
#line 2893 "vrml.y"
{
			MFInt32 *value = new MFInt32();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 572:
#line 2899 "vrml.y"
{
			MFTime *value = new MFTime();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 573:
#line 2905 "vrml.y"
{
			MFRotation *value = new MFRotation();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 574:
#line 2919 "vrml.y"
{
			MFColor *value = new MFColor();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 575:
#line 2925 "vrml.y"
{
			MFString *value = new MFString();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 576:
#line 2931 "vrml.y"
{
			MFVec2f *value = new MFVec2f();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 577:
#line 2937 "vrml.y"
{
			MFVec3f *value = new MFVec3f();
			((ScriptNode *)GetCurrentNodeObject())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		;
    break;}
case 578:
#line 2948 "vrml.y"
{
			SFBool *value = new SFBool(yyvsp[0].ival);
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		;
    break;}
case 579:
#line 2954 "vrml.y"
{
			SFFloat *value = new SFFloat(yyvsp[0].fval);
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		;
    break;}
case 580:
#line 2960 "vrml.y"
{
			SFInt32 *value = new SFInt32(yyvsp[0].ival);
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		;
    break;}
case 581:
#line 2966 "vrml.y"
{
			SFTime *value = new SFTime(yyvsp[0].fval);
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		;
    break;}
case 582:
#line 2972 "vrml.y"
{
			SFRotation *value = new SFRotation(gRotation);
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		;
    break;}
case 583:
#line 2979 "vrml.y"
{
			SFNode *value = new SFNode();
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		;
    break;}
case 584:
#line 2986 "vrml.y"
{
			Node *node = GetParserObject()->findNodeByName(yyvsp[0].sval);
			SFNode *value = new SFNode(node);
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-2].sval, value);
			delete[] yyvsp[-2].sval; delete[] yyvsp[0].sval;
		;
    break;}
case 585:
#line 2994 "vrml.y"
{
			SFColor *value = new SFColor(gColor);
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		;
    break;}
case 586:
#line 3008 "vrml.y"
{
			SFString *value = new SFString(yyvsp[0].sval);
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		;
    break;}
case 587:
#line 3014 "vrml.y"
{
			SFVec2f *value = new SFVec2f(gVec2f);
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		;
    break;}
case 588:
#line 3020 "vrml.y"
{
			SFVec3f *value = new SFVec3f(gVec3f);
			((ScriptNode *)GetCurrentNodeObject())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		;
    break;}
case 589:
#line 3030 "vrml.y"
{
			ScriptNode *script = new ScriptNode();
			script->setName(GetDEFName());
			AddNode(script);
			PushNode(VRML_NODETYPE_SCRIPT, script);
		;
    break;}
case 590:
#line 3040 "vrml.y"
{
			ScriptNode *script = (ScriptNode *)GetCurrentNodeObject();
			script->initialize();
			PopNode();
		;
    break;}
case 599:
#line 3070 "vrml.y"
{
			ShapeNode *shape = new ShapeNode();
			shape->setName(GetDEFName());
			AddNode(shape);
			PushNode(VRML_NODETYPE_SHAPE, shape);
		;
    break;}
case 600:
#line 3080 "vrml.y"
{
			ShapeNode *shape = (ShapeNode *)GetCurrentNodeObject();
			shape->initialize();
			PopNode();
		;
    break;}
case 603:
#line 3100 "vrml.y"
{
			((SoundNode *)GetCurrentNodeObject())->setDirection(gVec3f);
		;
    break;}
case 604:
#line 3104 "vrml.y"
{
			((SoundNode *)GetCurrentNodeObject())->setIntensity(yyvsp[0].fval);
		;
    break;}
case 605:
#line 3108 "vrml.y"
{
			((SoundNode *)GetCurrentNodeObject())->setLocation(gVec3f);
		;
    break;}
case 606:
#line 3112 "vrml.y"
{
			((SoundNode *)GetCurrentNodeObject())->setMinBack(yyvsp[0].fval);
		;
    break;}
case 607:
#line 3116 "vrml.y"
{
			((SoundNode *)GetCurrentNodeObject())->setMaxFront(yyvsp[0].fval);
		;
    break;}
case 608:
#line 3120 "vrml.y"
{
			((SoundNode *)GetCurrentNodeObject())->setMinBack(yyvsp[0].fval);
		;
    break;}
case 609:
#line 3124 "vrml.y"
{
			((SoundNode *)GetCurrentNodeObject())->setMinFront(yyvsp[0].fval);
		;
    break;}
case 610:
#line 3128 "vrml.y"
{
			((SoundNode *)GetCurrentNodeObject())->setPriority(yyvsp[0].fval);
		;
    break;}
case 615:
#line 3136 "vrml.y"
{
			((SoundNode *)GetCurrentNodeObject())->setSpatialize(yyvsp[0].ival);
		;
    break;}
case 616:
#line 3143 "vrml.y"
{
			SoundNode *sound = new SoundNode();
			sound->setName(GetDEFName());
			AddNode(sound);
			PushNode(VRML_NODETYPE_SOUND, sound);
		;
    break;}
case 617:
#line 3153 "vrml.y"
{
			SoundNode *sound = (SoundNode *)GetCurrentNodeObject();
			sound->initialize();
			PopNode();
		;
    break;}
case 620:
#line 3173 "vrml.y"
{
			((SphereNode *)GetCurrentNodeObject())->setRadius(yyvsp[0].fval);
			//addFieldAndValue(GetCurrentNodeObject(), "radius", fieldTypeSFFloat, &$2);
		;
    break;}
case 621:
#line 3181 "vrml.y"
{
			SphereNode *sphere = new SphereNode();
			sphere->setName(GetDEFName());
			AddNode(sphere);
			PushNode(VRML_NODETYPE_SPHERE, sphere);
		;
    break;}
case 622:
#line 3191 "vrml.y"
{
			SphereNode *sphere = (SphereNode *)GetCurrentNodeObject();
			sphere->initialize();
			PopNode();
		;
    break;}
case 625:
#line 3211 "vrml.y"
{
			((SphereSensorNode *)GetCurrentNodeObject())->setAutoOffset(yyvsp[0].ival);
		;
    break;}
case 626:
#line 3215 "vrml.y"
{
			((SphereSensorNode *)GetCurrentNodeObject())->setEnabled(yyvsp[0].ival);
		;
    break;}
case 627:
#line 3219 "vrml.y"
{
			((SphereSensorNode *)GetCurrentNodeObject())->setOffset(gRotation);
		;
    break;}
case 628:
#line 3226 "vrml.y"
{
			SphereSensorNode *spsensor = new SphereSensorNode();
			spsensor->setName(GetDEFName());
			AddNode(spsensor);
			PushNode(VRML_NODETYPE_SPHERESENSOR, spsensor);
		;
    break;}
case 629:
#line 3236 "vrml.y"
{
			SphereSensorNode *spsensor = (SphereSensorNode *)GetCurrentNodeObject();
			spsensor->initialize();
			PopNode();
		;
    break;}
case 632:
#line 3256 "vrml.y"
{
			((SpotLightNode *)GetCurrentNodeObject())->setAmbientIntensity(yyvsp[0].fval);
		;
    break;}
case 633:
#line 3260 "vrml.y"
{
			((SpotLightNode *)GetCurrentNodeObject())->setAttenuation(gVec3f);
		;
    break;}
case 634:
#line 3264 "vrml.y"
{
			((SpotLightNode *)GetCurrentNodeObject())->setBeamWidth(yyvsp[0].fval);
		;
    break;}
case 635:
#line 3268 "vrml.y"
{
			((SpotLightNode *)GetCurrentNodeObject())->setColor(gColor);
		;
    break;}
case 636:
#line 3272 "vrml.y"
{
			((SpotLightNode *)GetCurrentNodeObject())->setCutOffAngle(yyvsp[0].fval);
		;
    break;}
case 637:
#line 3276 "vrml.y"
{
			((SpotLightNode *)GetCurrentNodeObject())->setDirection(gVec3f);
		;
    break;}
case 638:
#line 3280 "vrml.y"
{
			((SpotLightNode *)GetCurrentNodeObject())->setIntensity(yyvsp[0].fval);
		;
    break;}
case 639:
#line 3284 "vrml.y"
{
			((SpotLightNode *)GetCurrentNodeObject())->setLocation(gVec3f);
		;
    break;}
case 640:
#line 3288 "vrml.y"
{
			((SpotLightNode *)GetCurrentNodeObject())->setOn(yyvsp[0].ival);
		;
    break;}
case 641:
#line 3292 "vrml.y"
{
			((SpotLightNode *)GetCurrentNodeObject())->setRadius(yyvsp[0].fval);
		;
    break;}
case 642:
#line 3299 "vrml.y"
{
			SpotLightNode *spotLight = new SpotLightNode();
			spotLight->setName(GetDEFName());
			AddNode(spotLight);
			PushNode(VRML_NODETYPE_SPOTLIGHT, spotLight);
		;
    break;}
case 643:
#line 3309 "vrml.y"
{
			SpotLightNode *spotLight = (SpotLightNode *)GetCurrentNodeObject();
			spotLight->initialize();
			PopNode();
		;
    break;}
case 646:
#line 3329 "vrml.y"
{
			PushNode(VRML_NODETYPE_SWITCH_CHOICE, GetCurrentNodeObject());
		;
    break;}
case 647:
#line 3336 "vrml.y"
{
			PopNode();							
		;
    break;}
case 648:
#line 3340 "vrml.y"
{
			PopNode();							
		;
    break;}
case 649:
#line 3344 "vrml.y"
{
			((SwitchNode *)GetCurrentNodeObject())->setWhichChoice(yyvsp[0].ival);
		;
    break;}
case 650:
#line 3352 "vrml.y"
{   
			SwitchNode *switchNode = new SwitchNode();
			switchNode->setName(GetDEFName());
			AddNode(switchNode);
			PushNode(VRML_NODETYPE_SWITCH, switchNode);
		;
    break;}
case 651:
#line 3362 "vrml.y"
{
			SwitchNode *switchNode = (SwitchNode *)GetCurrentNodeObject();
			switchNode->initialize();
			PopNode();
		;
    break;}
case 654:
#line 3382 "vrml.y"
{
			PushNode(VRML_NODETYPE_TEXT_STRING, GetCurrentNodeObject());
		;
    break;}
case 655:
#line 3389 "vrml.y"
{
			PushNode(VRML_NODETYPE_TEXT_LENGTH, GetCurrentNodeObject());
		;
    break;}
case 656:
#line 3396 "vrml.y"
{
			PopNode();
		;
    break;}
case 660:
#line 3403 "vrml.y"
{
			PopNode();
		;
    break;}
case 661:
#line 3407 "vrml.y"
{
			((TextNode *)GetCurrentNodeObject())->setMaxExtent(yyvsp[0].fval);
		;
    break;}
case 662:
#line 3415 "vrml.y"
{
			TextNode *text = new TextNode();
			text->setName(GetDEFName());
			AddNode(text);
			PushNode(VRML_NODETYPE_TEXT, text);
		;
    break;}
case 663:
#line 3425 "vrml.y"
{
			TextNode *text = (TextNode *)GetCurrentNodeObject();
			text->initialize();
			PopNode();
		;
    break;}
case 667:
#line 3450 "vrml.y"
{
			TextureCoordinateNode *texCoord = new TextureCoordinateNode();
			texCoord->setName(GetDEFName());
			AddNode(texCoord);
			PushNode(VRML_NODETYPE_TEXTURECOODINATE, texCoord);
		;
    break;}
case 668:
#line 3460 "vrml.y"
{
			TextureCoordinateNode *texCoord = (TextureCoordinateNode *)GetCurrentNodeObject();
			texCoord->initialize();
			PopNode();
		;
    break;}
case 671:
#line 3480 "vrml.y"
{
			((TextureTransformNode *)GetCurrentNodeObject())->setCenter(gVec2f);
		;
    break;}
case 672:
#line 3484 "vrml.y"
{
			((TextureTransformNode *)GetCurrentNodeObject())->setRotation(yyvsp[0].fval);
		;
    break;}
case 673:
#line 3488 "vrml.y"
{
			((TextureTransformNode *)GetCurrentNodeObject())->setScale(gVec2f);
		;
    break;}
case 674:
#line 3492 "vrml.y"
{
			((TextureTransformNode *)GetCurrentNodeObject())->setTranslation(gVec2f);
		;
    break;}
case 675:
#line 3500 "vrml.y"
{
			TextureTransformNode *textureTransform = new TextureTransformNode();
			textureTransform->setName(GetDEFName());
			AddNode(textureTransform);
			PushNode(VRML_NODETYPE_TEXTURETRANSFORM, textureTransform);
		;
    break;}
case 676:
#line 3510 "vrml.y"
{
			TextureTransformNode *textureTransform = (TextureTransformNode *)GetCurrentNodeObject();
			textureTransform->initialize();
			PopNode();
		;
    break;}
case 679:
#line 3530 "vrml.y"
{
			((TimeSensorNode *)GetCurrentNodeObject())->setCycleInterval(yyvsp[0].fval);
		;
    break;}
case 680:
#line 3534 "vrml.y"
{
			((TimeSensorNode *)GetCurrentNodeObject())->setEnabled(yyvsp[0].ival);
		;
    break;}
case 681:
#line 3538 "vrml.y"
{
			((TimeSensorNode *)GetCurrentNodeObject())->setLoop(yyvsp[0].ival);
		;
    break;}
case 682:
#line 3542 "vrml.y"
{
			((TimeSensorNode *)GetCurrentNodeObject())->setStartTime(yyvsp[0].fval);
		;
    break;}
case 683:
#line 3546 "vrml.y"
{
			((TimeSensorNode *)GetCurrentNodeObject())->setStopTime(yyvsp[0].fval);
		;
    break;}
case 684:
#line 3554 "vrml.y"
{
			TimeSensorNode *tsensor = new TimeSensorNode();
			tsensor->setName(GetDEFName());
			AddNode(tsensor);
			PushNode(VRML_NODETYPE_TIMESENSOR, tsensor);
		;
    break;}
case 685:
#line 3564 "vrml.y"
{
			TimeSensorNode *tsensor = (TimeSensorNode *)GetCurrentNodeObject();
			tsensor->initialize();
			PopNode();
		;
    break;}
case 688:
#line 3584 "vrml.y"
{
			((TouchSensorNode *)GetCurrentNodeObject())->setEnabled(yyvsp[0].ival);
		;
    break;}
case 689:
#line 3591 "vrml.y"
{
			TouchSensorNode *touchSensor = new TouchSensorNode();
			touchSensor->setName(GetDEFName());
			AddNode(touchSensor);
			PushNode(VRML_NODETYPE_TOUCHSENSOR, touchSensor);
		;
    break;}
case 690:
#line 3601 "vrml.y"
{
			TouchSensorNode *touchSensor = (TouchSensorNode *)GetCurrentNodeObject();
			touchSensor->initialize();
			PopNode();
		;
    break;}
case 694:
#line 3622 "vrml.y"
{
			((TransformNode *)GetCurrentNodeObject())->setCenter(gVec3f);
		;
    break;}
case 695:
#line 3626 "vrml.y"
{
			((TransformNode *)GetCurrentNodeObject())->setRotation(gRotation);
		;
    break;}
case 696:
#line 3630 "vrml.y"
{
			((TransformNode *)GetCurrentNodeObject())->setScale(gVec3f);
		;
    break;}
case 697:
#line 3634 "vrml.y"
{
			((TransformNode *)GetCurrentNodeObject())->setScaleOrientation(gRotation);
		;
    break;}
case 698:
#line 3638 "vrml.y"
{
			((TransformNode *)GetCurrentNodeObject())->setTranslation(gVec3f);
		;
    break;}
case 701:
#line 3647 "vrml.y"
{
			TransformNode *transform = new TransformNode();
			transform->setName(GetDEFName());
			AddNode(transform);
			PushNode(VRML_NODETYPE_TRANSFORM, transform);
		;
    break;}
case 702:
#line 3657 "vrml.y"
{
			TransformNode *transform = (TransformNode *)GetCurrentNodeObject();
			transform->initialize();
			PopNode();
		;
    break;}
case 705:
#line 3677 "vrml.y"
{
			((ViewpointNode *)GetCurrentNodeObject())->setFieldOfView(yyvsp[0].fval);
		;
    break;}
case 706:
#line 3681 "vrml.y"
{
			((ViewpointNode *)GetCurrentNodeObject())->setJump(yyvsp[0].ival);
		;
    break;}
case 707:
#line 3685 "vrml.y"
{
			((ViewpointNode *)GetCurrentNodeObject())->setOrientation(gRotation);
		;
    break;}
case 708:
#line 3689 "vrml.y"
{
			((ViewpointNode *)GetCurrentNodeObject())->setPosition(gVec3f);
		;
    break;}
case 709:
#line 3693 "vrml.y"
{
			((ViewpointNode *)GetCurrentNodeObject())->setDescription(yyvsp[0].sval);
		;
    break;}
case 710:
#line 3699 "vrml.y"
{
			strcpy(gName, yyvsp[0].sval);
		;
    break;}
case 711:
#line 3703 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFString, yyvsp[0].sval);
		;
    break;}
case 712:
#line 3707 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFFloat, &yyvsp[0].fval);
		;
    break;}
case 713:
#line 3711 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFVec3f, gVec3f);
		;
    break;}
case 714:
#line 3715 "vrml.y"
{
			addFieldAndValue(GetCurrentNodeObject(), gName, fieldTypeSFVec2f, gVec2f);
		;
    break;}
case 715:
#line 3722 "vrml.y"
{
			ViewpointNode *viewpoint = new ViewpointNode();
			viewpoint->setName(GetDEFName());
			AddNode(viewpoint);
			PushNode(VRML_NODETYPE_VIEWPOINT, viewpoint);
		;
    break;}
case 716:
#line 3732 "vrml.y"
{
			ViewpointNode *viewpoint = (ViewpointNode *)GetCurrentNodeObject();
			viewpoint->initialize();
			PopNode();
		;
    break;}
case 719:
#line 3752 "vrml.y"
{
			((VisibilitySensorNode *)GetCurrentNodeObject())->setCenter(gVec3f);
		;
    break;}
case 720:
#line 3756 "vrml.y"
{
			((VisibilitySensorNode *)GetCurrentNodeObject())->setEnabled(yyvsp[0].ival);
		;
    break;}
case 721:
#line 3760 "vrml.y"
{
			((VisibilitySensorNode *)GetCurrentNodeObject())->setSize(gVec3f);
		;
    break;}
case 722:
#line 3767 "vrml.y"
{
			VisibilitySensorNode *vsensor = new VisibilitySensorNode();
			vsensor->setName(GetDEFName());
			AddNode(vsensor);
			PushNode(VRML_NODETYPE_VISIBILITYSENSOR, vsensor);
		;
    break;}
case 723:
#line 3777 "vrml.y"
{
			VisibilitySensorNode *vsensor = (VisibilitySensorNode *)GetCurrentNodeObject();
			vsensor->initialize();
			PopNode();
		;
    break;}
case 726:
#line 3797 "vrml.y"
{
			PushNode(VRML_NODETYPE_WORLDINFO_INFO, GetCurrentNodeObject());
		;
    break;}
case 727:
#line 3804 "vrml.y"
{
			PopNode();
		;
    break;}
case 728:
#line 3808 "vrml.y"
{
			((WorldInfoNode *)GetCurrentNodeObject())->setTitle(yyvsp[0].sval);
		;
    break;}
case 729:
#line 3815 "vrml.y"
{
			WorldInfoNode *worldInfo = new WorldInfoNode();
			worldInfo->setName(GetDEFName());
			AddNode(worldInfo);
			PushNode(VRML_NODETYPE_WORLDINFO, worldInfo);
		;
    break;}
case 730:
#line 3825 "vrml.y"
{
			WorldInfoNode *worldInfo = (WorldInfoNode *)GetCurrentNodeObject();
			worldInfo->initialize();
			PopNode();
		;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 3832 "vrml.y"
