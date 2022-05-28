// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom battle config initializations
 * Place the definition of custom battle configuration initializations in this file.
 *
 * Do not forget to add a comma at the end of the line, if you want to add another config
 *
 * Format:
 *	 { "name", &battle_config.<variable name>, <default value>, <minimum value>, <maximum value> },
 **/

	// Announce First for Success or Failure [@Tactics#8220 & @null#6385]
	{ "announce_refine_success",                  &battle_config.announce_refine_success,                   1,    0,      INT_MAX,        },
	{ "announce_refine_failure",                  &battle_config.announce_refine_failure,                   1,    0,      INT_MAX,        },
