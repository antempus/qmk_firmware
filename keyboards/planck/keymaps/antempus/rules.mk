# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#

SRC += muse.c



# MIDI controls
MIDI_ENABLE = yes
# Audio output on port C6
AUDIO_ENABLE = yes
# Audio control and System control(+450)
EXTRAKEY_ENABLE = yes
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
# Breathing sleep LED during USB suspend
SLEEP_LED_ENABLE = no
# Virtual DIP switch configuration(+1000)
BOOTMAGIC_ENABLE = no
# Mouse keys(+4700)
MOUSEKEY_ENABLE = no
# Console for debug(+400)
CONSOLE_ENABLE = no
# Commands for debug and configuration
COMMAND_ENABLE = no
# Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes
# Enable keyboard backlight functionality
BACKLIGHT_ENABLE = no
# Unicode
UNICODE_ENABLE = no
# Enable Bluetooth with the Adafruit EZ-Key HID
BLUETOOTH_ENABLE = no
# Enable WS2812 RGB underlight.  Do not enable this with audio at the same time.
RGBLIGHT_ENABLE = no
# Enable one-hand typing
ONEHAND_ENABLE = no
# Enable TX Bolt protocol for Stenography, requires VIRTSER and may not work with mouse keys
STENO_ENABLE = no
