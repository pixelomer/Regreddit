TARGET = iphone:clang:latest:7.0
ARCHS = arm64e arm64 armv7

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Forgeddit

Forgeddit_FILES = Tweak.x $(wildcard *.m)
Forgeddit_CFLAGS = -fobjc-arc -include macros.h

include $(THEOS_MAKE_PATH)/tweak.mk
