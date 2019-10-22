#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {LAYOUT(KC_A, KC_B, KC_1, KC_2)};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
    return true;
}

void keyboard_post_init_user(void) {
    debug_enable = true;
    // initialize row and col
    debug_matrix   = true;
    debug_keyboard = true;
    print("hello\n");
    dprint("debughello\n");
}
