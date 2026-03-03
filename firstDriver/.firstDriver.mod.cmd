savedcmd_firstDriver.mod := printf '%s\n'   firstDriver.o | awk '!x[$$0]++ { print("./"$$0) }' > firstDriver.mod
