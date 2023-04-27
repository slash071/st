/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#51576D",
	"#E78284",
	"#A6D189",
	"#E5C890",
	"#8CAAEE",
	"#F4B8E4",
	"#81C8BE",
	"#B5BFE2",

	/* 8 bright colors */
	"#626880",
	"#E78284",
	"#A6D189",
	"#E5C890",
	"#8CAAEE",
	"#F4B8E4",
	"#81C8BE",
	"#A5ADCE",

	[256] = "#C6D0F5", // foreground
	[257] = "#303446", // background
	[258] = "#F2D5CF", // cursor
};
