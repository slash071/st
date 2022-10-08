/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
  "#000000",
  "#ea6c6d",
  "#99bf4d",
  "#eca944",
  "#3199e1",
  "#9e75c7",
  "#46ba94",
  "#c7c7c7",

	/* 8 bright colors */
  "#686868",
  "#f07171",
  "#86b300",
  "#f2ae49",
  "#399ee6",
  "#a37acc",
  "#4cbf99",
  "#d1d1d1",

  [256] = "#fafafa", // foreground
  [257] = "#6c7680", // background
  [258] = "#fafafa", // cursor
};
