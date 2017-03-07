.DEFAULT: encrypt

encrypt:
	tar -c *.txt | gpg -co overthewire.gpg --recipient deniscostadsc@gmail.com
	rm *.txt

decrypt:
	gpg -d overthewire.gpg | tar -x
	rm overthewire.gpg
