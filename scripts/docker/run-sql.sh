#!/usr/bin/env bash

set -euo pipefail

echo
echo "SQL"
echo

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    if [ "$(find $folder -name '*.sql' | wc -l)" -eq 3 ]; then
        echo "$folder" 
        cd "$folder" || exit 1

        psql -h database-server -d $POSTGRES_DB -U $POSTGRES_USER < schema.sql && \
        psql -h database-server -d $POSTGRES_DB -U $POSTGRES_USER < $(eval "echo ????.sql") > result-sql.txt && \
        psql -h database-server -d $POSTGRES_DB -U $POSTGRES_USER < drop-table.sql

        diff result-sql.txt out.txt

        cd - > /dev/null
    fi
done
