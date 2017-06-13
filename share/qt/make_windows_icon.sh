#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/talant.png
ICON_DST=../../src/qt/res/icons/talant.ico
convert ${ICON_SRC} -resize 16x16 talant-16.png
convert ${ICON_SRC} -resize 32x32 talant-32.png
convert ${ICON_SRC} -resize 48x48 talant-48.png
convert talant-16.png talant-32.png talant-48.png ${ICON_DST}

