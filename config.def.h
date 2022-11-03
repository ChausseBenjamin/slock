/* user and group to drop privileges to */
static const char *user  = "master";
static const char *group = "wheel";

static const char *cmd = "layouttoggle us";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] = "black",    /* after initialization */
	[INIT]       = "#2d2d2d",  /* after initialization */
	[INPUT]      = "#005577",  /* during input */
	[FAILED]     = "#cc3333",  /* wrong password */
	[PAM]        = "#9400d3",  /* waiting for PAM */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color11",  STRING,  &colorname[INIT] },
		{ "color6",   STRING,  &colorname[INPUT] },
		{ "color4",   STRING,  &colorname[FAILED] },
		{ "color2",   STRING,  &colorname[PAM] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
static const int logow = 12;	/* grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x	y	w	h */
	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 0,	5,	8,	1 },
	{ 3,	0,	1,	5 },
	{ 5,	3,	1,	2 },
	{ 7,	3,	1,	2 },
	{ 8,	3,	4,	1 },
	{ 9,	4,	1,	2 },
	{ 11,	4,	1,	2 },
};


/* PAM service that's used for authentication */
static const char* pam_service = "login";
