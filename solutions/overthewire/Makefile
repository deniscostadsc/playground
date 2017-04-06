.DEFAULT: encrypt

encrypt:
	tar \
		-c *.txt |\
	gpg \
		-co overthewire.gpg \
		--cipher-algo AES256 \
		--force-mdc \
		--armor \
		--sign
	rm *.txt

decrypt:
	gpg -d overthewire.gpg | tar -x
	rm overthewire.gpg
