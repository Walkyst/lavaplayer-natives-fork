#pragma once

#include <jni.h>
#include <stdint.h>

#ifdef __GNUC__
#define CONNECTOR_EXPORT __attribute__ ((visibility("default"))) JNIEXPORT
#else
#define CONNECTOR_EXPORT JNIEXPORT
#endif

#ifdef _MSC_VER
#define CONNECTOR_IMPORT __declspec(dllimport)
#else
#define CONNECTOR_IMPORT
#endif
