/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#123e7c",
	"#ff0000",
	"#d300c4",
	"#f57800",
	"#123e7c",
	"#711c91",
	"#0abdc6",
	"#d7d7d5",
                                 
  /* 8 bright colors */
	"#1c61c2",
	"#ff0000",
  	"#d300c4",
  	"#f57800",
  	"#00ff00",
  	"#711c91",
  	"#0abdc6",
  	"#d7d7d5",

	[256] = "#0abdc6", // foreground
	[257] = "#000b1e", // background
	[258] = "#ffffff", // cursor
};
