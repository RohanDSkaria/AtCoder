import os, json, hashlib

dir_path = ".cph"
old_base = "/mnt/windows/Coding"
new_base = "/home/rohan-danny-skaria"

for file in os.listdir(dir_path):
    full = os.path.join(dir_path, file)
    with open(full, "r") as f:
        data = json.load(f)

    if "srcPath" not in data:
        continue

    old_path = data["srcPath"]
    new_path = (new_base + old_path[len(old_base):]
                if old_path.startswith(old_base) else old_path)
    data["srcPath"] = new_path

    # Write updated JSON
    with open(full, "w") as f:
        json.dump(data, f, separators=(",", ":"))

    # Compute new filename: .<basename>_<md5(new_path)>.prob
    basename = os.path.basename(new_path)
    new_hash = hashlib.md5(new_path.encode()).hexdigest()
    new_filename = f".{basename}_{new_hash}.prob"
    new_full = os.path.join(dir_path, new_filename)

    if full != new_full:
        os.rename(full, new_full)
        print(f"{file}  ->  {new_filename}")