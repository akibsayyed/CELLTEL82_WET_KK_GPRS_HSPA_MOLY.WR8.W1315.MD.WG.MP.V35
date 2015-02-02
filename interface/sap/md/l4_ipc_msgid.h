//below are AGPS messages for IPC
IPC_MSG_ID_MMI_AGPS_BEGIN,
IPC_MSG_ID_MMI_SS_MTLR_BEGIN_IND = IPC_MSG_ID_MMI_AGPS_BEGIN,
IPC_MSG_ID_MMI_SS_MTLR_BEGIN_RES_REQ,
IPC_MSG_ID_MMI_SS_MTLR_BEGIN_RES_RSP,
IPC_MSG_ID_MMI_SS_AERQ_BEGIN_IND,
IPC_MSG_ID_MMI_SS_AERQ_BEGIN_RES_REQ,
IPC_MSG_ID_MMI_SS_AERQ_BEGIN_RES_RSP,
IPC_MSG_ID_MMI_SS_AERP_BEGIN_REQ,
IPC_MSG_ID_MMI_SS_AERP_BEGIN_RSP,
IPC_MSG_ID_MMI_SS_AERP_END_REQ,
IPC_MSG_ID_MMI_SS_AERP_END_RSP,
IPC_MSG_ID_MMI_SS_AECL_BEGIN_IND,
IPC_MSG_ID_MMI_SS_AECL_BEGIN_RES_REQ,
IPC_MSG_ID_MMI_SS_AECL_BEGIN_RES_RSP,
IPC_MSG_ID_MMI_SS_MOLR_BEGIN_REQ,
IPC_MSG_ID_MMI_SS_MOLR_BEGIN_RSP,
IPC_MSG_ID_MMI_SS_MOLR_END_REQ,
IPC_MSG_ID_MMI_SS_MOLR_END_RSP,
IPC_MSG_ID_MMI_AGPS_ENABLE_DISABLE_REQ,
IPC_MSG_ID_MMI_AGPS_ENABLE_DISABLE_RSP,
IPC_MSG_ID_MMI_AGPS_KEY_UPDATE_REQ,
IPC_MSG_ID_MMI_AGPS_KEY_UPDATE_RSP,
IPC_MSG_ID_MMI_AGPS_NEW_KEY_NEEDED_IND,
IPC_MSG_ID_MMI_AGPS_RESET_POSITIONING_IND,
IPC_MSG_ID_MMI_AGPS_CP_START_IND,
IPC_MSG_ID_MMI_AGPS_CP_END_IND,
IPC_MSG_ID_MMI_AGPS_CP_ABORT_REQ,
IPC_MSG_ID_MMI_AGPS_CP_ABORT_RSP,
IPC_MSG_ID_MMI_AGPS_END = IPC_MSG_ID_MMI_AGPS_CP_ABORT_RSP,
IPC_MSG_ID_MMI_NBR_BEGIN,
IPC_MSG_ID_L4C_NBR_CELL_INFO_REG_REQ = IPC_MSG_ID_MMI_NBR_BEGIN,
IPC_MSG_ID_L4C_NBR_CELL_INFO_REG_CNF,
IPC_MSG_ID_L4C_NBR_CELL_INFO_DEREG_REQ,
IPC_MSG_ID_L4C_NBR_CELL_INFO_DEREG_CNF,
IPC_MSG_ID_L4C_NBR_CELL_INFO_IND,
IPC_MSG_ID_MMI_NBR_END = IPC_MSG_ID_L4C_NBR_CELL_INFO_IND,
//below are for AGPS auto test
IPC_MSG_ID_AGPS_AUTO_TEST_IND,
IPC_MSG_ID_AGPS_CP_UP_STATUS_IND,
IPC_MSG_ID_AGPS_MOLR_START_IND,
IPC_MSG_ID_AGPS_MOLR_STOP_IND,
IPC_MSG_ID_AGPS_MTLR_RESPONSE_IND,
IPC_MSG_ID_DHCP_MBCI_IP_CONFIG_REQ,
IPC_MSG_ID_DHCP_MBCI_IP_CONFIG_RSP,
IPC_MSG_ID_DHCP_MBCI_IP_CONFIG_IND,
/*below is for GPS desense*/
IPC_MSG_ID_L4C_RF_INFO_IND,
IPC_MSG_ID_L4C_RF_INFO_REQ,