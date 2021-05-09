/* FIFOs */
#define VIF0_FIFO	(*(volatile uint128*)0x10004000)
#define VIF1_FIFO	(*(volatile uint128*)0x10005000)
#define GIF_FIFO	(*(volatile uint128*)0x10006000)
#define IPU_out_FIFO	(*(volatile uint128*)0x10007000)
#define IPU_in_FIFO	(*(volatile uint128*)0x10007010)

/* DMA channels */
// to VIF0
#define D0_CHCR		(*(volatile uint32*)0x10008000)
#define D0_MADR		(*(volatile uint32*)0x10008010)
#define D0_QWC		(*(volatile uint32*)0x10008020)
#define D0_TADR		(*(volatile uint32*)0x10008030)
#define D0_ASR0		(*(volatile uint32*)0x10008040)
#define D0_ASR1		(*(volatile uint32*)0x10008050)
// VIF1
#define D1_CHCR		(*(volatile uint32*)0x10009000)
#define D1_MADR		(*(volatile uint32*)0x10009010)
#define D1_QWC		(*(volatile uint32*)0x10009020)
#define D1_TADR		(*(volatile uint32*)0x10009030)
#define D1_ASR0		(*(volatile uint32*)0x10009040)
#define D1_ASR1		(*(volatile uint32*)0x10009050)
// to GIF
#define D2_CHCR		(*(volatile uint32*)0x1000a000)
#define D2_MADR		(*(volatile uint32*)0x1000a010)
#define D2_QWC		(*(volatile uint32*)0x1000a020)
#define D2_TADR		(*(volatile uint32*)0x1000a030)
#define D2_ASR0		(*(volatile uint32*)0x1000a040)
#define D2_ASR1		(*(volatile uint32*)0x1000a050)
// fromIPU
#define D3_CHCR		(*(volatile uint32*)0x1000b000)
#define D3_MADR		(*(volatile uint32*)0x1000b010)
#define D3_QWC		(*(volatile uint32*)0x1000b020)
// toIPU
#define D4_CHCR		(*(volatile uint32*)0x1000b400)
#define D4_MADR		(*(volatile uint32*)0x1000b410)
#define D4_QWC		(*(volatile uint32*)0x1000b420)
#define D4_TADR		(*(volatile uint32*)0x1000b430)
// from SIF0
#define D5_CHCR		(*(volatile uint32*)0x1000c000)
#define D5_MADR		(*(volatile uint32*)0x1000c010)
#define D5_QWC		(*(volatile uint32*)0x1000c020)
// to SIF1
#define D6_CHCR		(*(volatile uint32*)0x1000c400)
#define D6_MADR		(*(volatile uint32*)0x1000c410)
#define D6_QWC		(*(volatile uint32*)0x1000c420)
#define D6_TADR		(*(volatile uint32*)0x1000c430)
// SIF2
#define D7_CHCR		(*(volatile uint32*)0x1000c800)
#define D7_MADR		(*(volatile uint32*)0x1000c810)
#define D7_QWC		(*(volatile uint32*)0x1000c820)
// fromSPR
#define D8_CHCR		(*(volatile uint32*)0x1000d000)
#define D8_MADR		(*(volatile uint32*)0x1000d010)
#define D8_QWC		(*(volatile uint32*)0x1000d020)
#define D8_SADR		(*(volatile uint32*)0x1000d080)
// toSPR
#define D9_CHCR		(*(volatile uint32*)0x1000d400)
#define D9_MADR		(*(volatile uint32*)0x1000d410)
#define D9_QWC		(*(volatile uint32*)0x1000d420)
#define D9_TADR		(*(volatile uint32*)0x1000d430)
#define D9_SADR		(*(volatile uint32*)0x1000d480)

/* DMA controller */
#define D_CTRL		(*(volatile uint32*)0x1000e000)
#define D_STAT		(*(volatile uint32*)0x1000e010)
#define D_PCR		(*(volatile uint32*)0x1000e020)
#define D_SQWC		(*(volatile uint32*)0x1000e030)
#define D_RBSR		(*(volatile uint32*)0x1000e040)
#define D_RBOR		(*(volatile uint32*)0x1000e050)
#define D_STADR		(*(volatile uint32*)0x1000e060)
#define D_ENABLER	(*(volatile uint32*)0x1000f520)
#define D_ENABLEW	(*(volatile uint32*)0x1000f590)


/* GS privileged registers */
#define GS_PMODE	(*(volatile uint64*)0x12000000)
#define GS_SMODE1	(*(volatile uint64*)0x12000010)
#define GS_SMODE2	(*(volatile uint64*)0x12000020)
#define GS_SRFSH	(*(volatile uint64*)0x12000030)
#define GS_SYNCH1	(*(volatile uint64*)0x12000040)
#define GS_SYNCH2	(*(volatile uint64*)0x12000050)
#define GS_SYNCV	(*(volatile uint64*)0x12000060)
#define GS_DISPFB1	(*(volatile uint64*)0x12000070)
#define GS_DISPLAY1	(*(volatile uint64*)0x12000080)
#define GS_DISPFB2	(*(volatile uint64*)0x12000090)
#define GS_DISPLAY2	(*(volatile uint64*)0x120000a0)
#define GS_EXTBUF	(*(volatile uint64*)0x120000b0)
#define GS_EXTDATA	(*(volatile uint64*)0x120000c0)
#define GS_EXTWRITE	(*(volatile uint64*)0x120000d0)
#define GS_BGCOLOR	(*(volatile uint64*)0x120000e0)
#define GS_CSR		(*(volatile uint64*)0x12001000)
#define GS_IMR		(*(volatile uint64*)0x12001010)
#define GS_BUSDIR	(*(volatile uint64*)0x12001040)
#define GS_SIGLBLID	(*(volatile uint64*)0x12001080)
