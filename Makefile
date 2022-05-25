MAKEFLAGS += --no-print-directory

SUBDIRS = \
    2021-10-strange-loop-stack-graphs \
    2022-05-ucsc-lsd-stack-graphs \
    2022-06-craft-conf-languages

default: all

$(SUBDIRS)::
	@$(MAKE) -C $@ $(MAKECMDGOALS)

all: $(SUBDIRS)

clean: $(SUBDIRS)
