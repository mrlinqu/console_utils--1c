#!/bin/bash

bin_dir="$(dirname "$0")"

PG_HOST=""
PG_USER=""
PG_PWD=""
IB_USER=""
IB_PWD=""
CLUSTER="--cluster="
SERVER="--server="


. ${bin_dir}/.1c.secret

SITES_AVAILABLE=/etc/apache2/sites-available
SITES_ENABLED=/etc/apache2/sites-enabled
RAS=/opt/1C/v8.3/x86_64/ras
RAC=/opt/1C/v8.3/x86_64/rac
LST_FILE=/home/usr1cv8/.1cv8/1C/1cv8/reg_1541/1CV8Clst.lst


