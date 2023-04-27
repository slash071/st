/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#3b4252",
	"#bf616a",
	"#a3be8c",
	"#ebcb8b",
	"#81a1c1",
	"#b48ead",
	"#88c0d0",
	"#e5e9f0",
 
 	/* 8 bright colors */
	"#4c566a",
	"#bf616a",
	"#a3be8c",
	"#ebcb8b",
	"#81a1c1",
	"#b48ead",
	"#8fbcbb",
	"#eceff4",

	[256] = "#d8dee9", // foreground
	[257] = "#2e3440", // background
	[258] = "#cccccc", // cursor
};
