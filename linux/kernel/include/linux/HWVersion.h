#ifdef CONFIG_A500CG
#define HW_ID_EVB	0x00000007
#define HW_ID_SR	0x00000001
#define HW_ID_ER	0x00000003
#define HW_ID_PR	0x00000006

#define LCD_ID_TM	0
#define LCD_ID_HSD	1

#define A502CG_LCD_ID_GIS				0
#define A502CG_LCD_ID_TM				1
#define A502CG_LCD_ID_OFILM			2
#define A502CG_LCD_ID_TXD			3

#define PROJ_ID_A500CG	0x00000000
#define PROJ_ID_A501CG	0x00000004
#define PROJ_ID_A600CG	0x00000007
#define PROJ_ID_A502CG  0x00000006

#else /* CONFIG_MOFD */
#define HW_ID_EVB			0xffffffff
#define HW_ID_PR			0x00000000
#define HW_ID_SR1			0x00000001
#define HW_ID_SR2			0x00000002
#define HW_ID_ER			0x00000003
#define HW_ID_pre_PR			0x00000004
#define HW_ID_ER1_1			0x00000005
#define HW_ID_ER1_2			0x00000006
#define HW_ID_MP			0x00000007

#define ZE500ML_LCD_ID_BOE		3
#define ZE500ML_LCD_ID_AUO		4
#define ZE500ML_LCD_ID_HSD		5
#define ZE500ML_LCD_ID_TM		6
#define ZE500ML_LCD_ID_CTP		7

#define ZE550ML_LCD_ID_OTM_TM		3
#define ZE550ML_LCD_ID_OTM_CPT		0
#define ZE551ML_LCD_ID_NT_TM		3
#define ZE551ML_LCD_ID_NT_AUO		0
#define ZE551ML_LCD_ID_OTM_INX		2
#define ZX550ML_LCD_ID_NT_TM		3
#define ZX550ML_LCD_ID_OTM_INX		2
#define ZR550ML_LCD_ID_NT_TM		3
#define ZR550ML_LCD_ID_OTM_INX		0

#define PROJ_ID_ZE500ML		0x0000000e
#define PROJ_ID_ZR550ML		0x0000001c
#define PROJ_ID_ZE550ML		0x00000017
#define PROJ_ID_ZE551ML		0x0000001f
#define PROJ_ID_ZE551ML_ESE	0x0000000f
#define PROJ_ID_ZX550ML		0x0000001b

#define  HARDWARE_ID_SHIFT      0
#define  HARDWARE_ID_MASK       0x07
#define  PROJ_ID_SHIFT          3
#define  PROJ_ID_MASK           (0x1f<<PROJ_ID_SHIFT)
#define  LCD_ID_SHIFT           8
#define  LCD_ID_MASK            (0x03<<LCD_ID_SHIFT)
#define  SIM_ID_SHIFT           10
#define  SIM_ID_MASK            (0x01<<SIM_ID_SHIFT)
#define  CAM_ID_SHIFT           11
#define  CAM_ID_MASK            (0x01<<CAM_ID_SHIFT)
#define  RF_SKU_ID_SHIFT        12
#define  RF_SKU_ID_MASK         (0x0f<<RF_SKU_ID_SHIFT)


#endif /* CONFIG_MOFD */
