TEMPLATE = subdirs

CONFIG -= app_bundle
CONFIG -= qt

DISTFILES += \
    docs/ErrorList.odt \
    docs/TestList.odt

QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage -O0

SUBDIRS = app tests

CONFIG += ordered
