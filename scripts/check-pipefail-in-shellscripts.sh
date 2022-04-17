#!/usr/bin/env bash

set -euo pipefail

SH_SCRIPTS=$(find . -name '*.sh')
EXIT_STATUS=0

for script in $SH_SCRIPTS; do
    grep 'set -euo pipefail' "$script" > /dev/null 2>&1 && continue

    EXIT_STATUS=1
    echo "Missing 'set -euo pipefail' for ${script}"
done

for script in $SH_SCRIPTS; do
    grep '#!/usr/bin/env bash' "$script" > /dev/null 2>&1 && continue

    EXIT_STATUS=1
    echo "Missing '#!/usr/bin/env bash' for ${script}"
done

exit $EXIT_STATUS
