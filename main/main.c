/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "g_local.h"
#include "lcd_main.h"
#include "audio_main.h"
#include "input_main.h"
#include "debug.h"
#include <bsp_sys.h>
#include <bsp_cmd.h>

extern int app_main (void);
extern int SDL_main(int argc, const char *argv[]);
extern void Sys_CacheInit (void);

int g_profile_per = 0;

int main(void)
{
    app_main();
}

void mainloop (int argc, char **argv)
{
    //Sys_CacheInit();
    cmd_register_i32(&g_profile_per, "profper");
	Qcommon_Init (argc, argv);

	while (1)
	{
		Qcommon_Frame (0.1);
        bsp_tickle();
	}
}


