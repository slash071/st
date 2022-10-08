/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
  "#191e2a",
  "#ed8274",
  "#a6cc70",
  "#fad07b",
  "#6dcbfa",
  "#cfbafa",
  "#90e1c6",
  "#c7c7c7",
 
 	/* 8 bright colors */
  "#686868",
  "#f28779",
  "#bae67e",
  "#ffd580",
  "#73d0ff",
  "#d4bfff",
  "#95e6cb",
  "#ffffff",

	[256] = "#cbccc6", // foreground
	[257] = "#1f2430", // background
	[258] = "#cbccc6", // cursor
};
