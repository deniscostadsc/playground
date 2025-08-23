#!/usr/bin/env bash

set -euo pipefail

SH_SCRIPTS=$(find . -name '*.sh')
EXIT_STATUS=0

for script in ${SH_SCRIPTS}; do
    [[ ${script} == './.docker/wait-for-it.sh' ]] && continue
    grep '^set -euo pipefail' "${script}" > /dev/null 2>&1 && continue

    EXIT_STATUS=1
    echo "Missing 'set -euo pipefail' for ${script}"
done

for script in ${SH_SCRIPTS}; do
    grep '#!/usr/bin/env bash' "${script}" > /dev/null 2>&1 && continue

    EXIT_STATUS=1
    echo "Missing '#!/usr/bin/env bash' for ${script}"
done

for script in ${SH_SCRIPTS}; do
    shellcheck "${script}" || EXIT_STATUS=1
done

exit "${EXIT_STATUS}"
