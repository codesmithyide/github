# This file was automatically generated by bakefile.
#
# Any manual changes will be lost if it is regenerated,
# modify the source .bkl file instead if possible.

# You may define standard make variables such as CFLAGS or
# CXXFLAGS to affect the build. For example, you could use:
#
#      make CXXFLAGS=-g
#
# to build with debug information. The full list of variables
# that can be used by this makefile is:
# AR, CC, CFLAGS, CPPFLAGS, CXX, CXXFLAGS, LD, LDFLAGS, MAKE, RANLIB.

# You may also specify config=Debug|Release
# or their corresponding lower case variants on make command line to select
# the corresponding default flags values.
ifeq ($(config),debug)
override config := Debug
endif
ifeq ($(config),release)
override config := Release
endif
ifeq ($(config),Debug)
override CPPFLAGS += -DDEBUG
override CFLAGS += -g -O0
override CXXFLAGS += -g -O0
override LDFLAGS += -g
else ifeq ($(config),Release)
override CPPFLAGS += -DNDEBUG
override CFLAGS += -O2
override CXXFLAGS += -O2
else ifneq (,$(config))
$(warning Unknown configuration "$(config)")
endif
#
# Additionally, this makefile is customizable with the following
# settings:
#
#      ISHIKO_CPP_BASEPLATFORM_ROOT   Path to the Ishiko BasePlatform installation
#      ISHIKO_CPP_ERRORS_ROOT         Path to the Ishiko Errors installation
#      ISHIKO_CPP_BOOST_ROOT          Path to the Boost installation
#      ISHIKO_CPP_TEXT_ROOT           Path to the Ishiko/Text installation
#      ISHIKO_CPP_CONFIGURATION_ROOT  Path to the Ishiko Configuration installation
#      ISHIKO_CPP_FILESYSTEM_ROOT     Path to the Ishiko FileSystem installation
#      ISHIKO_CPP_TYPES_ROOT          Path to the Ishiko Types installation
#      ISHIKO_CPP_DIFF_ROOT           Path to the Ishiko Diff installation
#      ISHIKO_CPP_PROCESS_ROOT        Path to the Ishiko Process installation
#      ISHIKO_CPP_PUGIXML_ROOT        Path to the pugixml installation
#      ISHIKO_CPP_XML_ROOT            Path to the Ishiko XML installation
#      ISHIKO_CPP_TESTFRAMEWORK_ROOT  Path to the Ishiko TestFramework installation
#      ISHIKO_CPP_TESTS_ROOT          Path to the Ishiko Tests installation

# Use "make RANLIB=''" for platforms without ranlib.
RANLIB ?= ranlib

CC := cc
CXX := c++

# The directory for the build files, may be overridden on make command line.
builddir = .

ifneq ($(builddir),.)
_builddir := $(if $(findstring $(abspath $(builddir)),$(builddir)),,../../)$(builddir)/../gnumake/
_builddir_error := $(shell mkdir -p $(_builddir) 2>&1)
$(if $(_builddir_error),$(error Failed to create build directory: $(_builddir_error)))
endif

# ------------
# Configurable settings:
# 

# Path to the Ishiko BasePlatform installation
ISHIKO_CPP_BASEPLATFORM_ROOT ?= $(ISHIKO_CPP)/base-platform
# Path to the Ishiko Errors installation
ISHIKO_CPP_ERRORS_ROOT ?= $(ISHIKO_CPP)/errors
# Path to the Boost installation
ISHIKO_CPP_BOOST_ROOT ?= $(ISHIKO_CPP_THIRD_PARTY_BOOST)
# Path to the Ishiko/Text installation
ISHIKO_CPP_TEXT_ROOT ?= $(ISHIKO_CPP)/text
# Path to the Ishiko Configuration installation
ISHIKO_CPP_CONFIGURATION_ROOT ?= $(ISHIKO_CPP)/configuration
# Path to the Ishiko FileSystem installation
ISHIKO_CPP_FILESYSTEM_ROOT ?= $(ISHIKO_CPP)/filesystem
# Path to the Ishiko Types installation
ISHIKO_CPP_TYPES_ROOT ?= $(ISHIKO_CPP)/types
# Path to the Ishiko Diff installation
ISHIKO_CPP_DIFF_ROOT ?= $(ISHIKO_CPP)/diff
# Path to the Ishiko Process installation
ISHIKO_CPP_PROCESS_ROOT ?= $(ISHIKO_CPP)/process
# Path to the pugixml installation
ISHIKO_CPP_PUGIXML_ROOT ?= $(ISHIKO_CPP_THIRD_PARTY_PUGIXML)
# Path to the Ishiko XML installation
ISHIKO_CPP_XML_ROOT ?= $(ISHIKO_CPP)/xml
# Path to the Ishiko TestFramework installation
ISHIKO_CPP_TESTFRAMEWORK_ROOT ?= $(ISHIKO_CPP)/test-framework
# Path to the Ishiko Tests installation
ISHIKO_CPP_TESTS_ROOT ?= $(ISHIKO_CPP)/test-framework

# ------------

all: $(_builddir)CodeSmithyGitHubWebhookServerTests

$(_builddir)CodeSmithyGitHubWebhookServerTests: $(_builddir)CodeSmithyGitHubWebhookServerTests_main.o
	$(CXX) -o $@ $(LDFLAGS) $(_builddir)CodeSmithyGitHubWebhookServerTests_main.o -L$(ISHIKO_CPP_ERRORS_ROOT)/lib -L$(ISHIKO_CPP_BOOST_ROOT)/lib -L$(ISHIKO_CPP_TEXT_ROOT)/lib -L$(ISHIKO_CPP_CONFIGURATION_ROOT)/lib -L$(ISHIKO_CPP_FILESYSTEM_ROOT)/lib -L$(ISHIKO_CPP_TYPES_ROOT)/lib -L$(ISHIKO_CPP_DIFF_ROOT)/lib -L$(ISHIKO_CPP_XML_ROOT)/lib -L$(ISHIKO_CPP_PROCESS_ROOT)/lib -L$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/lib -L$(ISHIKO_CPP_TESTS_ROOT)/lib -lIshikoTestFramework -lIshikoTestFrameworkCore -lIshikoConfiguration -lIshikoXML -lIshikoFileSystem -lIshikoProcess -lIshikoText -lIshikoErrors -lboost_filesystem -pthread

$(_builddir)CodeSmithyGitHubWebhookServerTests_main.o: ../../src/main.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(ISHIKO_CPP_ERRORS_ROOT)/include -I$(ISHIKO_CPP_BASEPLATFORM_ROOT)/include -I$(ISHIKO_CPP_BOOST_ROOT)/include -I$(ISHIKO_CPP_TEXT_ROOT)/include -I$(ISHIKO_CPP_CONFIGURATION_ROOT)/include -I$(ISHIKO_CPP_FILESYSTEM_ROOT)/include -I$(ISHIKO_CPP_TYPES_ROOT)/include -I$(ISHIKO_CPP_DIFF_ROOT)/include -I$(ISHIKO_CPP_PUGIXML_ROOT)/src -I$(ISHIKO_CPP_XML_ROOT)/include -I$(ISHIKO_CPP_PROCESS_ROOT)/include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/include -I$(ISHIKO_CPP_TESTS_ROOT)/include -std=c++11 ../../src/main.cpp

clean:
	rm -f $(_builddir)*.o
	rm -f $(_builddir)*.d
	rm -f $(_builddir)CodeSmithyGitHubWebhookServerTests

.PHONY: all clean

# Dependencies tracking:
-include $(_builddir)*.d
