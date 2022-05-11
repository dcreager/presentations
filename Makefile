MAKEFLAGS += --no-print-directory

SUBDIRS = \
    2021-10-strange-loop \
    2022-06-craft-conf

default: all

$(SUBDIRS)::
	@$(MAKE) -C $@ $(MAKECMDGOALS)

all: $(SUBDIRS)

clean: $(SUBDIRS)
