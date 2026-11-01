# Star Fox: World Grand Prix — Starter Project

An original Nintendo 64 homebrew racing-game starter, with a small touch-playable browser preview.

This project does **not** include code, models, music, textures, or other assets copied from Cruis'n World or Star Fox 64. The spacecraft and game design are original placeholders.

## What is included

- `n64/main.c` — first Libdragon N64 program (boot/title screen).
- `n64/Makefile` — Libdragon build file for a `.z64` homebrew ROM.
- `android-preview/index.html` — a simple playable touch/keyboard prototype you can open on an Android phone.

## Important: what this first version is

The N64 source is a **starter ROM screen**, not the finished 3D racing game yet. The browser preview is a separate 2D-feel prototype so you can try steering and boost on your phone while we build the N64 version in stages.

## Android-only workflow

1. Extract this ZIP with your phone's file manager.
2. Open `android-preview/index.html` in your browser. If your file manager offers “Open with”, choose Chrome or another modern browser.
3. Use the on-screen LEFT / RIGHT buttons to steer and BOOST to accelerate. You can also use a keyboard if testing on a computer.
4. Keep the `n64` folder unchanged for the Nintendo 64 source project.

### Building the N64 ROM

The N64 source uses **Libdragon**, an open-source N64 SDK. Its normal build process uses the Libdragon toolchain and `n64.mk`. The official SDK's current setup guide is here:

- https://libdragon.dev/
- https://github.com/DragonMinded/libdragon

A phone alone does not normally provide the full N64 compiler toolchain. For an Android-only setup, the practical next step is to put this source folder in a Git repository and use a cloud Linux build environment/CI runner configured with Libdragon. The output should be a `.z64` file. Do not expect the included files to be a ready-made ROM.

## Controls in the phone preview

- LEFT / RIGHT: steer
- BOOST: temporary speed increase
- RESET: restart the run

## Planned milestones

1. N64 boot screen and controller input.
2. Low-polygon spacecraft and a chase camera.
3. A looping 3D track with barriers and scenery.
4. Rival racers and lap timing.
5. Boost effects, sound, menus, and polish.

## Project name

Star Fox: World Grand Prix (working title). This is an unofficial fan-inspired homebrew concept and is not affiliated with Nintendo.
