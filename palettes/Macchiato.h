/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#494D64",
	"#ED8796",
	"#A6DA95",
	"#EED49F",
	"#8AADF4",
	"#F5BDE6",
	"#8BD5CA",
	"#B8C0E0",

	/* 8 bright colors */
	"#5B6078",
	"#ED8796",
	"#A6DA95",
	"#EED49F",
	"#8AADF4",
	"#F5BDE6",
	"#8BD5CA",
	"#A5ADCB",

	[256] = "#CAD3F5", // foreground
	[257] = "#24273A", // background
	[258] = "#F4DBD6", // cursor
};
