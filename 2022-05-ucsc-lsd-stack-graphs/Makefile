NAME = $(notdir $(CURDIR))

presentation.pdf: presentation.tex
	@mkdir -p .build
	@echo "LUALATEX    $(NAME)"
	@../script/silence-unless-error lualatex --halt-on-error --shell-escape --output-directory .build $<
	@echo "LUALATEX    $(NAME)"
	@../script/silence-unless-error lualatex --halt-on-error --shell-escape --output-directory .build $<
	@cp .build/$@ $@

.PHONY: clean
clean:
	@rm -f presentation.pdf
	@rm -rf .build
