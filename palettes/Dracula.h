/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
  "#000000",
  "#ff5555",
  "#50fa7b",
  "#f1fa8c",
  "#bd93f9",
  "#ff79c6",
  "#8be9fd",
  "#bbbbbb",
                                 
  /* 8 bright colors */
  "#44475a",
  "#ff5555",
  "#50fa7b",
  "#f1fa8c",
  "#bd93f9",
  "#ff79c6",
  "#8be9fd",
  "#ffffff",

  [256] = "#f8f8f2", // foreground
  [257] = "#282a36", // background
  [258] = "#f8f8f2", // cursor
};
