/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
  "#01060e",
  "#ea6c73",
  "#91b362",
  "#f9af4f",
  "#53bdfa",
  "#fae994",
  "#90e1c6",
  "#c7c7c7",

	/* 8 bright colors */
  "#686868",
  "#f07178",
  "#c2d94c",
  "#ffb454",
  "#59c2ff",
  "#ffee99",
  "#95e6cb",
  "#ffffff",

  [256] = "#b3b1ad", // foreground
  [257] = "#0a0e14", // background
  [258] = "#b3b1ad", // cursor
};
