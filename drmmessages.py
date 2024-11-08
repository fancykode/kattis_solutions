drm_msg = input().strip()

drm_msg1 = drm_msg[0 : len(drm_msg) // 2]
drm_msg2 = drm_msg[len(drm_msg) // 2 :]

rot_val1 = 0
for ch in drm_msg1:
    rot_val1 += ord(ch) - ord("A")

rot_val2 = 0
for ch in drm_msg2:
    rot_val2 += ord(ch) - ord("A")

tres1 = ""
tres2 = ""
for i in range(len(drm_msg1)):
    tres1 += chr(((ord(drm_msg1[i]) - ord("A") + rot_val1) % 26) + ord("A"))
    tres2 += chr(((ord(drm_msg2[i]) - ord("A") + rot_val2) % 26) + ord("A"))

res = ""
for i in range(len(tres1)):
    res += chr(
        ((ord(tres1[i]) - ord("A") + (ord(tres2[i]) - ord("A"))) % 26) + ord("A")
    )
print(res)
