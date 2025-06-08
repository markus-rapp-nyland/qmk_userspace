# MRN QMK Userspace
This repo is used to maintain my own keymaps without having to fork the main QMK repository.

## How-to
1. Run the normal `qmk setup` procedure if you haven't already done so -- see [QMK Docs](https://docs.qmk.fm/#/newbs) for details.
2. Open a terminal inside this qmk_userspace repository
3. Enable userspace in QMK config using `qmk config user.overlay_dir="$(pwd)"`
4. Compile with `qmk compile -kb lily58 -km mrn`
