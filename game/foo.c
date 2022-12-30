#include "iso.h"
#include <stdio.h>

b8 iso_init(iso_game_inst* game_inst) {
	return true;
}

void iso_update(iso_game_inst* game_inst, f32 dt) {
	printf("%s %d %d\n", game_inst->title, game_inst->win_width, game_inst->win_height);
}

void iso_exit() {
	printf("Exit\n");
}

