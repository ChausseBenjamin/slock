/* user and group to drop privileges to */
static const char *user  = "master";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#7D4B23",   /* during input */
	[FAILED] = "#B7416E",   /* wrong password */
	[BLOCKS] = "#f2f1f0",   /* key feedback block */
	[PAM] =    "#19B596",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* PAM service that's used for authentication */
static const char* pam_service = "login";

// ### Blocks bar ###
static short int blocks_enabled = 1; // 0 = don't show blocks
static const int blocks_width = 0; // 0 = full width
static const int blocks_height = 16;

// position
static const int blocks_x = 0;
static const int blocks_y = 0;

// Number of blocks
static const int blocks_count = 10;
// ### \Blocks bar ###

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
