A=[
'ちちちちちちちちちちちちちちち',
'ちつつつつつつつつつつつつつち',
'ちつちちちちちちちちちちちつち',
'ちつちつつつつつつつつつちつち',
'ちつちつちちちちちちちつちつち',
'ちつちつちつつつつつちつちつち',
'ちつちつちつちちちつちつちつち',
'ちつちつちつちつちつちつちつち',
'ちつちつちつちちちつちつちつち',
'ちつちつちつつつつつちつちつち',
'ちつちつちちちちちちちつちつち',
'ちつちつつつつつつつつつちつち',
'ちつちちちちちちちちちちちつち',
'ちつつつつつつつつつつつつつち',
'ちちちちちちちちちちちちちちち',
]
r,c=map(int,input().split())

if A[r-1][c-1]=='ち':
    print('black')
else:
    print('white')