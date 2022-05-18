NAME = $(notdir $(CURDIR))

presentation.pdf: presentation.tex
	@mkdir -p .build
	@echo "XELATEX     $(NAME)"
	@../script/silence-unless-error xelatex --halt-on-error --shell-escape --output-directory .build $<
	@echo "XELATEX     $(NAME)"
	@../script/silence-unless-error xelatex --halt-on-error --shell-escape --output-directory .build $<
	@cp .build/$@ $@

.PHONY: clean
clean:
	@rm -f presentation.pdf
	@rm -rf .build
