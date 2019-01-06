![Layout](https://imgur.com/a/kyab9Fn "antempus keymap")

-   Online keyboard layout editor: http://www.keyboard-layout-editor.com/#/gists/3b37c78f070f3a0b421805bf4be3791f

# Programming Instructions:

in the top level folder of the QMK Firmware
\${rev} should be the version of the plank you are trying to flash

```
$ make planck/${rev}:antempus:dfu
```

for example:

```
$ make planck/rev4:antempu:dfu
```

would build for the rev4 of the planck.
