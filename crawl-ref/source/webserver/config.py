import logging
try:
    from collections import OrderedDict
except ImportError:
    from ordereddict import OrderedDict

dgl_mode = True

bind_nonsecure = True # Set to false to only use SSL
bind_address = ""
bind_port = 8080
# Or listen on multiple address/port pairs (overriding the above) with:
# bind_pairs = (
#     ("127.0.0.1", 8080),
#     ("localhost", 8082),
#     ("", 8180), # All addresses
# )

logging_config = {
    "filename": "./webserver/run/webtiles.log",
    "level": logging.INFO,
    "format": "%(asctime)s %(levelname)s: %(message)s"
}

password_db = "./webserver/passwd.db3"

static_path = "./webserver/static"
template_path = "./webserver/templates/"

# Path for server-side unix sockets (to be used to communicate with crawl)
server_socket_path = None # Uses global temp dir

# Server name, so far only used in the ttyrec metadata
server_id = "GnollCrawl.tk"

# Disable caching of game data files
game_data_no_cache = True

# Watch socket dirs for games not started by the server
watch_socket_dirs = False

# Game configs
# %n in paths and urls is replaced by the current username
# morgue_url is for a publicly available URL to access morgue_path
games = OrderedDict([
    ("dcss-gnollcrawl", dict(
        name = "GnollCrawl",
        crawl_binary = "./crawl",
        rcfile_path = "/home/crawl/rcs/gnollcrawl/%n",
        macro_path = "/home/crawl/rcs/gnollcrawl/%n",
        morgue_path = "/home/crawl/rcs/gnollcrawl/%n/morgues",
        inprogress_path = "/home/crawl/inprogress/gnollcrawl/%n/running",
        ttyrec_path = "/home/crawl/rcs/gnollcrawl/%n/ttyrecs",
        socket_path = "/home/crawl/rcs/gnollcrawl/%n",
        client_path = "./webserver/game_data/",
        morgue_url = "gnollcrawl.tk/gnollcrawl/%n/morgues/",
        send_json_options = True)),
    ("dcss-yiufcrawl", dict(
        name = "YiufCrawl",
        crawl_binary = "/home/crawl/games/yiufcrawl/crawl-ref/source/yiufcrawl",
        rcfile_path = "/home/crawl/rcs/yiufcrawl/%n",
        macro_path = "/home/crawl/rcs/yiufcrawl/%n",
        morgue_path = "/home/crawl/rcs/yiufcrawl/%n/morgues",
        inprogress_path = "/home/crawl/inprogress/yiufcrawl/%n/running",
        ttyrec_path = "/home/crawl/rcs/yiufcrawl/%n/ttyrecs",
        socket_path = "/home/crawl/rcs/yiufcrawl/%n",
        client_path = "/home/crawl/games/yiufcrawl/crawl-ref/source/webserver/game_data/",
        morgue_url = "gnollcrawl.tk/yiufcrawl/%n/morgues/",
        send_json_options = True)),
    ("dcss-hellcrawl", dict(
        name = "HellCrawl",
        crawl_binary = "/home/crawl/games/hellcrawl/crawl-ref/source/crawl",
        rcfile_path = "/home/crawl/rcs/hellcrawl/%n",
        macro_path = "/home/crawl/rcs/hellcrawl/%n",
        morgue_path = "/home/crawl/rcs/hellcrawl/%n/morgues",
        inprogress_path = "/home/crawl/inprogress/hellcrawl/%n/running",
        ttyrec_path = "/home/crawl/rcs/hellcrawl/%n/ttyrecs",
        socket_path = "/home/crawl/rcs/hellcrawl/%n",
        client_path = "/home/crawl/games/hellcrawl/crawl-ref/source/webserver/game_data/",
        morgue_url = "gnollcrawl.tk/hellcrawl/%n/morgues/",
        send_json_options = True)),
    ("dcssca", dict(
        name = "Circus Animals",
        crawl_binary = "/home/crawl/games/dcssca/crawl-ref/source/crawl",
        rcfile_path = "/home/crawl/rcs/dcssca/%n",
        macro_path = "/home/crawl/rcs/dcssca/%n",
        morgue_path = "/home/crawl/rcs/dcssca/%n/morgues",
        inprogress_path = "/home/crawl/inprogress/dcssca/%n/running",
        ttyrec_path = "/home/crawl/rcs/dcssca/%n/ttyrecs",
        socket_path = "/home/crawl/rcs/dcssca/%n",
        client_path = "/home/crawl/games/dcssca/crawl-ref/source/webserver/game_data/",
        morgue_url = "gnollcrawl.tk/dcssca/%n/morgues/",
        send_json_options = True)),
    ("dcss-oofcrawl", dict(
        name = "OOFCrawl",
        crawl_binary = "/home/crawl/games/oofcrawl/crawl-ref/source/crawl",
        rcfile_path = "/home/crawl/rcs/oofcrawl/%n",
        macro_path = "/home/crawl/rcs/oofcrawl/%n",
        morgue_path = "/home/crawl/rcs/oofcrawl/%n/morgues",
        inprogress_path = "/home/crawl/inprogress/oofcrawl/%n/running",
        ttyrec_path = "/home/crawl/rcs/oofcrawl/%n/ttyrecs",
        socket_path = "/home/crawl/rcs/oofcrawl/%n",
        client_path = "/home/crawl/games/oofcrawl/crawl-ref/source/webserver/game_data/",
        morgue_url = "gnollcrawl.tk/oofcrawl/%n/morgues/",
        send_json_options = True)),
    ("dcss-lichcrawl", dict(
        name = "LichCrawl",
        crawl_binary = "/home/crawl/games/lichcrawl/crawl-ref/source/crawl",
        rcfile_path = "/home/crawl/rcs/lichcrawl/%n",
        macro_path = "/home/crawl/rcs/lichcrawl/%n",
        morgue_path = "/home/crawl/rcs/lichcrawl/%n/morgues",
        inprogress_path = "/home/crawl/inprogress/lichcrawl/%n/running",
        ttyrec_path = "/home/crawl/rcs/lichcrawl/%n/ttyrecs",
        socket_path = "/home/crawl/rcs/lichcrawl/%n",
        client_path = "/home/crawl/games/lichcrawl/crawl-ref/source/webserver/game_data/",
        morgue_url = "gnollcrawl.tk/lichcrawl/%n/morgues/",
        send_json_options = True)),
    ("dcss-boggartcrawl", dict(
        name = "BoggartCrawl",
        crawl_binary = "/home/crawl/games/boggartcrawl/crawl-ref/source/crawl",
        rcfile_path = "/home/crawl/rcs/boggartcrawl/%n",
        macro_path = "/home/crawl/rcs/boggartcrawl/%n",
        morgue_path = "/home/crawl/rcs/boggartcrawl/%n/morgues",
        inprogress_path = "/home/crawl/inprogress/boggartcrawl/%n/running",
        ttyrec_path = "/home/crawl/rcs/boggartcrawl/%n/ttyrecs",
        socket_path = "/home/crawl/rcs/boggartcrawl/%n",
        client_path = "/home/crawl/games/boggartcrawl/crawl-ref/source/webserver/game_data/",
        morgue_url = "gnollcrawl.tk/boggartcrawl/%n/morgues/",
        send_json_options = True)),
#    ("dcss-crawllight", dict(
#        name = "CrawlLight",
#        crawl_binary = "/home/crawl/games/crawllight/crawl-ref/source/crawl",
#        rcfile_path = "/home/crawl/rcs/crawllight/%n",
#        macro_path = "/home/crawl/rcs/crawllight/%n",
#        morgue_path = "/home/crawl/rcs/crawllight/%n/morgues",
#        inprogress_path = "/home/crawl/inprogress/crawllight/%n/running",
#        ttyrec_path = "/home/crawl/rcs/crawllight/%n/ttyrecs",
#        socket_path = "/home/crawl/rcs/crawllight/%n",
#        client_path = "/home/crawl/games/hellcrawl/crawl-ref/source/webserver/game_data/",
#        morgue_url = "gnollcrawl.tk/crawllight/%n/morgues/",
#        send_json_options = True)),
#    ("tut-web-trunk", dict(
#        name = "Tutorial trunk",
#        crawl_binary = "./crawl",
#        rcfile_path = "./rcs/",
#        macro_path = "./rcs/",
#        morgue_path = "./rcs/%n",
#        inprogress_path = "./rcs/running",
#        ttyrec_path = "./rcs/ttyrecs/%n",
#        socket_path = "./rcs",
#        client_path = "./webserver/game_data/",
#        morgue_url = None,
#        send_json_options = True,
#        options = ["-tutorial"])),
])

dgl_status_file = "/home/crawl/status/status"

# Set to None not to read milestones
milestone_file = "./milestones"

status_file_update_rate = 5

recording_term_size = (80, 24)

max_connections = 100

# Script to initialize a user, e.g. make sure the paths
# and the rc file exist. This is not done by the server
# at the moment.
init_player_program = "./util/webtiles-init-player.sh"

ssl_options = None # No SSL
#ssl_options = {
#    "certfile": "./webserver/localhost.crt",
#    "keyfile": "./webserver/localhost.key"
#}
ssl_address = ""
ssl_port = 8081
# Or listen on multiple address/port pairs (overriding the above) with:
# ssl_bind_pairs = (
#     ("127.0.0.1", 8081),
#     ("localhost", 8083),
# )

connection_timeout = 600
max_idle_time = 5 * 60 * 60

# Seconds until stale HTTP connections are closed
# This needs a patch currently not in mainline tornado.
http_connection_timeout = None

kill_timeout = 10 # Seconds until crawl is killed after HUP is sent

nick_regex = r"^[a-zA-Z0-9]{3,20}$"
max_passwd_length = 20

# crypt() algorithm, e.g. "1" for MD5 or "6" for SHA-512; see crypt(3). If
# false, use traditional DES (but then only the first eight characters of the
# password are significant). If set to "broken", use traditional DES with
# the password itself as the salt; this is necessary for compatibility with
# dgamelaunch, but should be avoided if possible because it leaks the first
# two characters of the password's plaintext.
crypt_algorithm = "broken"

# The length of the salt string to use. If crypt_algorithm is false, this
# setting is ignored and the salt is two characters.
crypt_salt_length = 16

login_token_lifetime = 7 # Days

uid = None  # If this is not None, the server will setuid to that (numeric) id
gid = None  # after binding its sockets.

umask = None # e.g. 0077

chroot = None

pidfile = None
daemon = False # If true, the server will detach from the session after startup

# Set to a URL with %s where lowercased player name should go in order to
# hyperlink WebTiles spectator names to their player pages.
# For example: "http://crawl.akrasiac.org/scoring/players/%s.html"
# Set to None to disable player page hyperlinks
player_url = None

# Only for development:
# Disable caching of static files which are not part of game data.
no_cache = False
# Automatically log in all users with the username given here.
autologin = None
