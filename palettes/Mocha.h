/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#45475A",
	"#F38BA8",
	"#A6E3A1",
	"#F9E2AF",
	"#89B4FA",
	"#F5C2E7",
	"#94E2D5",
	"#BAC2DE",

	/* 8 bright colors */
	"#585B70",
	"#F38BA8",
	"#A6E3A1",
	"#F9E2AF",
	"#89B4FA",
	"#F5C2E7",
	"#94E2D5",
	"#A6ADC8",

	[256] = "#CDD6F4", // foreground
	[257] = "#1E1E2E", // background
	[258] = "#F5E0DC", // cursor
};
