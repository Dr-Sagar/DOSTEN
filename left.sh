from sudo import run_as_sudo

# run `whoami` from user 'user'
cmd = "whoami"
sudo_user = "user"

run_as_sudo(sudo_user, cmd)

# optional shell, timeout (secs)
run_as_sudo(sudo_user, cmd, shell=True, timeout=20)