N = int(input())
K = int(input())
cubes = []
for _ in range(N):
    cubes.append(input())
string = input()
string = string[:K] 
hmap = {}

for idx, cube_faces in enumerate(cubes):
    for char in cube_faces:
        if char not in hmap:
            hmap[char]=[]
        hmap[char].append(idx)
        
def ser(used_cubes):
    used_cubes = sorted(list(used_cubes))
    a = ','.join(map(str,used_cubes))
    return a

c = {}
M = pow(10,9)+7
def num_ways(substring,used_cubes):
    if N-len(used_cubes)<len(substring):
        return 0
    if len(substring)==0:
        return 1
    if substring in c and ser(used_cubes) in c[substring]:
        return c[substring][ser(used_cubes)]
    first_char = substring[0]
    if first_char not in hmap:
        return 0
    first_char_options = [idx for idx in hmap[first_char] if idx not in used_cubes]
    if len(first_char_options) == 0:
        return 0
    
    ans = 0
    remainder_str = substring[1:]
    for cube_option in first_char_options:
        ans = (ans + num_ways(remainder_str, used_cubes|set([cube_option])))%M
    if substring not in c:
        c[substring] = {}
    c[substring][ser(used_cubes)] = ans
    return ans%M

print(num_ways(string, set()))