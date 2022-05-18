NAME = presentation
$(NAME).pdf: $(NAME).tex
	@mkdir -p .build
	@echo "XELATEX     $@"
	@script/silence-unless-error xelatex --halt-on-error --shell-escape --output-directory .build $<
	@echo "XELATEX     $@"
	@script/silence-unless-error xelatex --halt-on-error --shell-escape --output-directory .build $<
	@cp .build/$@ $@

.PHONY: clean
clean:
	@rm $(NAME).pdf
	@rm -rf .build
