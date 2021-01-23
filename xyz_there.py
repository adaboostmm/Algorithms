# Return True if the given string contains an appearance of "xyz" where the xyz is not directly
# preceeded by a period (.). So "xxyz" counts but "x.xyz" does not.
#
#
# xyz_there('abcxyz') → True
# xyz_there('abc.xyz') → False
# xyz_there('xyz.abc') → True

def xyz_there(str):
  for i in range(len(str)):
    if str[i] != '.' and str[i+1:i+4] == 'xyz':
      return True
  if str[0:3] == 'xyz':
    return True
  return False

# Solution-2 one liner

def xyz_there_sol2(str):
    return str.count("xyz") > str.count(".xyz")

if xyz_there('abcxyz') == True:
    print("OK")
if xyz_there('abc.xyz') == False:
    print("OK")
if xyz_there('xyz.abc') == True:
    print("OK")
if xyz_there('abcxy') == False:
    print("OK")
if xyz_there('xyz') == True:
    print("OK")
if xyz_there('xy') == False:
    print("OK")
if xyz_there('x') == False:
    print("OK")
if xyz_there('') == False:
    print("OK")
if xyz_there('abc.xyzxyz') == True:
    print("OK")
if xyz_there('abc.xxyz') == True:
    print("OK")
if xyz_there('.xyz') == False:
    print("OK")
if xyz_there('12.xyz') == False:
    print("OK")
if xyz_there('12xyz') == True:
    print("OK")
if xyz_there('1.xyz.xyz2.xyz') == False:
    print("OK")
