import os
import datetime

files = ""

new_count = 0

with open("done.txt", "r") as f:
	lines = [line.replace("\n", "") for line in f.readlines()]
	old_count = len(lines)

for file in os.listdir("."):
	if os.path.isfile(file) and not file.endswith(".git"):
		files += file + "\n"
		new_count += 1

with open("done.txt", "w") as f:
	f.write(files)

msg = datetime.datetime.today().strftime("%m-%d-%Y") + " - "
new_file_count = new_count - old_count
msg += str(new_file_count)

if old_count:
	os.system("git add .")
	os.system("git status")
	os.system("git commit -m \"" + msg + "\"")
	os.system("git status")
	os.system("git push")