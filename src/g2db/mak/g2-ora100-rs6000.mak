# Defines
# -------
PLATFM = rs6000

include ${SRCBOX}/g2db/mak/unix.def

OS_VER = 5.2
DB_VER = 10
DBNAME = ORACLE
XDBDIR = /gensym/bridges/aix/dbs/oracle/1020

# Executable:
# -----------
g2-ora10:                   settings                            \
                            gdb_main.o                          \
                            gdb_g2_server.o                     \
                            gdb_common.o                        \
                            gdb_utils.o                         \
                            gsi_brg.o                           \
                            ${SPECFC}/nsleep.o                  \
                            gdb_client_inter_ora.o              \
                            gdb_client_ora.o
	@cc  -L$(XDBDIR)/lib32 -L${GSIDIR} -b32 -o g2-ora10              \
         gdb_main.o gdb_g2_server.o gdb_common.o gdb_utils.o gsi_brg.o   \
         ${SPECFC}/nsleep.o gdb_client_inter_ora.o gdb_client_ora.o      \
         -lgsi -ltcp -lnogsec -lrtl -lclntsh -lm `cat ${XDBDIR}/lib32/sysliblist` -lm 
	@chmod +x g2-ora10
	@ls -l g2-ora10

# Compilation
# -----------
gdb_main.o:                 $(GDBDIR)/gdb_main.c                \
                            $(GSIDIR)/gsi_main.h                \
                            $(GDBDIR)/gdb_globals.h             \
                            $(GDBDIR)/gdb_utils.h               
	@cc -c -b32 -I$(GDBDIR) -I$(GSIDIR) -D$(DBNAME) -D$(PLATFM) -DDB_VER=\"$(DB_VER)\" -DKB_VER=$(KB_VER) \
        -DGSI_VER=\"$(GSIVER)\" -D GDB_VER=\"$(GDBVER)\" -D BUILD_CODE=\"$(BLDCOD)\" $(GDBDIR)/gdb_main.c
	@ls -l gdb_main.o

gdb_g2_server.o:            $(GDBDIR)/gdb_g2_server.c           \
                            $(GSIDIR)/gsi_main.h                \
                            $(GDBDIR)/gdb_globals.h             \
                            $(GDBDIR)/gdb_utils.h               \
                            $(GDBDIR)/gdb_g2_server.h           \
                            $(GDBDIR)/gdb_messages.h            \
                            $(GDBDIR)/gdb_context.h             \
                            $(GDBDIR)/gdb_common.h              \
                            $(GDBDIR)/gdb_genda.h
	@cc -c -b32 -I$(GDBDIR) -I$(GSIDIR) -DKB_VER=$(KB_VER) -D$(DBNAME) $(GDBDIR)/gdb_g2_server.c
	@ls -l gdb_g2_server.o

gdb_common.o:               $(GDBDIR)/gdb_common.c              \
                            $(GSIDIR)/gsi_main.h                \
                            $(GDBDIR)/gdb_globals.h             \
                            $(GDBDIR)/gdb_genda.h               \
                            $(GDBDIR)/gdb_messages.h            \
                            $(GDBDIR)/gdb_context.h             \
                            $(GDBDIR)/gdb_common.h              \
                            $(GDBDIR)/gdb_utils.h               \
                            $(GDBDIR)/gdb_g2_client.h
	@cc -c -b32 -I$(GDBDIR) -I$(GSIDIR) -D$(DBNAME) $(GDBDIR)/gdb_common.c
	@ls -l gdb_common.o

gdb_utils.o:                $(GDBDIR)/gdb_utils.c               \
                            $(GDBDIR)/gdb_globals.h
	@cc -c -b32 -I$(GDBDIR) -I$(GSIDIR) -D$(DBNAME) $(GDBDIR)/gdb_utils.c
	@ls -l gdb_utils.o

gsi_brg.o:                  $(AUTHDR)/gsi_brg.c
	@cc -c -b32 -D$(PLATFM) $(AUTHDR)/gsi_brg.c
	@ls -l gsi_brg.o

gdb_client_inter_ora.o:     $(GDBDIR)/gdb_client_inter_ora.c    \
                            $(GDBDIR)/gdb_globals.h             \
                            $(GDBDIR)/gdb_genda.h               \
                            $(GDBDIR)/gdb_client_ora.h          \
                            $(GDBDIR)/gdb_messages.h            \
                            $(GDBDIR)/gdb_context.h             \
                            $(GSIDIR)/gsi_main.h                \
                            $(GDBDIR)/gdb_utils.h               \
                            $(GDBDIR)/gdb_common.h
	@cc -c  -b32 -I$(GDBDIR) -I$(GSIDIR) -I$(XDBDIR)/precomp/public -D$(DBNAME) $(GDBDIR)/gdb_client_inter_ora.c
	@ls -l gdb_client_inter_ora.o

gdb_client_ora.o:           gdb_client_ora.c                    \
                            $(GDBDIR)/gdb_globals.h             \
                            $(GDBDIR)/gdb_client_ora.h          \
                            $(GDBDIR)/gdb_globals.h             \
                            $(GDBDIR)/gdb_messages.h            \
                            $(GSIDIR)/gsi_main.h                \
                            $(GDBDIR)/gdb_context.h             \
                            $(GDBDIR)/gdb_utils.h               \
                            $(GDBDIR)/gdb_common.h              \
                            $(GDBDIR)/gdb_g2_client.h
	@cc -c -b32 -D $(PLATFM) -D iDBVER=$(DB_VER) -I$(GDBDIR) -I$(GSIDIR) -I$(GDBDIR) -I$(XDBDIR)/precomp/public \
        -DMAXOPENCURSORS=44 -DHOLD_CURSOR="yes" -DRELEASE_CURSOR="no" -DORA09 -DHYBRID -D$(DBNAME) gdb_client_ora.c
	@ls -l gdb_client_ora.o

# Precompiler
# -----------
gdb_client_ora.c:           $(GDBDIR)/gdb_client_ora.pc         \
                            $(GDBDIR)/gdb_client_ora.h          \
                            $(GDBDIR)/gdb_common.h              \
                            $(GDBDIR)/gdb_context.h             \
                            $(GDBDIR)/gdb_g2_client.h           \
                            $(GDBDIR)/gdb_genda.h               \
                            $(GDBDIR)/gdb_globals.h             \
                            $(GDBDIR)/gdb_messages.h            \
                            $(GDBDIR)/gdb_utils.h
	@$(XDBDIR)/bin/proc iname=$(GDBDIR)/gdb_client_ora.pc oname=gdb_client_ora.c \
          include=$(GDBDIR) include=$(GDBDIR) include=$(GSIDIR) \
          SQLCHECK=SEMANTICS MAXOPENCURSORS=44 HOLD_CURSOR=yes RELEASE_CURSOR=no
	@ls -l gdb_client_ora.c

# Remove intermediate files
# -------------------------
clean :
	@- rm *.o 2> /dev/null
	@- rm gdb_client_ora.c 2> /dev/null

# Report:
# -------
settings:
	@echo "+================================================
	@echo "|  BUILDING G2-ORA10 (${BLDCOD}) on $(PLATFM)
	@echo "+================================================
	@echo "|
	@echo "| ENVIRONMENT
	@echo "|   Bridge      : $(GDBVER) ($(KB_VER))"
	@echo "|   OS Ver      : $(OS_VER)
	@echo "|   GSI         : $(GSIDIR) ($(GSIVER))"
	@echo "|
	@echo "| SOURCES
	@echo "|   Source      : $(GDBDIR)
	@echo "|   DBase       : $(XDBDIR)
	@echo "|
	@echo "+================================================

