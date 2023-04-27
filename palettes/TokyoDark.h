/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
  "#06080a",
  "#ee6d85",
  "#95c561",
  "#d7a65f",
  "#7199ee",
  "#a485dd",
  "#38a89d",
  "#a0a8cd",

	/* 8 bright colors */
  "#212234",
  "#ee6d85",
  "#95c561",
  "#d7a65f",
  "#7199ee",
  "#a485dd",
  "#38a89d",
  "#a0a8cd",

  [256] = "#a0a8cd", // foreground
  [257] = "#11121d", // background
  [258] = "#a0a8cd", // cursor
};
