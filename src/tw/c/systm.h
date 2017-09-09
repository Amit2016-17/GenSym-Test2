/* systm.h -- Header File for systm.c
 * Copyright (c) 1986 - 2017 Gensym Corporation.  All Rights Reserved.
 */


/* Symbol Definitions */
extern Object Qeval;
extern Object Qnot;

extern Object Pclos;
extern Object Pclos_run;
extern Object Pclosx;
extern Object Pcl;
extern Object Pcl_user;
extern Object Pkeyword;
extern Object Ptrun;
extern Object Ptx;

/* function declarations */

#ifdef USE_PROTOTYPES

extern Object declare_system_1(int,...);
extern Object launch_g2_image(void);
extern Object launch_system(Object);
extern Object launch_telewindows_image(void);
extern Object set_system_version(Object,Object);

#else

extern Object declare_system_1();
extern Object launch_g2_image();
extern Object launch_system();
extern Object launch_telewindows_image();
extern Object set_system_version();

#endif

/* variables/constants */
extern Object All_systems;
extern Object Bootstrap_information;
extern Object Development_world_save_p;
