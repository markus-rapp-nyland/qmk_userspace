# MRN QMK Userspace
This repo is used to maintain my own keymaps without having to fork the main QMK repository.

## How-to
1. Run the normal `qmk setup` procedure if you haven't already done so -- see [QMK Docs](https://docs.qmk.fm/#/newbs) for details.
2. Open a terminal inside this qmk_userspace repository
3. Enable userspace in QMK config using `qmk config user.overlay_dir="$(pwd)"`
4. Compile with `qmk compile -kb lily58 -km left/rigth`

## Details
I opted for a setup with two layers, BASE and NAVI. I find that a single layer works fine for most of my use-cases.
When I need to adapt, I use either key-overrides or custom keycodes.

### Key overrides
Key overrides is used for switching out key combinations. For example typing `[` when shift and `(` is pressed.

### Custom key codes
Custom key codes are used when I need a bit more logic for a key press. For example the `~` key.
That is usually typed by `RALT ^` + a space on windows.   
In my setup, a single key press is all that is needed.

## Left vs right
Left is Mac specific, right is for windows. 
I can compile both to my lily58, one for each side, and switch operating system by switching which side is connected.
