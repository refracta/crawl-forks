#pragma once

#include "monster-type.h"
#include "spl-cast.h"

enum class mount_type
{
    none,
    drake,
    spider,
    hydra
};

void damage_mount(int amount);
void dismount();
void cure_mount_debuffs();
bool mount_hit();
int apply_mount_ac(int amount);
monster_type mount_mons();
bool drain_mount(int strength);
bool miasma_mount();
void slow_mount(int duration);
void rot_mount(int amount, bool needs_message = true);
int mount_statuses();

spret gain_mount(mount_type mount, int pow, bool fail);