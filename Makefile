MAKEFLAGS += --no-print-directory

SUBDIRS = \
    2021-10-strange-loop

default: all

$(SUBDIRS)::
	@$(MAKE) -C $@ $(MAKECMDGOALS)

all: $(SUBDIRS)

clean: $(SUBDIRS)
