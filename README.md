# roblox-offsets
Welcome to my repo! This repo has offsets for many roblox versions. If you have a auto updater service you can happily rely on this since I am a very fast updater! **let me know if you want a version to be added**

you can also pick what version you want offsets for. click the versions tab on the github page, find the version you are using, and then use the offsets.

## How to Use?
heres how to use the offsets endpoint

```python
import requests

version = "enterurversionhere!" # replace it with the roblox client version your user is on
url = f"https://raw.githubusercontent.com/MoonArea3/roblox-offsets/refs/heads/main/offsets/{version}/offsets.json" # change it to hpp if you want to

offsets = requests.get(url).json() # get the offsets
print(offsets) # print to ensure they work
```

I will also post offset tutorials so people can learn how to use these offsets for good. I hope this helps people on their external!

If there are any problems or you want a version posted, please make a issue on this repo!

## New Features (v1.2!)

- Added MeshData Class
 - FaceStart
 - FaceEnd
 - VertexEnd
 - VertexStart

- Added MeshPart offsets
 - MeshId
 - Texture

**also fixed some bugs and wrong offsets**
ps: should i open roblox studio and learn to dump more offsets?

## Misc:
discord user: moonarea3 (discord.gg/skids)
