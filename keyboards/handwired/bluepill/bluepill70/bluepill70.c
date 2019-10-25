#include "bluepill70.h"
#include "wait.h"
#include <print.h>

void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up

    int i = 0;
    print("before\n");
    while (i < 2) {
        palSetPad(GPIOC, 13);  // OFF Color A
        wait_ms(250);
        palClearPad(GPIOC, 13);  // ON Color B
        i++;
        wait_ms(250);
    }
    print("after\n");
    debug_enable=true;
     debug_matrix=true;
     debug_keyboard=true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
  return true;
}
/*
void keyboard_post_init_user(void) {
  // Call the post init code.
  //rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  //rgblight_sethsv_noeeprom(180, 255, 255); // sets the color to teal/cyan without saving
  //rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 3); // sets mode to Fast breathing without saving
//	set_single_persistent_default_layer(0);
}
*/
