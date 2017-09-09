/* turn on LJ IV emulation for symbol set definitions: */
#define EMULATE_LJIV

#ifdef EMULATE_LJIV
#define DEPEND_MSW 0x1FFFFFF9
#else
#define DEPEND_MSW 0x7FFFFFF9
#endif

/* this is not entirely correct, but we need more details on bit flags: */
#define TT_MSW	0x1FFFFFF9

/* [font3150.spd] Dutch801 SWC -> CG-Times: */
#define PCL1Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1250,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   296,\
                         /* Height: */    96,\
                       /* X Height: */   448,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   660,\
                    /* Font Number: */  3150,\
                      /* Font Name: */  {'D','u','t','c','h','8','0','1',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -140,\
               /* Underline Height: */    54,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3151.spd] Dutch801 SWC -> CG-Times Italic: */
#define PCL2Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1334,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   296,\
                         /* Height: */    96,\
                       /* X Height: */   449,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   660,\
                    /* Font Number: */  3151,\
                      /* Font Name: */  {'D','u','t','c','h','8','0','1',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -135,\
               /* Underline Height: */    54,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8779,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3152.spd] Dutch801 SWC -> CG-Times Bold: */
#define PCL3Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1278,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   296,\
                         /* Height: */    96,\
                       /* X Height: */   461,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   678,\
                    /* Font Number: */  3152,\
                      /* Font Name: */  {'D','u','t','c','h','8','0','1',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -149,\
               /* Underline Height: */    93,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3153.spd] Dutch801 SWC -> CG-Times Bold Italic: */
#define PCL4Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1382,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   296,\
                         /* Height: */    96,\
                       /* X Height: */   465,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   671,\
                    /* Font Number: */  3153,\
                      /* Font Name: */  {'D','u','t','c','h','8','0','1',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -149,\
               /* Underline Height: */    93,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8779,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3154.spd] Swiss742 SWC -> Univers: */
#define PCL5Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1241,\
                    /* Cell Height: */  1312,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   332,\
                         /* Height: */    96,\
                       /* X Height: */   502,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    52,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   720,\
                    /* Font Number: */  3154,\
                      /* Font Name: */  {'S','w','i','s','s','7','4','2',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -126,\
               /* Underline Height: */    62,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3155.spd] Swiss742 SWC -> Univers Italic: */
#define PCL6Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1247,\
                    /* Cell Height: */  1347,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   332,\
                         /* Height: */    96,\
                       /* X Height: */   502,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    52,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   720,\
                    /* Font Number: */  3155,\
                      /* Font Name: */  {'S','w','i','s','s','7','4','2',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -124,\
               /* Underline Height: */    58,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  9395,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3156.spd] Swiss742 SWC -> Univers Bold: */
#define PCL7Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1241,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   332,\
                         /* Height: */    96,\
                       /* X Height: */   502,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    52,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   720,\
                    /* Font Number: */  3156,\
                      /* Font Name: */  {'S','w','i','s','s','7','4','2',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -150,\
               /* Underline Height: */   111,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3157.spd] Swiss742 SWC -> Univers Bold Italic: */
#define PCL8Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1248,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   332,\
                         /* Height: */    96,\
                       /* X Height: */   502,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    52,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   720,\
                    /* Font Number: */  3157,\
                      /* Font Name: */  {'S','w','i','s','s','7','4','2',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -141,\
               /* Underline Height: */    92,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  9395,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3183.spd] Swiss742 Cn SWC -> Univers Condensed: */
#define PCL9Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1151,\
                    /* Cell Height: */  1298,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   231,\
                         /* Height: */    96,\
                       /* X Height: */   479,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     4,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    85,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   686,\
                    /* Font Number: */  3183,\
                      /* Font Name: */  {'S','w','i','s','s','7','4','2',' ','C','n',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -117,\
               /* Underline Height: */    55,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3184.spd] Swiss742 Cn SWC -> Univers Condensed Italic: */
#define PCL10Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1226,\
                    /* Cell Height: */  1299,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   231,\
                         /* Height: */    96,\
                       /* X Height: */   479,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     5,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    85,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   686,\
                    /* Font Number: */  3184,\
                      /* Font Name: */  {'S','w','i','s','s','7','4','2',' ','C','n',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -117,\
               /* Underline Height: */    55,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  9395,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3185.spd] Swiss742 Cn SWC -> Univers Condensed Bold: */
#define PCL11Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1146,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   241,\
                         /* Height: */    96,\
                       /* X Height: */   479,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     4,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    85,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   686,\
                    /* Font Number: */  3185,\
                      /* Font Name: */  {'S','w','i','s','s','7','4','2',' ','C','n',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -137,\
               /* Underline Height: */    95,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3186.spd] Swiss742 Cn SWC -> Univers Condensed Bold Italic: */
#define PCL12Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1227,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   241,\
                         /* Height: */    96,\
                       /* X Height: */   479,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     5,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    85,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   686,\
                    /* Font Number: */  3186,\
                      /* Font Name: */  {'S','w','i','s','s','7','4','2',' ','C','n',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -137,\
               /* Underline Height: */    95,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  9395,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3213.spd] ZapfDingbats SWC -> ITC Zapf Dingbats: */
#define PCL13Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   999,\
                    /* Cell Height: */  1042,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */     4,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    45,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     4,\
                    /* Font Number: */  3213,\
                      /* Font Name: */  {'Z','a','p','f','D','i','n','g','b','a','t','s',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7532,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0xFFFFFFFE,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3163.spd] Souvenir SWC -> ITC Souvenir Light: */
#define PCL14Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1212,\
                    /* Cell Height: */  1341,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   463,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */    -1,\
                 /* Typeface (LSB): */    16,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3163,\
                      /* Font Name: */  {'S','o','u','v','e','n','i','r',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -125,\
               /* Underline Height: */    60,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3164.spd] Souvenir SWC -> ITC Souvenir Light Italic: */
#define PCL15Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1216,\
                    /* Cell Height: */  1341,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   475,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */    -1,\
                 /* Typeface (LSB): */    16,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3164,\
                      /* Font Name: */  {'S','o','u','v','e','n','i','r',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -125,\
               /* Underline Height: */    60,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5189,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3165.spd] Souvenir SWC -> ITC Souvenir Demi: */
#define PCL16Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1201,\
                    /* Cell Height: */  1384,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   306,\
                         /* Height: */    96,\
                       /* X Height: */   463,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    16,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3165,\
                      /* Font Name: */  {'S','o','u','v','e','n','i','r',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -151,\
               /* Underline Height: */   113,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3166.spd] Souvenir SWC -> ITC Souvenir Demi Italic: */
#define PCL17Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1226,\
                    /* Cell Height: */  1394,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   306,\
                         /* Height: */    96,\
                       /* X Height: */   475,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    16,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3166,\
                      /* Font Name: */  {'S','o','u','v','e','n','i','r',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -151,\
               /* Underline Height: */   113,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5189,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3167.spd] ZapfCallig SWC -> CG Palacio: */
#define PCL18Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1432,\
                    /* Cell Height: */  1298,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   473,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    15,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   699,\
                    /* Font Number: */  3167,\
                      /* Font Name: */  {'Z','a','p','f','C','a','l','l','i','g',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -164,\
               /* Underline Height: */    55,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3168.spd] ZapfCallig SWC -> CG Palacio Italic: */
#define PCL19Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1430,\
                    /* Cell Height: */  1318,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   475,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    15,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   699,\
                    /* Font Number: */  3168,\
                      /* Font Name: */  {'Z','a','p','f','C','a','l','l','i','g',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -164,\
               /* Underline Height: */    55,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5189,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3169.spd] ZapfCallig SWC -> CG Palacio Bold: */
#define PCL20Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1431,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   475,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    15,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   686,\
                    /* Font Number: */  3169,\
                      /* Font Name: */  {'Z','a','p','f','C','a','l','l','i','g',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -170,\
               /* Underline Height: */    79,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3170.spd] ZapfCallig SWC -> CG Palacio Bold Italic: */
#define PCL21Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1459,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   477,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    15,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   686,\
                    /* Font Number: */  3170,\
                      /* Font Name: */  {'Z','a','p','f','C','a','l','l','i','g',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -175,\
               /* Underline Height: */    79,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3179.spd] Incised901 SWC -> Antique Olive: */
#define PCL22Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1407,\
                    /* Cell Height: */  1356,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   296,\
                         /* Height: */    96,\
                       /* X Height: */   602,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    72,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   743,\
                    /* Font Number: */  3179,\
                      /* Font Name: */  {'I','n','c','i','s','e','d','9','0','1',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -128,\
               /* Underline Height: */    95,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3180.spd] Incised901 SWC -> Antique Olive Italic: */
#define PCL23Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1430,\
                    /* Cell Height: */  1358,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   296,\
                         /* Height: */    96,\
                       /* X Height: */   602,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    72,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   743,\
                    /* Font Number: */  3180,\
                      /* Font Name: */  {'I','n','c','i','s','e','d','9','0','1',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -128,\
               /* Underline Height: */    95,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5189,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3181.spd] Incised901 SWC -> Antique Olive Bold: */
#define PCL24Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1425,\
                    /* Cell Height: */  1391,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   332,\
                         /* Height: */    96,\
                       /* X Height: */   623,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     7,\
                 /* Typeface (LSB): */    72,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   743,\
                    /* Font Number: */  3181,\
                      /* Font Name: */  {'I','n','c','i','s','e','d','9','0','1',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -148,\
               /* Underline Height: */   135,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3182.spd] Incised901Ct SWC -> Antique Olive Bold Italic: */
#define PCL25Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1561,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   370,\
                         /* Height: */    96,\
                       /* X Height: */   627,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    95,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   743,\
                    /* Font Number: */  3182,\
                      /* Font Name: */  {'I','n','c','i','s','e','d','9','0','1','C','t',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -158,\
               /* Underline Height: */   165,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3175.spd] CenturySchbk SWC -> CG Century Schoolbook: */
#define PCL26Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1376,\
                    /* Cell Height: */  1350,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   463,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    23,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3175,\
                      /* Font Name: */  {'C','e','n','t','u','r','y','S','c','h','b','k',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -134,\
               /* Underline Height: */    61,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3176.spd] CenturySchbk SWC -> CG Century Schoolbook Italic: */
#define PCL27Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1357,\
                    /* Cell Height: */  1352,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   473,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    23,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3176,\
                      /* Font Name: */  {'C','e','n','t','u','r','y','S','c','h','b','k',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -134,\
               /* Underline Height: */    61,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8169,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3177.spd] CenturySchbk SWC -> CG Century Schoolbook Bold: */
#define PCL28Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1351,\
                    /* Cell Height: */  1386,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   475,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    23,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3177,\
                      /* Font Name: */  {'C','e','n','t','u','r','y','S','c','h','b','k',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -144,\
               /* Underline Height: */    81,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3178.spd] CenturySchbk SWC -> CG Century Schoolbook Bold Italic: */
#define PCL29Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1385,\
                    /* Cell Height: */  1386,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   482,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    23,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3178,\
                      /* Font Name: */  {'C','e','n','t','u','r','y','S','c','h','b','k',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -144,\
               /* Underline Height: */    81,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8779,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3187.spd] Stymie SWC -> Stymie: */
#define PCL30Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1236,\
                    /* Cell Height: */  1346,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   296,\
                         /* Height: */    96,\
                       /* X Height: */   454,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    84,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   720,\
                    /* Font Number: */  3187,\
                      /* Font Name: */  {'S','t','y','m','i','e',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -126,\
               /* Underline Height: */    61,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3188.spd] Stymie SWC -> Stymie Italic: */
#define PCL31Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1238,\
                    /* Cell Height: */  1346,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   296,\
                         /* Height: */    96,\
                       /* X Height: */   453,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    84,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   720,\
                    /* Font Number: */  3188,\
                      /* Font Name: */  {'S','t','y','m','i','e',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -126,\
               /* Underline Height: */    60,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3189.spd] Stymie SWC -> Stymie Bold: */
#define PCL32Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1316,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   259,\
                         /* Height: */    96,\
                       /* X Height: */   468,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    84,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   720,\
                    /* Font Number: */  3189,\
                      /* Font Name: */  {'S','t','y','m','i','e',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -133,\
               /* Underline Height: */    75,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3190.spd] Stymie SWC -> Stymie Bold Italic: */
#define PCL33Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1374,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   259,\
                         /* Height: */    96,\
                       /* X Height: */   468,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    84,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   720,\
                    /* Font Number: */  3190,\
                      /* Font Name: */  {'S','t','y','m','i','e',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -133,\
               /* Underline Height: */    75,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3191.spd] ZapfHumst Dm SWC -> CG Omega: */
#define PCL34Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1379,\
                    /* Cell Height: */  1302,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   472,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     2,\
                 /* Typeface (LSB): */    17,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   683,\
                    /* Font Number: */  3191,\
                      /* Font Name: */  {'Z','a','p','f','H','u','m','s','t',' ','D','m',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -127,\
               /* Underline Height: */    46,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3192.spd] ZapfHumst Dm SWC -> CG Omega Italic: */
#define PCL35Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1381,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   472,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     2,\
                 /* Typeface (LSB): */    17,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   683,\
                    /* Font Number: */  3192,\
                      /* Font Name: */  {'Z','a','p','f','H','u','m','s','t',' ','D','m',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -128,\
               /* Underline Height: */    48,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5189,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3193.spd] ZapfHumst Dm SWC -> CG Omega Bold: */
#define PCL36Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1395,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   479,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    17,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   683,\
                    /* Font Number: */  3193,\
                      /* Font Name: */  {'Z','a','p','f','H','u','m','s','t',' ','D','m',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -145,\
               /* Underline Height: */    85,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3194.spd] ZapfHumst Dm SWC -> CG Omega Bold Italic: */
#define PCL37Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1477,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   478,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    17,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   683,\
                    /* Font Number: */  3194,\
                      /* Font Name: */  {'Z','a','p','f','H','u','m','s','t',' ','D','m',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -145,\
               /* Underline Height: */    85,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6369,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3195.spd] Bodoni Bk SWC -> CG Bodini: */
#define PCL38Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1344,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   269,\
                         /* Height: */    96,\
                       /* X Height: */   382,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */    -1,\
                 /* Typeface (LSB): */    53,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   657,\
                    /* Font Number: */  3195,\
                      /* Font Name: */  {'B','o','d','o','n','i',' ','B','k',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -132,\
               /* Underline Height: */    47,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3196.spd] Bodoni Bk SWC -> CG Bodini Italic: */
#define PCL39Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1281,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   259,\
                         /* Height: */    96,\
                       /* X Height: */   388,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */    -1,\
                 /* Typeface (LSB): */    53,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   653,\
                    /* Font Number: */  3196,\
                      /* Font Name: */  {'B','o','d','o','n','i',' ','B','k',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -129,\
               /* Underline Height: */    47,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8779,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3197.spd] Bodoni Bk SWC -> CG Bodini Bold: */
#define PCL40Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1449,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   306,\
                         /* Height: */    96,\
                       /* X Height: */   390,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    53,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   649,\
                    /* Font Number: */  3197,\
                      /* Font Name: */  {'B','o','d','o','n','i',' ','B','k',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -151,\
               /* Underline Height: */    84,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3198.spd] Bodoni Bk SWC -> CG Bodini Bold Italic: */
#define PCL41Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1427,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   296,\
                         /* Height: */    96,\
                       /* X Height: */   400,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    53,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   653,\
                    /* Font Number: */  3198,\
                      /* Font Name: */  {'B','o','d','o','n','i',' ','B','k',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -149,\
               /* Underline Height: */    85,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3199.spd] Benguiat SWC -> ITC Benguiat: */
#define PCL42Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1314,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   315,\
                         /* Height: */    96,\
                       /* X Height: */   500,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */    -1,\
                 /* Typeface (LSB): */    62,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   667,\
                    /* Font Number: */  3199,\
                      /* Font Name: */  {'B','e','n','g','u','i','a','t',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -135,\
               /* Underline Height: */    65,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3200.spd] Benguiat SWC -> ITC Benguiat Italic: */
#define PCL43Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1347,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   315,\
                         /* Height: */    96,\
                       /* X Height: */   514,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */    -1,\
                 /* Typeface (LSB): */    62,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   667,\
                    /* Font Number: */  3200,\
                      /* Font Name: */  {'B','e','n','g','u','i','a','t',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -135,\
               /* Underline Height: */    65,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3201.spd] Benguiat SWC -> ITC Benguiat Bold: */
#define PCL44Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1330,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   360,\
                         /* Height: */    96,\
                       /* X Height: */   500,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    62,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   667,\
                    /* Font Number: */  3201,\
                      /* Font Name: */  {'B','e','n','g','u','i','a','t',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -158,\
               /* Underline Height: */   111,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3202.spd] Benguiat SWC -> ITC Benguiat Bold Italic: */
#define PCL45Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1340,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   360,\
                         /* Height: */    96,\
                       /* X Height: */   515,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    62,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   667,\
                    /* Font Number: */  3202,\
                      /* Font Name: */  {'B','e','n','g','u','i','a','t',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -158,\
               /* Underline Height: */   111,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3171.spd] Bookman SWC -> ITC Bookman Light: */
#define PCL46Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1335,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   315,\
                         /* Height: */    96,\
                       /* X Height: */   494,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    47,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   688,\
                    /* Font Number: */  3171,\
                      /* Font Name: */  {'B','o','o','k','m','a','n',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -145,\
               /* Underline Height: */    63,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3172.spd] Bookman SWC -> ITC Bookman Light Italic: */
#define PCL47Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1401,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   315,\
                         /* Height: */    96,\
                       /* X Height: */   498,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    47,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   688,\
                    /* Font Number: */  3172,\
                      /* Font Name: */  {'B','o','o','k','m','a','n',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -145,\
               /* Underline Height: */    63,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5777,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3173.spd] Bookman SWC -> ITC Bookman Demi: */
#define PCL48Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1354,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   360,\
                         /* Height: */    96,\
                       /* X Height: */   504,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    47,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   688,\
                    /* Font Number: */  3173,\
                      /* Font Name: */  {'B','o','o','k','m','a','n',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -161,\
               /* Underline Height: */    97,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3174.spd] Bookman SWC -> ITC Bookman Demi Italic: */
#define PCL49Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1411,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   343,\
                         /* Height: */    96,\
                       /* X Height: */   511,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    47,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   688,\
                    /* Font Number: */  3174,\
                      /* Font Name: */  {'B','o','o','k','m','a','n',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -159,\
               /* Underline Height: */    97,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5777,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3203.spd] OrigGaramond SWC -> Garamond: */
#define PCL50Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1335,\
                    /* Cell Height: */  1316,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   241,\
                         /* Height: */    96,\
                       /* X Height: */   431,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */   101,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   694,\
                    /* Font Number: */  3203,\
                      /* Font Name: */  {'O','r','i','g','G','a','r','a','m','o','n','d',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -153,\
               /* Underline Height: */    50,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3204.spd] OrigGaramond SWC -> Garamond Italic: */
#define PCL51Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1300,\
                    /* Cell Height: */  1318,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   241,\
                         /* Height: */    96,\
                       /* X Height: */   434,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */   101,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   699,\
                    /* Font Number: */  3204,\
                      /* Font Name: */  {'O','r','i','g','G','a','r','a','m','o','n','d',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -148,\
               /* Underline Height: */    40,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  9395,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3205.spd] OrigGaramond SWC -> Garamond Bold: */
#define PCL52Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1327,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   454,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */   101,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   698,\
                    /* Font Number: */  3205,\
                      /* Font Name: */  {'O','r','i','g','G','a','r','a','m','o','n','d',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -165,\
               /* Underline Height: */    74,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3206.spd] OrigGaramond SWC -> Garamond Bold Italic: */
#define PCL53Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1311,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   454,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */   101,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   697,\
                    /* Font Number: */  3206,\
                      /* Font Name: */  {'O','r','i','g','G','a','r','a','m','o','n','d',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -158,\
               /* Underline Height: */    60,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  9395,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3209.spd] Chianti SWC -> Shannon: */
#define PCL54Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1412,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   287,\
                         /* Height: */    96,\
                       /* X Height: */   511,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */   113,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   704,\
                    /* Font Number: */  3209,\
                      /* Font Name: */  {'C','h','i','a','n','t','i',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -137,\
               /* Underline Height: */    52,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3210.spd] Chianti SWC -> Shannon Italic: */
#define PCL55Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1366,\
                    /* Cell Height: */  1297,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   269,\
                         /* Height: */    96,\
                       /* X Height: */   511,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */   113,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   704,\
                    /* Font Number: */  3210,\
                      /* Font Name: */  {'C','h','i','a','n','t','i',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -137,\
               /* Underline Height: */    52,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  4605,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3211.spd] Chianti SWC -> Shannon Bold: */
#define PCL56Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1422,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   306,\
                         /* Height: */    96,\
                       /* X Height: */   518,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */   113,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   704,\
                    /* Font Number: */  3211,\
                      /* Font Name: */  {'C','h','i','a','n','t','i',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -155,\
               /* Underline Height: */    88,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3212.spd] Chianti XBd SWC -> Shannon Bold Italic: */
#define PCL57Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1420,\
                    /* Cell Height: */  1381,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   315,\
                         /* Height: */    96,\
                       /* X Height: */   525,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */   113,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   704,\
                    /* Font Number: */  3212,\
                      /* Font Name: */  {'C','h','i','a','n','t','i',' ','X','B','d',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -167,\
               /* Underline Height: */   113,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3208.spd] Revue Lt SWC -> Revue Light: */
#define PCL58Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1371,\
                    /* Cell Height: */  1356,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   296,\
                         /* Height: */    96,\
                       /* X Height: */   542,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */    -2,\
                 /* Typeface (LSB): */    97,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   727,\
                    /* Font Number: */  3208,\
                      /* Font Name: */  {'R','e','v','u','e',' ','L','t',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -146,\
               /* Underline Height: */    83,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3207.spd] Cooper Blk SWC -> Cooper Black: */
#define PCL59Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1535,\
                    /* Cell Height: */  1407,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   332,\
                         /* Height: */    96,\
                       /* X Height: */   549,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     7,\
                 /* Typeface (LSB): */    46,\
                 /* Typeface (MSB): */    16,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   741,\
                    /* Font Number: */  3207,\
                      /* Font Name: */  {'C','o','o','p','e','r',' ','B','l','k',' ','S','W','C'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -182,\
               /* Underline Height: */   168,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3220.spd] Unnamed -> Courier Medium: */
#define PCL60Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   788,\
                    /* Cell Height: */  1151,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   602,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3220,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -137,\
               /* Underline Height: */    81,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3221.spd] Unnamed -> Courier Bold: */
#define PCL61Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   741,\
                    /* Cell Height: */  1209,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   602,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3221,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -143,\
               /* Underline Height: */    93,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3222.spd] Unnamed -> Courier Italic: */
#define PCL62Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   880,\
                    /* Cell Height: */  1106,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   602,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3222,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -137,\
               /* Underline Height: */    81,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3223.spd] Unnamed -> Courier Bold Italic: */
#define PCL63Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   794,\
                    /* Cell Height: */  1131,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   602,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3223,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -143,\
               /* Underline Height: */    93,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3224.spd] Unnamed -> Letter Gothic Regular: */
#define PCL64Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   662,\
                    /* Cell Height: */  1278,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   500,\
                         /* Height: */    96,\
                       /* X Height: */   491,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   669,\
                    /* Font Number: */  3224,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -131,\
               /* Underline Height: */    70,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3225.spd] Unnamed -> Letter Gothic Bold: */
#define PCL65Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   683,\
                    /* Cell Height: */  1344,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   500,\
                         /* Height: */    96,\
                       /* X Height: */   491,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   669,\
                    /* Font Number: */  3225,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -142,\
               /* Underline Height: */    92,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3226.spd] Unnamed -> Letter Gothic Italic: */
#define PCL66Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   877,\
                    /* Cell Height: */  1114,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   500,\
                         /* Height: */    96,\
                       /* X Height: */   491,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   669,\
                    /* Font Number: */  3226,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -131,\
               /* Underline Height: */    70,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  DEPEND_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3215.spd] Unnamed -> Albertus Medium: */
#define PCL67Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1428,\
                    /* Cell Height: */  1270,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   315,\
                         /* Height: */    96,\
                       /* X Height: */   525,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   757,\
                    /* Font Number: */  3215,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -124,\
               /* Underline Height: */    83,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3216.spd] Unnamed -> Albertus Extrabold: */
#define PCL68Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1418,\
                    /* Cell Height: */  1286,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   332,\
                         /* Height: */    96,\
                       /* X Height: */   532,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   764,\
                    /* Font Number: */  3216,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -133,\
               /* Underline Height: */   100,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3214.spd] Unnamed -> Clarendon Condensed: */
#define PCL69Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1126,\
                    /* Cell Height: */  1262,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   222,\
                         /* Height: */    96,\
                       /* X Height: */   539,\
                     /* Width Type: */    -2,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   708,\
                    /* Font Number: */  3214,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -128,\
               /* Underline Height: */    83,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3217.spd] Unnamed -> Coronet: */
#define PCL70Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1385,\
                    /* Cell Height: */  1251,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   203,\
                         /* Height: */    96,\
                       /* X Height: */   229,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   752,\
                    /* Font Number: */  3217,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -135,\
               /* Underline Height: */    26,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8779,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3218.spd] Unnamed -> Marigold: */
#define PCL71Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   924,\
                    /* Cell Height: */   998,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   185,\
                         /* Height: */    96,\
                       /* X Height: */   413,\
                     /* Width Type: */    -1,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   462,\
                    /* Font Number: */  3218,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  -167,\
               /* Underline Height: */    33,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  2866,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3162.spd] Unnamed -> Line Printer: */
#define PCLS1Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */     0,\
                    /* Cell Height: */     0,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */     0,\
                         /* Height: */    96,\
                       /* X Height: */     4,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     4,\
                    /* Font Number: */  3162,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7532,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\



/* [font3158.spd] Unnamed -> Plugin Roman Serif: */
#define PCLS2Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */     0,\
                    /* Cell Height: */     0,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */     0,\
                         /* Height: */    96,\
                       /* X Height: */     4,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     4,\
                    /* Font Number: */  3158,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7532,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\



/* [font3159.spd] Unnamed -> Plugin Roman Serif Bold: */
#define PCLS3Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */     0,\
                    /* Cell Height: */     0,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */     0,\
                         /* Height: */    96,\
                       /* X Height: */     4,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     4,\
                    /* Font Number: */  3159,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7532,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\



/* [font3160.spd] Unnamed -> Plugin Sanserif: */
#define PCLS4Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */     0,\
                    /* Cell Height: */     0,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */     0,\
                         /* Height: */    96,\
                       /* X Height: */     4,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     4,\
                    /* Font Number: */  3160,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7532,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\



/* [font3161.spd] Unnamed -> Plugin Sanserif Bold: */
#define PCLS5Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */     0,\
                    /* Cell Height: */     0,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */     0,\
                         /* Height: */    96,\
                       /* X Height: */     4,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     4,\
                    /* Font Number: */  3161,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7532,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\



/* [font????.spd]  -> HP Stick Font: */
#define PCLS6Hdr \
	{\
                    /* Header Size: */     0,\
                         /* Format: */     0,\
                      /* Font Type: */     0,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */     0,\
                     /* Cell Width: */     0,\
                    /* Cell Height: */     0,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */     0,\
                         /* Height: */     0,\
                       /* X Height: */     0,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */     0,\
                    /* Serif Style: */     0,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */     0,\
                      /* Reserved2: */     0,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     0,\
                    /* Font Number: */     0,\
                      /* Font Name: */  {'?'},\
                   /* Scale Factor: */     0,\
                   /* Master X Res: */     0,\
                   /* Master Y Res: */     0,\
             /* Underline Position: */     0,\
               /* Underline Height: */     0,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x00000000,\
       /* Character Complement LSW :*/  0x00000000,\
                      /* Data Size: */     0,\
	}\


/* [font3000.spd] Dutch SWA -> Times: */
#define PS1Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1176,\
                    /* Cell Height: */  1175,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   448,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   660,\
                    /* Font Number: */  3000,\
                      /* Font Name: */  {'D','u','t','c','h',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7467,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3001.spd] Dutch SWA -> Times Italic: */
#define PS2Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1178,\
                    /* Cell Height: */  1165,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   448,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   660,\
                    /* Font Number: */  3001,\
                      /* Font Name: */  {'D','u','t','c','h',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7472,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8779,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3002.spd] Dutch SWA -> Times Bold: */
#define PS3Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1176,\
                    /* Cell Height: */  1193,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   461,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   678,\
                    /* Font Number: */  3002,\
                      /* Font Name: */  {'D','u','t','c','h',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7477,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3003.spd] Dutch SWA -> Times Bold Italic: */
#define PS4Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1173,\
                    /* Cell Height: */  1209,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   465,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   671,\
                    /* Font Number: */  3003,\
                      /* Font Name: */  {'D','u','t','c','h',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7477,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8779,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3004.spd] Swiss SWA -> Helvetica: */
#define PS5Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1176,\
                    /* Cell Height: */  1211,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   523,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3004,\
                      /* Font Name: */  {'S','w','i','s','s',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7476,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3005.spd] Swiss SWA -> Helvetica Italic: */
#define PS6Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1200,\
                    /* Cell Height: */  1211,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   523,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3005,\
                      /* Font Name: */  {'S','w','i','s','s',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7476,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3006.spd] Swiss SWA -> Helvetica Bold: */
#define PS7Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1178,\
                    /* Cell Height: */  1212,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   531,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3006,\
                      /* Font Name: */  {'S','w','i','s','s',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7474,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3007.spd] Swiss SWA -> Helvetica Bold Italic: */
#define PS8Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1195,\
                    /* Cell Height: */  1212,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   531,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3007,\
                      /* Font Name: */  {'S','w','i','s','s',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7474,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3008.spd] Courier SWA -> Courier: */
#define PS9Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   707,\
                    /* Cell Height: */  1104,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   600,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     3,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3008,\
                      /* Font Name: */  {'C','o','u','r','i','e','r',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7483,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3009.spd] Courier SWA -> Courier Italic: */
#define PS10Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   754,\
                    /* Cell Height: */  1104,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   600,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     3,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3009,\
                      /* Font Name: */  {'C','o','u','r','i','e','r',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7483,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3010.spd] Courier SWA -> Courier Bold: */
#define PS11Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   708,\
                    /* Cell Height: */  1121,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   600,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     3,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3010,\
                      /* Font Name: */  {'C','o','u','r','i','e','r',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7483,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3011.spd] Courier SWA -> Courier Bold Italic: */
#define PS12Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   742,\
                    /* Cell Height: */  1121,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   600,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     3,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3011,\
                      /* Font Name: */  {'C','o','u','r','i','e','r',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7483,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3012.spd] Symbol Set SWA -> Symbol: */
#define PS13Hdr \
	{\
                    /* Header Size: */    80,\
                         /* Format: */    12,\
                      /* Font Type: */     1,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1230,\
                    /* Cell Height: */  1126,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */     4,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    46,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     4,\
                    /* Font Number: */  3012,\
                      /* Font Name: */  {'S','y','m','b','o','l',' ','S','e','t',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7532,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0xFFFFFFFF,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3013.spd] ZapfCallig SWA -> Palatino: */
#define PS14Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1282,\
                    /* Cell Height: */  1240,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   473,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    15,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   699,\
                    /* Font Number: */  3013,\
                      /* Font Name: */  {'Z','a','p','f','C','a','l','l','i','g',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7444,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3014.spd] ZapfCallig SWA -> Palatino Italic: */
#define PS15Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1235,\
                    /* Cell Height: */  1239,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   475,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    15,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   699,\
                    /* Font Number: */  3014,\
                      /* Font Name: */  {'Z','a','p','f','C','a','l','l','i','g',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7443,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5189,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3015.spd] ZapfCallig SWA -> Palatino Bold: */
#define PS16Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1228,\
                    /* Cell Height: */  1227,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   475,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    15,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   686,\
                    /* Font Number: */  3015,\
                      /* Font Name: */  {'Z','a','p','f','C','a','l','l','i','g',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7449,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3016.spd] ZapfCallig SWA -> Palatino Bold Italic: */
#define PS17Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1315,\
                    /* Cell Height: */  1246,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   477,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    15,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   686,\
                    /* Font Number: */  3016,\
                      /* Font Name: */  {'Z','a','p','f','C','a','l','l','i','g',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7444,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3021.spd] Bookman SWA -> ITC Bookman: */
#define PS18Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1409,\
                    /* Cell Height: */  1199,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   320,\
                         /* Height: */    96,\
                       /* X Height: */   481,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     7,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   671,\
                    /* Font Number: */  3021,\
                      /* Font Name: */  {'B','o','o','k','m','a','n',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7469,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3022.spd] Bookman SWA -> ITC Bookman Italic: */
#define PS19Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1463,\
                    /* Cell Height: */  1185,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   300,\
                         /* Height: */    96,\
                       /* X Height: */   486,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    47,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   671,\
                    /* Font Number: */  3022,\
                      /* Font Name: */  {'B','o','o','k','m','a','n',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7469,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5777,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3023.spd] Bookman SWA -> ITC Bookman Bold: */
#define PS20Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1519,\
                    /* Cell Height: */  1241,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   340,\
                         /* Height: */    96,\
                       /* X Height: */   495,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    47,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   676,\
                    /* Font Number: */  3023,\
                      /* Font Name: */  {'B','o','o','k','m','a','n',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7469,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3024.spd] Bookman SWA -> ITC Bookman Bold Italic: */
#define PS21Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1609,\
                    /* Cell Height: */  1244,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   340,\
                         /* Height: */    96,\
                       /* X Height: */   501,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */    47,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   676,\
                    /* Font Number: */  3024,\
                      /* Font Name: */  {'B','o','o','k','m','a','n',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7470,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5777,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3025.spd] SwissNarrow SWA -> Helvetica Narrow: */
#define PS22Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   963,\
                    /* Cell Height: */  1236,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   228,\
                         /* Height: */    96,\
                       /* X Height: */   523,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3025,\
                      /* Font Name: */  {'S','w','i','s','s','N','a','r','r','o','w',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7476,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3026.spd] SwissNarrow SWA -> Helvetica Narrow Italic: */
#define PS23Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   993,\
                    /* Cell Height: */  1235,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   228,\
                         /* Height: */    96,\
                       /* X Height: */   523,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3026,\
                      /* Font Name: */  {'S','w','i','s','s','N','a','r','r','o','w',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7476,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5777,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3027.spd] SwissNarrow SWA -> Helvetica Narrow Bold: */
#define PS24Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   972,\
                    /* Cell Height: */  1219,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   228,\
                         /* Height: */    96,\
                       /* X Height: */   531,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3027,\
                      /* Font Name: */  {'S','w','i','s','s','N','a','r','r','o','w',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7474,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3028.spd] SwissNarrow SWA -> Helvetica Narrow Bold Italic: */
#define PS25Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   979,\
                    /* Cell Height: */  1219,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   228,\
                         /* Height: */    96,\
                       /* X Height: */   531,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3028,\
                      /* Font Name: */  {'S','w','i','s','s','N','a','r','r','o','w',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7474,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  5777,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3031.spd] CenturySchbk SWA -> Century Schoolbook: */
#define PS26Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1180,\
                    /* Cell Height: */  1219,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   463,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */   127,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3031,\
                      /* Font Name: */  {'C','e','n','t','u','r','y','S','c','h','b','k',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7476,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3032.spd] CenturySchbk SWA -> Century Schoolbook Italic: */
#define PS27Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1197,\
                    /* Cell Height: */  1220,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   471,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */   127,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3032,\
                      /* Font Name: */  {'C','e','n','t','u','r','y','S','c','h','b','k',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7476,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8169,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3033.spd] CenturySchbk SWA -> Century Schoolbook Bold: */
#define PS28Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1158,\
                    /* Cell Height: */  1223,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   287,\
                         /* Height: */    96,\
                       /* X Height: */   476,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */   127,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3033,\
                      /* Font Name: */  {'C','e','n','t','u','r','y','S','c','h','b','k',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7476,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3034.spd] CenturySchbk SWA -> Century Schoolbook Bold Italic: */
#define PS29Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1335,\
                    /* Cell Height: */  1234,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   287,\
                         /* Height: */    96,\
                       /* X Height: */   482,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */   127,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   722,\
                    /* Font Number: */  3034,\
                      /* Font Name: */  {'C','e','n','t','u','r','y','S','c','h','b','k',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7476,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8169,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3017.spd] AvantGarde SWA -> ITC Avant Garde: */
#define PS30Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1325,\
                    /* Cell Height: */  1209,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   276,\
                         /* Height: */    96,\
                       /* X Height: */   537,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */    -1,\
                 /* Typeface (LSB): */    31,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   711,\
                    /* Font Number: */  3017,\
                      /* Font Name: */  {'A','v','a','n','t','G','a','r','d','e',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7492,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3018.spd] AvantGarde SWA -> ITC Avant Garde Italic: */
#define PS31Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1335,\
                    /* Cell Height: */  1209,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   276,\
                         /* Height: */    96,\
                       /* X Height: */   537,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */    -1,\
                 /* Typeface (LSB): */    31,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   711,\
                    /* Font Number: */  3018,\
                      /* Font Name: */  {'A','v','a','n','t','G','a','r','d','e',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7493,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6369,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3019.spd] AvantGarde SWA -> ITC Avant Garde Bold: */
#define PS32Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1417,\
                    /* Cell Height: */  1202,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   280,\
                         /* Height: */    96,\
                       /* X Height: */   537,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     1,\
                 /* Typeface (LSB): */    31,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   711,\
                    /* Font Number: */  3019,\
                      /* Font Name: */  {'A','v','a','n','t','G','a','r','d','e',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7493,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3020.spd] AvantGarde SWA -> ITC Avant Garde Bold Italic: */
#define PS33Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1415,\
                    /* Cell Height: */  1202,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   280,\
                         /* Height: */    96,\
                       /* X Height: */   537,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     1,\
                 /* Typeface (LSB): */    31,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   711,\
                    /* Font Number: */  3020,\
                      /* Font Name: */  {'A','v','a','n','t','G','a','r','d','e',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7493,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6369,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3029.spd] ZapfChancery SWA -> ITC Zapf Chancery: */
#define PS34Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1230,\
                    /* Cell Height: */  1069,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   220,\
                         /* Height: */    96,\
                       /* X Height: */   411,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    43,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   662,\
                    /* Font Number: */  3029,\
                      /* Font Name: */  {'Z','a','p','f','C','h','a','n','c','e','r','y',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7440,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8169,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3030.spd] ZapfDingbats SWA -> ITC Zapf Dingbats: */
#define PS35Hdr \
	{\
                    /* Header Size: */    80,\
                         /* Format: */    12,\
                      /* Font Type: */     1,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   974,\
                    /* Cell Height: */   983,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */     4,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    45,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     4,\
                    /* Font Number: */  3030,\
                      /* Font Name: */  {'Z','a','p','f','D','i','n','g','b','a','t','s',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7532,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0xFFFFFFFE,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3238.spd] Swiss SWA -> Arial: */
#define TT1Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1176,\
                    /* Cell Height: */  1211,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   523,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3238,\
                      /* Font Name: */  {'S','w','i','s','s',' ','S','W','M'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7476,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  TT_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFE,\
                      /* Data Size: */     0,\
	}\


/* [font3239.spd] Swiss SWA -> Arial Italic: */
#define TT2Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1200,\
                    /* Cell Height: */  1211,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   523,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3239,\
                      /* Font Name: */  {'S','w','i','s','s',' ','S','W','M'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7476,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  TT_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFE,\
                      /* Data Size: */     0,\
	}\


/* [font3240.spd] Swiss SWA -> Arial Bold: */
#define TT3Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1178,\
                    /* Cell Height: */  1212,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   531,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3240,\
                      /* Font Name: */  {'S','w','i','s','s',' ','S','W','M'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7474,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  TT_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFE,\
                      /* Data Size: */     0,\
	}\


/* [font3241.spd] Swiss SWA -> Arial Bold Italic: */
#define TT4Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1195,\
                    /* Cell Height: */  1212,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   278,\
                         /* Height: */    96,\
                       /* X Height: */   531,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     4,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   719,\
                    /* Font Number: */  3241,\
                      /* Font Name: */  {'S','w','i','s','s',' ','S','W','M'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7474,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  TT_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFE,\
                      /* Data Size: */     0,\
	}\


/* [font3234.spd] Dutch SWA -> Times New Roman: */
#define TT5Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1176,\
                    /* Cell Height: */  1175,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   448,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   660,\
                    /* Font Number: */  3234,\
                      /* Font Name: */  {'D','u','t','c','h',' ','S','W','M'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7467,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  TT_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFE,\
                      /* Data Size: */     0,\
	}\


/* [font3235.spd] Dutch SWA -> Times New Roman Italic: */
#define TT6Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1178,\
                    /* Cell Height: */  1165,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   448,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   660,\
                    /* Font Number: */  3235,\
                      /* Font Name: */  {'D','u','t','c','h',' ','S','W','M'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7472,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8779,\
       /* Character Complement MSW :*/  TT_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFE,\
                      /* Data Size: */     0,\
	}\


/* [font3236.spd] Dutch SWA -> Times New Roman Bold: */
#define TT7Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1176,\
                    /* Cell Height: */  1193,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   461,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   678,\
                    /* Font Number: */  3236,\
                      /* Font Name: */  {'D','u','t','c','h',' ','S','W','M'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7477,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  TT_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFE,\
                      /* Data Size: */     0,\
	}\


/* [font3237.spd] Dutch SWA -> Times New Roman Bold Italic: */
#define TT8Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1173,\
                    /* Cell Height: */  1209,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */   465,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     5,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   671,\
                    /* Font Number: */  3237,\
                      /* Font Name: */  {'D','u','t','c','h',' ','S','W','M'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7477,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  8779,\
       /* Character Complement MSW :*/  TT_MSW,\
       /* Character Complement LSW :*/  0xFFFFFFFE,\
                      /* Data Size: */     0,\
	}\


/* [font3008.spd] Courier SWA -> Courier New: */
#define TT9Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   707,\
                    /* Cell Height: */  1104,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   600,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     3,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3008,\
                      /* Font Name: */  {'C','o','u','r','i','e','r',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7483,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3009.spd] Courier SWA -> Courier New Italic: */
#define TT10Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   754,\
                    /* Cell Height: */  1104,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   600,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     3,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3009,\
                      /* Font Name: */  {'C','o','u','r','i','e','r',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7483,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3010.spd] Courier SWA -> Courier New Bold: */
#define TT11Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   708,\
                    /* Cell Height: */  1121,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   600,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     3,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3010,\
                      /* Font Name: */  {'C','o','u','r','i','e','r',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7483,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3011.spd] Courier SWA -> Courier New Bold Italic: */
#define TT12Hdr \
	{\
                    /* Header Size: */    88,\
                         /* Format: */    12,\
                      /* Font Type: */    10,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */   742,\
                    /* Cell Height: */  1121,\
                    /* Orientation: */     0,\
                        /* Spacing: */     0,\
                     /* Symbol Set: */     0,\
                          /* Pitch: */   600,\
                         /* Height: */    96,\
                       /* X Height: */   451,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     1,\
                  /* Stroke Weight: */     3,\
                 /* Typeface (LSB): */     3,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */   579,\
                    /* Font Number: */  3011,\
                      /* Font Name: */  {'C','o','u','r','i','e','r',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7483,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */  6964,\
       /* Character Complement MSW :*/  0x7FFFFFF9,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3012.spd] Symbol Set SWA -> Symbol: */
#define TT13Hdr \
	{\
                    /* Header Size: */    80,\
                         /* Format: */    12,\
                      /* Font Type: */     1,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1230,\
                    /* Cell Height: */  1126,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     19*32+'M'-64,\
                          /* Pitch: */   250,\
                         /* Height: */    96,\
                       /* X Height: */     4,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */    46,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */   128,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     4,\
                    /* Font Number: */  3012,\
                      /* Font Name: */  {'S','y','m','b','o','l',' ','S','e','t',' ','S','W','A'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7532,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0xFFFFFFFF,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


/* [font3219.spd] Unnamed -> Wingdings: */
#define TT14Hdr \
	{\
                    /* Header Size: */    80,\
                         /* Format: */    12,\
                      /* Font Type: */     2,\
                    /* Style (MSB): */     0,\
                       /* Baseline: */   764,\
                     /* Cell Width: */  1359,\
                    /* Cell Height: */  1134,\
                    /* Orientation: */     0,\
                        /* Spacing: */     1,\
                     /* Symbol Set: */     579*32+'L'-64,\
                          /* Pitch: */  1030,\
                         /* Height: */    96,\
                       /* X Height: */     4,\
                     /* Width Type: */     0,\
                    /* Style (LSB): */     0,\
                  /* Stroke Weight: */     0,\
                 /* Typeface (LSB): */     0,\
                 /* Typeface (MSB): */    32,\
                    /* Serif Style: */    64,\
                        /* Quality: */     0,\
                      /* Placement: */     0,\
             /* Underline Distance: */     0,\
           /* Old Underline Height: */     0,\
                      /* Reserved1: */  1200,\
                      /* Reserved2: */   500,\
                      /* Reserved3: */     0,\
                    /* NumContours: */     0,\
                      /* Pitch Ext: */     0,\
                     /* Height Ext: */     0,\
                     /* Cap Height: */     4,\
                    /* Font Number: */  3219,\
                      /* Font Name: */  {'U','n','n','a','m','e','d'},\
                   /* Scale Factor: */  1000,\
                   /* Master X Res: */  1000,\
                   /* Master Y Res: */  1000,\
             /* Underline Position: */  7532,\
               /* Underline Height: */  50376,\
                  /* LRE Threshold: */     0,\
                   /* Italic Angle: */     0,\
       /* Character Complement MSW :*/  0xFFFFFFFF,\
       /* Character Complement LSW :*/  0xFFFFFFFF,\
                      /* Data Size: */     0,\
	}\


