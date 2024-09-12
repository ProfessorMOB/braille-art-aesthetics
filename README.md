# braille-art-dot-inverter

IMPORTANT: I really need to update this readme because I changed the code
so much it doesn't do what it says here, I mean it still does but it won't
work until I make it so myself, so if you want older functionality, change
to a different commit

## A tool to reverse braille unicode art black to/from white

So I was going about my day, and I realized, "HEY! WHY CAN'T I FREAKING HAVE INVERTED VERSIONS OF MY BRAILLE UNICODE ART???" Zero apologies, btw

And so I made this... thing. Basically, if you have ascii art that uses braille unicode characters, well, now you can invert them. Why would that be useful? One example would be lightmode/darkmode conversions. 
Take this example with Skibidi toilet

⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣤⣤⣤⣤⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⡿⡟⣯⡯⠿⣉⠭⠩⡍⠝⣛⢻⠿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣿⡿⣏⢳⡩⣕⣾⣓⣯⣿⣿⣿⡻⣿⣿⡾⢷⣻⡿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⡿⣝⢎⣧⣿⣿⣿⣿⡿⣿⣻⡉⠀⣝⠻⣿⣷⣿⣿⣯⢿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⡽⣎⣿⣿⢟⣽⡳⢯⣽⣳⣏⣿⠐⣾⣿⣛⣯⡿⣿⣿⣿⣻⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣷⣻⣽⣿⢇⠫⢞⣹⣇⠾⣷⢯⣿⢜⣿⡷⢣⡾⣽⠢⣘⢻⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⡷⣳⡻⣜⢠⣱⢾⣿⡿⡗⢯⣛⡾⢸⣿⡹⣳⣿⠦⣑⠠⣻⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣻⢧⡻⣄⣿⠟⠸⣿⡿⢻⠜⣣⣿⠸⣟⣣⡿⢻⣿⣿⡠⣿⣼⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⡿⣽⢎⣷⣭⠿⢶⢶⠶⡶⢾⣳⣿⡹⣘⢻⣾⣁⣈⣛⠋⢹⣿⣿⣿⣏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣬⣿⣿⣟⡷⣮⡳⡜⢦⠕⠲⡀⣿⢿⣷⣦⣴⡡⣮⣿⣽⣿⡦⣁⡜⣿⢿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⢺⣿⣿⣟⢾⣻⣗⣻⡟⢀⢊⡔⡐⠆⢢⢘⣻⣿⣿⣿⣿⡿⣛⢷⡡⢿⣯⣿⣿⠱⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⢧⣿⣼⣏⣿⣿⣾⣏⣿⣿⣿⣿⣷⣬⣯⣍⣳⣻⢛⢛⣳⣍⣝⣮⣽⣆⣹⣿⡏⢳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣏⢮⣹⣿⣾⣟⣿⣸⢿⣻⣿⣿⣿⢿⢿⢻⠛⢟⠻⡿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢯⣽⣿⢿⣯⢿⣯⢿⡷⠙⣿⣟⣾⢺⠚⡖⠖⢤⠧⠯⣿⣿⣿⢿⣿⣿⣯⡖⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⢯⣟⣾⣹⣗⣣⠈⠻⣿⣾⣶⣳⣶⣼⣤⣿⣿⠟⣡⣿⣿⣿⠧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣻⣞⣧⣟⣦⠍⡄⠴⢋⣩⣉⣩⣝⣻⡟⡡⢞⣷⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣽⣾⣾⡽⣞⠤⣈⠉⡉⠉⠉⢩⢙⡶⣥⢿⣿⣿⣏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣹⣿⣿⣿⣿⣟⣿⣯⣟⣦⢳⣐⠦⣑⣎⢶⣽⣾⣿⣿⣿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣇⣿⣞⣿⣿⣿⣿⣿⣿⣿⣿⣯⣿⣽⣾⣿⣿⣿⣿⣿⣿⣿⣿⡿⠈⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⡧⢿⣜⡾⣭⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠱⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⡠⠔⠒⠒⠒⠐⠈⠒⠐⠒⡾⣿⣿⣿⣏⣿⢯⣷⢣⡓⠜⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠘⢖⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠢⣄⠀
⠀⠀⠀⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⡜⠀⢹⣿⣿⣿⢼⡿⣯⠳⡌⡘⠤⣉⠙⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠈⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣
⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⡜⠀⠀⠀⠻⣿⣿⣾⢽⣿⣳⢡⠘⡰⠠⠁⠂⡇⢬⢉⢯⡻⣽⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡸
⠀⠀⠀⢉⡟⠚⠓⠚⠒⠒⠒⡺⠁⠀⠀⠀⠀⠈⣿⣟⡾⣿⢧⢢⠁⢆⠱⠀⠐⣏⠦⣉⠶⣹⣳⡿⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠈⣖⠒⠒⠒⠒⠒⠒⠒⠒⠒⢾⠁
⠀⠀⠀⡏⠉⠉⠉⠉⠉⠉⢹⠃⠀⠀⠀⠀⠀⠀⣿⣿⡳⣿⣯⠆⣁⠊⠤⠁⠀⣿⠰⡡⢏⡷⣽⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡉⠉⠉⠉⠉⠉⠉⠉⠉⠉⢳
⠀⣀⣀⡇⠀⠀⠀⠀⠀⠀⡎⠀⠀⠀⠀⠀⠀⠀⢸⣺⡷⣿⣷⠩⢄⡘⢄⠃⠀⢿⡱⢌⡳⡽⢾⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸
⢸⠤⣤⡇⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⢳⣿⣯⣓⠂⢌⢢⠡⠀⣹⢆⠣⣽⣹⢿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⢸
⢠⣀⣧⡇⠀⠀⠀⠀⠀⡎⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡯⣾⣿⢦⡉⢂⠦⡑⠠⢸⣋⠖⣱⢯⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⠀⠀⠀⠀⠀⠀⠀⠀⢸
⠈⠣⠼⡇⠀⠀⠀⠀⠀⠇⠀⠀⠀⠀⠀⠀⠀⠀⢸⡷⣿⡽⣿⡶⡑⢌⢲⡁⠆⣹⢮⠸⣭⣟⣾⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⢸ 
⠀⠀⠀⡇⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣟⣷⢿⣿⡷⣭⠌⣆⢣⠒⣸⢧⢛⡶⣯⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⢸
⠀⠀⠀⡇⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⢫⣿⡿⡜⡰⢊⡇⢒⢸⣯⢎⡷⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢇⠀⠀⠀⠀⠀⠀⠀⢸
⠀⠀⠀⡇⠀⠀⠀⠀⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⢯⣿⣿⡱⢡⢫⡜⢠⢻⣗⢮⡽⣷⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⢸
⠀⠀⠀⡇⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣯⣿⣷⣫⠕⡮⡜⢄⢺⡿⢬⣟⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⢸
⠀⠀⠀⡇⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⡗⣿⣟⡶⡙⢶⣙⠢⣩⣿⢣⣟⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡀⠀⠀⠀⠀⠀⠀⢸ 
⠀⠀⠀⡇⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣏⣿⣯⢷⡙⢮⣇⢃⠖⣿⢣⣟⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⢸ 
⠀⠀⠀⡇⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⢾⣿⢧⢏⡳⣞⠌⣚⢿⡹⣞⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠆⠀⠀⠀⠀⠀⠀⢸
⠀⠀⠀⡇⠀⠀⠀⠀⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⡿⣿⣛⠮⡵⣎⠣⢜⣻⢵⣻⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠃⠀⠀⠀⠀⠀⠀⢸
⠀⠀⠀⡇⠀⠀⠀⠀⢻⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠨⣿⣿⣟⣿⣽⢳⡹⣬⠃⡜⣺⢧⡿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⠀⠀⠀⠀⠀⠀⢸
⠀⠀⠀⡇⠀⠀⠀⠀⠈⢿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣯⣿⣞⡧⣝⡖⢣⠘⣽⡾⣽⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⠃⠀⠀⠀⠀⠀⠀⠀⣺
⠀⠀⠀⠹⢄⡀⠀⠀⠀⠈⠻⣿⣷⣦⣄⣀⠀⠀⠀⠀⣿⣿⣷⣿⣻⡜⣧⣛⠤⠑⡎⢿⣽⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣾⡿⠃⠀⠀⠀⠀⠀⠀⠀⢀⠇
⠀⠀⠀⠀⠀⠉⡲⠚⠉⠉⠉⠉⠉⢉⣩⣭⠭⠭⠭⠭⠽⣿⣿⣻⢷⣛⠶⣭⠂⠱⡘⡽⣾⡿⠭⠭⠭⠭⠭⠭⣍⣓⠒⠒⠒⠛⠛⠛⠿⠿⠤⠤⣄⣀⣀⣀⣤⠤⠖⠋⠀
⠀⠀⠀⠀⠀⡜⠀⠀⠀⠀⠀⠀⡴⢋⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⡿⣽⣻⢶⡁⢦⡱⣹⣿⣇⡀⠀⠀⠀⠀⠀⠀⢀⡉⣶⠀⠀⠀⠀⠀⠀⠀⠀⣸⠌⠙⡄⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢠⡇⠀⠀⠀⢀⠀⠀⠙⢦⣶⣶⣾⣿⡿⠿⠿⣿⣿⣷⣿⡿⣽⣯⡗⣬⢳⣯⣿⡟⠿⠿⣿⣿⣿⣷⣶⠶⠛⠁⠀⠀⠀⠀⠀⠀⠀⣼⠃⠀⢠⡇⠀⠀⠀⠀⠀
⠀⠀⠀⠀⡞⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠑⠒⠲⠦⠼⠿⠷⠿⠿⠿⠾⠷⠾⠻⠞⠛⠓⠒⠒⠊⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⢀⣠⠴⠋⠁⠀⠀⢰⠇⠀⠀⠀⠀⠀
⠀⠀⠀⠀⡧⠀⠈⠓⠲⠤⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⡠⠤⠒⠚⠉⠀⠀⠀⠀⠀⢀⢺⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣧⠡⠀⠀⠀⠀⠀⠀⠉⠉⠁⠒⠒⠒⠲⠤⠤⠤⠤⠤⠤⠤⠤⠤⠤⠤⠴⠂⠒⠒⠒⠒⠒⠂⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢂⢾⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣷⠈⡔⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⠤⡏⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢹⡘⢄⠈⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⡈⣼⠃⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠘⡇⡎⠐⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠁⠒⡟⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢻⡔⢣⢀⠂⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠢⢌⣳⠃⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠈⣷⠡⠆⡌⢀⠂⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠐⡄⢣⢮⠃⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠘⢯⡚⣄⠣⣈⠐⡈⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠠⠐⡀⢎⡰⣳⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠈⢻⣤⠓⡤⢒⠠⣁⠂⠌⡀⠄⡀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠄⡁⠂⢄⠱⣈⢶⡝⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣗⡘⢆⡱⢀⠎⡰⢐⢂⡐⠄⣈⠐⡀⢂⠀⠄⡀⢀⠀⡀⢀⠠⠀⠠⢀⠂⡈⠄⡁⢂⠅⠢⠑⡈⢆⠱⣼⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⡜⡄⠢⢉⠢⠑⠌⢂⠜⡐⠠⢃⠐⠂⠌⠐⢀⠂⠐⠀⠂⠀⠁⠂⠀⠐⠀⠐⠀⠂⠈⠄⠡⠐⡨⢱⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡄⢁⠂⠄⠡⠈⠀⠠⠀⠁⠀⠈⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢂⠱⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⢻⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢺⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⣯⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠢⢄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡤⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠒⠒⠀⠤⠤⠤⠤⠤⣀⣀⣀⣀⣀⣀⣀⣀⣀⡀⠤⠤⠄⠒⠒⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀

(hmmmm skibidi toilet in Ohio 🤤)

If you're on lightmode (like an unscrupulous complete sociopath), what you see above would look pretty normal (aside from it being a Skibidi Toilet). But if you're on darkmode, it will look absolutely horrid. Now, let's invert the dots using this tool. (Note, on github, there will be space between each new line so it won't look totally perfect, but once you execute the tool in the command line, it'll look better)

Now, let's invert the dots 😈

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠛⠛⠛⠛⠛⠛⠛⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⢀⢠⠐⢐⣀⠶⣒⣖⢲⣢⠤⡄⣀⠀⠀⠀⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠀⠀⢀⠰⡌⢖⠪⠁⠬⠐⠀⠀⠀⢄⠀⠀⢁⡈⠄⢀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⢀⠢⡱⠘⠀⠀⠀⠀⢀⠀⠄⢶⣿⠢⣄⠀⠈⠀⠀⠐⡀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⢂⠱⠀⠀⡠⠂⢌⡐⠂⠌⠰⠀⣯⠁⠀⠤⠐⢀⠀⠀⠀⠄⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠈⠄⠂⠀⡸⣔⡡⠆⠸⣁⠈⡐⠀⡣⠀⢈⡜⢁⠂⣝⠧⡄⠀⠀⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⢈⠌⢄⠣⡟⠎⡁⠀⢀⢨⡐⠤⢁⡇⠀⢆⠌⠀⣙⠮⣟⠄⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠄⡘⢄⠻⠀⣠⣇⠀⢀⡄⣣⠜⠀⣇⠠⠜⢀⡄⠀⠀⢟⠀⠃⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⢀⠂⡱⠈⠒⣀⡉⡉⣉⢉⡁⠌⠀⢆⠧⡄⠁⠾⠷⠤⣴⡆⠀⠀⠀⠰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠓⠀⠀⠠⢈⠑⢌⢣⡙⣪⣍⢿⠀⡀⠈⠙⠋⢞⠑⠀⠂⠀⢙⠾⢣⠀⡀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⡅⠀⠀⠠⡁⠄⠨⠄⢠⡿⡵⢫⢯⣹⡝⡧⠄⠀⠀⠀⠀⢀⠤⡈⢞⡀⠐⠀⠀⣎⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⡘⠀⠃⠰⠀⠀⠁⠰⠀⠀⠀⠀⠈⠓⠐⠲⠌⠄⡤⡤⠌⠲⠢⠑⠂⠹⠆⠀⢰⡌⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠰⡑⠆⠀⠁⠠⠀⠇⡀⠄⠀⠀⠀⡀⡀⡄⣤⡠⣄⢀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣱⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡐⠂⠀⡀⠐⡀⠐⡀⢈⣦⠀⠠⠁⡅⣥⢩⣩⡛⣘⣐⠀⠀⠀⡀⠀⠀⠐⢩⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⡐⠠⠁⠆⠨⠜⣷⣄⠀⠁⠉⠌⠉⠃⠛⠀⠀⣠⠞⠀⠀⠀⣘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠄⠡⠘⠠⠙⣲⢻⣋⡴⠖⠶⠖⠢⠄⢠⢞⡡⠈⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠂⠁⠁⢂⠡⣛⠷⣶⢶⣶⣶⡖⡦⢉⠚⡀⠀⠀⠰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠆⠀⠀⠀⠀⠠⠀⠐⠠⠙⡌⠯⣙⠮⠱⡉⠂⠁⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠸⠀⠡⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠂⠁⠀⠀⠀⠀⠀⠀⠀⠀⢀⣷⡙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⢘⡀⠣⢁⠒⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣎⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⢟⣫⣭⣭⣭⣯⣷⣭⣯⣭⢁⠀⠀⠀⠰⠀⡐⠈⡜⢬⣣⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣧⡩⣭⣭⣭⣭⣭⣭⣭⣭⣭⣭⣭⣝⠻⣿
⣿⣿⣿⢡⣿⣿⣿⣿⣿⣿⣿⣿⣿⢣⣿⡆⠀⠀⠀⡃⢀⠐⣌⢳⢧⣛⠶⣦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣷⡙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡜
⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⢣⣿⣿⣿⣄⠀⠀⠁⡂⠀⠌⡞⣧⢏⣟⣾⣽⢸⡓⡶⡐⢄⠂⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⡙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢇
⣿⣿⣿⡶⢠⣥⣬⣥⣭⣭⣭⢅⣾⣿⣿⣿⣿⣷⠀⠠⢁⠀⡘⡝⣾⡹⣎⣿⣯⠰⣙⠶⣉⠆⠌⢀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣷⠩⣭⣭⣭⣭⣭⣭⣭⣭⣭⡁⣾
⣿⣿⣿⢰⣶⣶⣶⣶⣶⣶⡆⣼⣿⣿⣿⣿⣿⣿⠀⠀⢌⠀⠐⣹⠾⣵⣛⣾⣿⠀⣏⢞⡰⢈⠂⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⢶⣶⣶⣶⣶⣶⣶⣶⣶⣶⡌
⣿⠿⠿⢸⣿⣿⣿⣿⣿⣿⢱⣿⣿⣿⣿⣿⣿⣿⡇⠅⢈⠀⠈⣖⡻⢧⡻⣼⣿⡀⢎⡳⢌⢂⡁⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡜⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇
⡇⣛⠛⢸⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⡌⠀⠐⠬⣽⡳⡝⣞⣿⠆⡹⣜⠂⠆⡀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⢻⣿⣿⣿⣿⣿⣿⣿⣿⡇
⡟⠿⠘⢸⣿⣿⣿⣿⣿⢱⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⢐⠁⠀⡙⢶⡽⣙⢮⣟⡇⠴⣩⠎⡐⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡜⣿⣿⣿⣿⣿⣿⣿⣿⡇
⣷⣜⣃⢸⣿⣿⣿⣿⣿⣸⣿⣿⣿⣿⣿⣿⣿⣿⡇⢈⠀⢂⠀⢉⢮⡳⡍⢾⣹⠆⡑⣇⠒⠠⠁⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⡇
⣿⣿⣿⢸⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠠⠈⡀⠀⢈⠒⣳⠹⡜⣭⠇⡘⡤⢉⠐⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⡇
⣿⣿⣿⢸⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⡔⠀⢀⢣⢏⡵⢸⡭⡇⠐⡱⢈⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡸⣿⣿⣿⣿⣿⣿⣿⡇
⣿⣿⣿⢸⣿⣿⣿⣿⢡⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⡐⠀⠀⢎⡞⡔⢣⡟⡄⠨⡑⢂⠈⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⡇
⣿⣿⣿⢸⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠐⠀⠈⠔⣪⢑⢣⡻⡅⢀⡓⠠⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⡇
⣿⣿⣿⢸⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⢨⠀⠠⢉⢦⡉⠦⣝⠖⠀⡜⠠⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⢿⣿⣿⣿⣿⣿⣿⡇
⣿⣿⣿⢸⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠰⠀⠐⡈⢦⡑⠸⡼⣩⠀⡜⠠⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣿⣿⡇
⣿⣿⣿⢸⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⡁⠀⡘⡰⢌⠡⣳⠥⡀⢆⠡⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣹⣿⣿⣿⣿⣿⣿⡇
⣿⣿⣿⢸⣿⣿⣿⣿⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⢀⠀⠤⣑⢊⠱⣜⡣⠄⡊⠄⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣼⣿⣿⣿⣿⣿⣿⡇
⣿⣿⣿⢸⣿⣿⣿⣿⡄⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣗⠀⠀⠠⠀⠂⡌⢆⠓⣼⢣⠅⡘⢀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢡⣿⣿⣿⣿⣿⣿⣿⡇
⣿⣿⣿⢸⣿⣿⣿⣿⣷⡀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠐⠀⠡⢘⠢⢩⡜⣧⠂⢁⠂⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠁⣼⣿⣿⣿⣿⣿⣿⣿⠅
⣿⣿⣿⣆⡻⢿⣿⣿⣿⣷⣄⠀⠈⠙⠻⠿⣿⣿⣿⣿⠀⠀⠈⠀⠄⢣⠘⠤⣛⣮⢱⡀⠂⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠁⢀⣼⣿⣿⣿⣿⣿⣿⣿⡿⣸
⣿⣿⣿⣿⣿⣶⢍⣥⣶⣶⣶⣶⣶⡶⠖⠒⣒⣒⣒⣒⣂⠀⠀⠄⡈⠤⣉⠒⣽⣎⢧⢂⠁⢀⣒⣒⣒⣒⣒⣒⠲⠬⣭⣭⣭⣤⣤⣤⣀⣀⣛⣛⠻⠿⠿⠿⠛⣛⣩⣴⣿
⣿⣿⣿⣿⣿⢣⣿⣿⣿⣿⣿⣿⢋⡴⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⢀⠂⠄⡉⢾⡙⢎⠆⠀⠸⢿⣿⣿⣿⣿⣿⣿⡿⢶⠉⣿⣿⣿⣿⣿⣿⣿⣿⠇⣳⣦⢻⣿⣿⣿⣿⣿
⣿⣿⣿⣿⡟⢸⣿⣿⣿⡿⣿⣿⣦⡙⠉⠉⠁⠀⢀⣀⣀⠀⠀⠈⠀⢀⠂⠐⢨⠓⡌⠐⠀⢠⣀⣀⠀⠀⠀⠈⠉⣉⣤⣾⣿⣿⣿⣿⣿⣿⣿⠃⣼⣿⡟⢸⣿⣿⣿⣿⣿
⣿⣿⣿⣿⢡⣌⠻⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣮⣭⣍⣙⣃⣀⣈⣀⣀⣀⣁⣈⣁⣄⣡⣤⣬⣭⣭⣵⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⡿⠟⣋⣴⣾⣿⣿⡏⣸⣿⣿⣿⣿⣿
⣿⣿⣿⣿⢘⣿⣷⣬⣍⣛⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⢟⣛⣭⣥⣶⣿⣿⣿⣿⣿⡿⡅⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⠘⣞⣿⣿⣿⣿⣿⣿⣶⣶⣾⣭⣭⣭⣍⣛⣛⣛⣛⣛⣛⣛⣛⣛⣛⣛⣋⣽⣭⣭⣭⣭⣭⣽⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡽⡁⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⠈⣷⢫⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⣛⢰⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⡆⢧⡻⣷⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⢷⠃⣼⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣧⢸⢱⣯⡟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣾⣭⢠⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⡄⢫⡜⡿⣽⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣝⡳⠌⣼⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣷⠈⣞⣹⢳⡿⣽⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣯⢻⡜⡑⣼⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣧⡐⢥⠻⣜⠷⣯⢷⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣟⣯⢿⡱⢏⠌⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣷⡄⠛⣬⢛⡭⣟⠾⣽⣳⢿⣻⢿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣻⢾⣽⡻⣎⠷⡉⢢⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠨⢧⡹⢎⡿⣱⢏⡯⡽⢯⣻⠷⣯⢿⡽⣿⣻⢿⡿⣿⢿⡿⣟⣿⣟⡿⣽⢷⣻⢾⡽⣺⣝⣮⢷⡹⣎⠃⣱⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⢣⢻⣝⡶⣝⣮⣳⡽⣣⢯⣟⡼⣯⣽⣳⣯⡿⣽⣯⣿⣽⣿⣾⣽⣿⣯⣿⣯⣿⣽⣷⣻⣞⣯⢗⡎⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⢻⡾⣽⣻⣞⣷⣿⣟⣿⣾⣿⣷⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡽⣎⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⡄⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡅⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⠐⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⢨⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢣⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣝⡻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢛⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣭⣭⣿⣛⣛⣛⣛⣛⠿⠿⠿⠿⠿⠿⠿⠿⠿⢿⣛⣛⣻⣭⣭⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

(Skibidi dom dom dom yes yes)

If you're on lightmode, what you see above will look horrid to you, and if it does, go home. If you're on darkmode, then we've essentially fixed this problem. Hooray!

Note: you can do the same to convert braille art that looks better in dark mode to light mode. 

Soooo, yeah. That's what this tool is. I couldn't find an equivalent anywhere, and I realized, hey I know how to code, so I made this. Also mind my slight hostility to light mode users. 

# TODO
Allow redirection of the output to a file

