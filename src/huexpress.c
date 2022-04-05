
#include "PCEngine.h"


// Check if a game was asked
/*
 * \return non zero if a game must be played
 */
int
game_asked()
{
	return ((CD_emulation == 1) || (strcmp(cart_name, "")));
}


int
main(int argc, char *argv[])
{
	// Create a new PC Engine
	struct PCEngine eng, *engine = &eng;
	PCEngine_init(engine);

	if (!PCEngine_isReady(engine)) {
		MESSAGE_ERROR("PC Engine is not ready!\n");
		return 1;
	}

	// Read the command line
	if (parse_commandline(argc, argv) != 0) {
		PCEngine_deinit(engine);
		return 1;
	}

	MESSAGE_INFO("HuExpress, the multi-platform PCEngine emulator\n");
	MESSAGE_INFO("Version %d.%d.%d\n",
		VERSION_MAJOR, VERSION_MINOR, VERSION_UPDATE);

	if (game_asked()) {
		PCEngine_LoadFile(engine, cart_name);
		PCEngine_Run(engine);
	} else {
		MESSAGE_ERROR("No game specified\n");
	}

	PCEngine_deinit(engine);
	return 0;
}