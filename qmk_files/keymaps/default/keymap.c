#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [0] = LAYOUT_ortho_5x12(
    MI_OCTD, MI_G,   MI_Bb,   MI_Db1,  MI_E1,   MI_G1,   MI_Bb1,  MI_Db2,  MI_E2,   MI_G2,   MI_Bb2,  MI_Db3,
    MI_Fs,   MI_A,    MI_C1,  MI_Eb1,  MI_Fs1,  MI_A1,   MI_C2,   MI_Eb2,  MI_Fs2,  MI_A2,   MI_C3,   MI_Eb3,
    MI_OCTU, MI_Ab,  MI_B,    MI_D1,   MI_F1,   MI_Ab1,  MI_B1,   MI_D2,   MI_F2,   MI_Ab2,  MI_B2,   MI_D3,
    MI_G,    MI_Bb,   MI_Db1, MI_E1,   MI_G1,   MI_Bb1,  MI_Db2,  MI_E2,   MI_G2,   MI_Bb2,  MI_Db3,  MI_E3,
    MO(1),   MI_A,   MI_C1,   MI_Eb1,  MI_Fs1,  MI_A1,   MI_C2,   MI_Eb2,  MI_Fs2,  MI_A2,   MI_C3,   MI_Eb3
    ),
    [1] = LAYOUT_ortho_5x12(
    QK_BOOT, MI_G,   MI_Bb,   MI_Db1,  MI_E1,   MI_G1,   MI_Bb1,  MI_Db2,  MI_E2,   MI_G2,   MI_Bb2,  MI_Db3,
    MI_Fs,   MI_A,    MI_C1,  MI_Eb1,  MI_Fs1,  MI_A1,   MI_C2,   MI_Eb2,  MI_Fs2,  MI_A2,   MI_C3,   MI_Eb3,
    MI_OCTU, MI_Ab,  MI_B,    MI_D1,   MI_F1,   MI_Ab1,  MI_B1,   MI_D2,   MI_F2,   MI_Ab2,  MI_B2,   MI_D3,
    MI_G,    MI_Bb,   MI_Db1, MI_E1,   MI_G1,   MI_Bb1,  MI_Db2,  MI_E2,   MI_G2,   MI_Bb2,  MI_Db3,  MI_E3,
    KC_NO,   MI_A,   MI_C1,   MI_Eb1,  MI_Fs1,  MI_A1,   MI_C2,   MI_Eb2,  MI_Fs2,  MI_A2,   MI_C3,   MI_Eb3
    )
};