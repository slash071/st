/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
  "#282828",
  "#cc241d",
  "#98971a",
  "#d79921",
  "#458588",
  "#b16286",
  "#689d6a",
  "#a89984",
 
 	/* 8 bright colors */
  "#928374",
  "#fb4934",
  "#b8bb26",
  "#fabd2f",
  "#83a598",
  "#d3869b",
  "#8ec07c",
  "#ebdbb2",

  [256] = "#ebdbb2", // foreground
  [257] = "#282828", // background
  [258] = "#ebdbb2", // cursor
};
