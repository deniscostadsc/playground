import sys
import urllib

protein_id = sys.stdin.read().replace("\n", "")

base_url = "http://www.uniprot.org/uniprot/%s.txt"

protein_description = urllib.urlopen(base_url % protein_id).read()

for line in protein_description.split("\n"):
    line = line[5:]
    if line.startswith("GO"):
        bio_process = line.split(";")[2]
        if bio_process.startswith(" P:"):
            print(bio_process[3:])
