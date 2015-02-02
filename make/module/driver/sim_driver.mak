# Define source file lists to SRC_LIST
SRC_LIST = driver/storage/sim/src/dcl_sim.c \
		   driver/storage/sim/src/icc_sim_common_mtk.c \
		   driver/storage/sim/src/icc_switchControl0.c \
		   driver/storage/sim/src/icc_switchControl1.c \
		   driver/storage/sim/src/icc_switchControl2.c \
		   driver/storage/sim/src/icc_switchControl_al.c \
		   driver/storage/sim/src/icc_switchControl_mtk_0.c \
		   driver/storage/sim/src/icc_switchControl_mtk_1.c \
		   driver/storage/sim/src/MT6302_SPI.c



#  Define include path lists to INC_DIR
INC_DIR = driver/drv/include \
          driver/storage/sim/inc \
          service/sst/include \
          service/ssf/inc \
          driver/sys_drv/regbase/inc \
          driver/sys_drv/dma/inc \
          driver/sys_drv/counter/inc 


# Define the specified compile options to COMP_DEFS
COMP_DEFS =

# Define the source file search paths to SRC_PATH
SRC_PATH = driver/storage/sim/src
