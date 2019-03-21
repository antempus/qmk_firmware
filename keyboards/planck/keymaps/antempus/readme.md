# stryakr Layout

![Layout](https://i.imgur.com/XxBtDBy.png "Antempis Keymap")

-   Online keyboard layout editor: http://www.keyboard-layout-editor.com/#/gists/e77306f9d14cc93fa26123b93b106474
-   Online keyboard layout editor (lower layer): http://www.keyboard-layout-editor.com/#/gists/786e03f6fbd274cb4f4e77a3d67f85fa
-   Online keyboard layout editor (raise layer): http://www.keyboard-layout-editor.com/#/gists/2e22c71f6910103c20d595d1caa713d6
-   Online keyboard layout editor (multimedia layer): http://www.keyboard-layout-editor.com/#/gists/132ebf8053508a7a81dfa8e0756edb40

# Programming Instructions:

in the top level folder of the QMK Firmware
\${rev} should be the version of the plank you are trying to flash

```
$ make planck/${rev}:stryakr:dfu
```

for example:

```
$ make planck/rev4:antempus:dfu
```

would build for the rev4 of the planck.
