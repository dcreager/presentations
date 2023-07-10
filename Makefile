MAKEFLAGS += --no-print-directory

SUBDIRS = \
    2023-09-strange-loop-concatenative \
    2023-04-evcs \
    2022-06-craft-conf-languages \
    2022-05-ucsc-lsd-stack-graphs \
    2021-10-strange-loop-stack-graphs

default: all

$(SUBDIRS)::
	@$(MAKE) -C $@ $(MAKECMDGOALS)

all: $(SUBDIRS)

clean: $(SUBDIRS)
