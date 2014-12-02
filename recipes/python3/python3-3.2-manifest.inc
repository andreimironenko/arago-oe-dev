
# WARNING: This file is AUTO GENERATED: Manual edits will be lost next time I regenerate the file.
# Generator: '../../contrib/python/generate-manifest-2.7.py' Version 20100908 (C) 2002-2010 Michael 'Mickey' Lauer <mlauer@vanille-media.de>
# Visit the Python for Embedded Systems Site => http://www.Vanille.de/projects/python.spy

 

PROVIDES+="python-codecs python-threading python-distutils python-doctest python-stringold python-curses python-ctypes python-pickle python-datetime python-core python-io python-compression python-re python-profile python-xmlrpc python-terminal python-dev python-email python-image python-tests python-core-dbg python-resource python-json python-difflib python-math python-syslog python-hotshot python-unixadmin python-textutils python-tkinter python-gdbm python-elementtree python-fcntl python-netclient python-pprint python-netserver python-compiler python-smtpd python-html python-readline python-subprocess python-pydoc python-logging python-mailbox python-xml python-mime python-sqlite3 python-sqlite3-tests python-unittest python-multiprocessing python-robotparser python-compile python-debugger python-pkgutil python-shell python-bsddb python-numbers python-mmap python-zlib python-db python-crypt python-idle python-lang python-audio "

PACKAGES="python-core-dbg python-codecs python-threading python-distutils python-doctest python-stringold python-curses python-ctypes python-pickle python-datetime python-core python-io python-compression python-re python-profile python-xmlrpc python-terminal python-dev python-email python-image python-tests python-resource python-json python-difflib python-math python-syslog python-hotshot python-unixadmin python-textutils python-tkinter python-gdbm python-elementtree python-fcntl python-netclient python-pprint python-netserver python-compiler python-smtpd python-html python-readline python-subprocess python-pydoc python-logging python-mailbox python-xml python-mime python-sqlite3 python-sqlite3-tests python-unittest python-multiprocessing python-robotparser python-compile python-debugger python-pkgutil python-shell python-bsddb python-numbers python-mmap python-zlib python-db python-crypt python-idle python-lang python-audio python-modules"

DESCRIPTION_python-codecs="Python Codecs, Encodings & i18n Support"
RDEPENDS_python-codecs="python-core python-lang"
FILES_python-codecs="${libdir}/python3.2/codecs.* ${libdir}/python3.2/encodings ${libdir}/python3.2/gettext.* ${libdir}/python3.2/locale.* ${libdir}/python3.2/lib-dynload/_locale.so ${libdir}/python3.2/lib-dynload/unicodedata.so ${libdir}/python3.2/stringprep.* ${libdir}/python3.2/xdrlib.* "

DESCRIPTION_python-threading="Python Threading & Synchronization Support"
RDEPENDS_python-threading="python-core python-lang"
FILES_python-threading="${libdir}/python3.2/_threading_local.* ${libdir}/python3.2/dummy_thread.* ${libdir}/python3.2/dummy_threading.* ${libdir}/python3.2/mutex.* ${libdir}/python3.2/threading.* ${libdir}/python3.2/Queue.* "

DESCRIPTION_python-distutils="Python Distribution Utilities"
RDEPENDS_python-distutils="python-core"
FILES_python-distutils="${libdir}/python3.2/config ${libdir}/python3.2/distutils "

DESCRIPTION_python-doctest="Python framework for running examples in docstrings."
RDEPENDS_python-doctest="python-core python-lang python-io python-re python-unittest python-debugger python-difflib"
FILES_python-doctest="${libdir}/python3.2/doctest.* "

DESCRIPTION_python-stringold="Python String APIs [deprecated]"
RDEPENDS_python-stringold="python-core python-re"
FILES_python-stringold="${libdir}/python3.2/lib-dynload/strop.so ${libdir}/python3.2/string.* "

DESCRIPTION_python-curses="Python Curses Support"
RDEPENDS_python-curses="python-core"
FILES_python-curses="${libdir}/python3.2/curses ${libdir}/python3.2/lib-dynload/_curses.so ${libdir}/python3.2/lib-dynload/_curses_panel.so "

DESCRIPTION_python-ctypes="Python C Types Support"
RDEPENDS_python-ctypes="python-core"
FILES_python-ctypes="${libdir}/python3.2/ctypes ${libdir}/python3.2/lib-dynload/_ctypes.so "

DESCRIPTION_python-pickle="Python Persistence Support"
RDEPENDS_python-pickle="python-core python-codecs python-io python-re"
FILES_python-pickle="${libdir}/python3.2/pickle.* ${libdir}/python3.2/shelve.* ${libdir}/python3.2/lib-dynload/cPickle.so "

DESCRIPTION_python-datetime="Python Calendar and Time support"
RDEPENDS_python-datetime="python-core python-codecs"
FILES_python-datetime="${libdir}/python3.2/_strptime.* ${libdir}/python3.2/calendar.* ${libdir}/python3.2/lib-dynload/datetime.so "

DESCRIPTION_python-core="Python Interpreter and core modules (needed!)"
RDEPENDS_python-core=""
FILES_python-core="${libdir}/python3.2/__future__.* ${libdir}/python3.2/_abcoll.* ${libdir}/python3.2/abc.* ${libdir}/python3.2/copy.* ${libdir}/python3.2/copy_reg.* ${libdir}/python3.2/ConfigParser.* ${libdir}/python3.2/genericpath.* ${libdir}/python3.2/getopt.* ${libdir}/python3.2/linecache.* ${libdir}/python3.2/new.* ${libdir}/python3.2/os.* ${libdir}/python3.2/posixpath.* ${libdir}/python3.2/struct.* ${libdir}/python3.2/warnings.* ${libdir}/python3.2/site.* ${libdir}/python3.2/stat.* ${libdir}/python3.2/UserDict.* ${libdir}/python3.2/UserList.* ${libdir}/python3.2/UserString.* ${libdir}/python3.2/lib-dynload/binascii.so ${libdir}/python3.2/lib-dynload/_struct.so ${libdir}/python3.2/lib-dynload/time.so ${libdir}/python3.2/lib-dynload/xreadlines.so ${libdir}/python3.2/types.* ${libdir}/python3.2/platform.* ${bindir}/python* "

DESCRIPTION_python-io="Python Low-Level I/O"
RDEPENDS_python-io="python-core python-math"
FILES_python-io="${libdir}/python3.2/lib-dynload/_socket.so ${libdir}/python3.2/lib-dynload/_ssl.so ${libdir}/python3.2/lib-dynload/select.so ${libdir}/python3.2/lib-dynload/termios.so ${libdir}/python3.2/lib-dynload/cStringIO.so ${libdir}/python3.2/pipes.* ${libdir}/python3.2/socket.* ${libdir}/python3.2/ssl.* ${libdir}/python3.2/tempfile.* ${libdir}/python3.2/StringIO.* "

DESCRIPTION_python-compression="Python High Level Compression Support"
RDEPENDS_python-compression="python-core python-zlib"
FILES_python-compression="${libdir}/python3.2/gzip.* ${libdir}/python3.2/zipfile.* ${libdir}/python3.2/tarfile.* ${libdir}/python3.2/lib-dynload/bz2.so "

DESCRIPTION_python-re="Python Regular Expression APIs"
RDEPENDS_python-re="python-core"
FILES_python-re="${libdir}/python3.2/re.* ${libdir}/python3.2/sre.* ${libdir}/python3.2/sre_compile.* ${libdir}/python3.2/sre_constants* ${libdir}/python3.2/sre_parse.* "

DESCRIPTION_python-profile="Python Basic Profiling Support"
RDEPENDS_python-profile="python-core python-textutils"
FILES_python-profile="${libdir}/python3.2/profile.* ${libdir}/python3.2/pstats.* ${libdir}/python3.2/cProfile.* ${libdir}/python3.2/lib-dynload/_lsprof.so "

DESCRIPTION_python-xmlrpc="Python XMLRPC Support"
RDEPENDS_python-xmlrpc="python-core python-xml python-netserver python-lang"
FILES_python-xmlrpc="${libdir}/python3.2/xmlrpclib.* ${libdir}/python3.2/SimpleXMLRPCServer.* "

DESCRIPTION_python-terminal="Python Terminal Controlling Support"
RDEPENDS_python-terminal="python-core python-io"
FILES_python-terminal="${libdir}/python3.2/pty.* ${libdir}/python3.2/tty.* "

DESCRIPTION_python-dev="Python Development Package"
RDEPENDS_python-dev="python-core"
FILES_python-dev="${includedir} ${libdir}/libpython2.6.so ${libdir}/python3.2/config "

DESCRIPTION_python-email="Python Email Support"
RDEPENDS_python-email="python-core python-io python-re python-mime python-audio python-image python-netclient"
FILES_python-email="${libdir}/python3.2/imaplib.* ${libdir}/python3.2/email "

DESCRIPTION_python-image="Python Graphical Image Handling"
RDEPENDS_python-image="python-core"
FILES_python-image="${libdir}/python3.2/colorsys.* ${libdir}/python3.2/imghdr.* ${libdir}/python3.2/lib-dynload/imageop.so ${libdir}/python3.2/lib-dynload/rgbimg.so "

DESCRIPTION_python-tests="Python Tests"
RDEPENDS_python-tests="python-core"
FILES_python-tests="${libdir}/python3.2/test "

DESCRIPTION_python-core-dbg="Python core module debug information"
RDEPENDS_python-core-dbg="python-core"
FILES_python-core-dbg="${libdir}/python3.2/config/.debug ${libdir}/python3.2/lib-dynload/.debug ${bindir}/.debug ${libdir}/.debug "

DESCRIPTION_python-resource="Python Resource Control Interface"
RDEPENDS_python-resource="python-core"
FILES_python-resource="${libdir}/python3.2/lib-dynload/resource.so "

DESCRIPTION_python-json="Python JSON Support"
RDEPENDS_python-json="python-core python-math python-re"
FILES_python-json="${libdir}/python3.2/json "

DESCRIPTION_python-difflib="Python helpers for computing deltas between objects."
RDEPENDS_python-difflib="python-lang python-re"
FILES_python-difflib="${libdir}/python3.2/difflib.* "

DESCRIPTION_python-math="Python Math Support"
RDEPENDS_python-math="python-core"
FILES_python-math="${libdir}/python3.2/lib-dynload/cmath.so ${libdir}/python3.2/lib-dynload/math.so ${libdir}/python3.2/lib-dynload/_random.so ${libdir}/python3.2/random.* ${libdir}/python3.2/sets.* "

DESCRIPTION_python-syslog="Python Syslog Interface"
RDEPENDS_python-syslog="python-core"
FILES_python-syslog="${libdir}/python3.2/lib-dynload/syslog.so "

DESCRIPTION_python-hotshot="Python Hotshot Profiler"
RDEPENDS_python-hotshot="python-core"
FILES_python-hotshot="${libdir}/python3.2/hotshot ${libdir}/python3.2/lib-dynload/_hotshot.so "

DESCRIPTION_python-unixadmin="Python Unix Administration Support"
RDEPENDS_python-unixadmin="python-core"
FILES_python-unixadmin="${libdir}/python3.2/lib-dynload/nis.so ${libdir}/python3.2/lib-dynload/grp.so ${libdir}/python3.2/lib-dynload/pwd.so ${libdir}/python3.2/getpass.* "

DESCRIPTION_python-textutils="Python Option Parsing, Text Wrapping and Comma-Separated-Value Support"
RDEPENDS_python-textutils="python-core python-io python-re python-stringold"
FILES_python-textutils="${libdir}/python3.2/lib-dynload/_csv.so ${libdir}/python3.2/csv.* ${libdir}/python3.2/optparse.* ${libdir}/python3.2/textwrap.* "

DESCRIPTION_python-tkinter="Python Tcl/Tk Bindings"
RDEPENDS_python-tkinter="python-core"
FILES_python-tkinter="${libdir}/python3.2/lib-dynload/_tkinter.so ${libdir}/python3.2/lib-tk "

DESCRIPTION_python-gdbm="Python GNU Database Support"
RDEPENDS_python-gdbm="python-core"
FILES_python-gdbm="${libdir}/python3.2/lib-dynload/gdbm.so "

DESCRIPTION_python-elementtree="Python elementree"
RDEPENDS_python-elementtree="python-core"
FILES_python-elementtree="${libdir}/python3.2/lib-dynload/_elementtree.so "

DESCRIPTION_python-fcntl="Python's fcntl Interface"
RDEPENDS_python-fcntl="python-core"
FILES_python-fcntl="${libdir}/python3.2/lib-dynload/fcntl.so "

DESCRIPTION_python-netclient="Python Internet Protocol Clients"
RDEPENDS_python-netclient="python-core python-crypt python-datetime python-io python-lang python-logging python-mime"
FILES_python-netclient="${libdir}/python3.2/*Cookie*.* ${libdir}/python3.2/base64.* ${libdir}/python3.2/cookielib.* ${libdir}/python3.2/ftplib.* ${libdir}/python3.2/gopherlib.* ${libdir}/python3.2/hmac.* ${libdir}/python3.2/httplib.* ${libdir}/python3.2/mimetypes.* ${libdir}/python3.2/nntplib.* ${libdir}/python3.2/poplib.* ${libdir}/python3.2/smtplib.* ${libdir}/python3.2/telnetlib.* ${libdir}/python3.2/urllib.* ${libdir}/python3.2/urllib2.* ${libdir}/python3.2/urlparse.* ${libdir}/python3.2/uuid.* ${libdir}/python3.2/rfc822.* ${libdir}/python3.2/mimetools.* "

DESCRIPTION_python-pprint="Python Pretty-Print Support"
RDEPENDS_python-pprint="python-core"
FILES_python-pprint="${libdir}/python3.2/pprint.* "

DESCRIPTION_python-netserver="Python Internet Protocol Servers"
RDEPENDS_python-netserver="python-core python-netclient"
FILES_python-netserver="${libdir}/python3.2/cgi.* ${libdir}/python3.2/*HTTPServer.* ${libdir}/python3.2/SocketServer.* "

DESCRIPTION_python-compiler="Python Compiler Support"
RDEPENDS_python-compiler="python-core"
FILES_python-compiler="${libdir}/python3.2/compiler "

DESCRIPTION_python-smtpd="Python Simple Mail Transport Daemon"
RDEPENDS_python-smtpd="python-core python-netserver python-email python-mime"
FILES_python-smtpd="${bindir}/smtpd.* "

DESCRIPTION_python-html="Python HTML Processing"
RDEPENDS_python-html="python-core"
FILES_python-html="${libdir}/python3.2/formatter.* ${libdir}/python3.2/htmlentitydefs.* ${libdir}/python3.2/htmllib.* ${libdir}/python3.2/markupbase.* ${libdir}/python3.2/sgmllib.* "

DESCRIPTION_python-readline="Python Readline Support"
RDEPENDS_python-readline="python-core"
FILES_python-readline="${libdir}/python3.2/lib-dynload/readline.so ${libdir}/python3.2/rlcompleter.* "

DESCRIPTION_python-subprocess="Python Subprocess Support"
RDEPENDS_python-subprocess="python-core python-io python-re python-fcntl python-pickle"
FILES_python-subprocess="${libdir}/python3.2/subprocess.* "

DESCRIPTION_python-pydoc="Python Interactive Help Support"
RDEPENDS_python-pydoc="python-core python-lang python-stringold python-re"
FILES_python-pydoc="${bindir}/pydoc ${libdir}/python3.2/pydoc.* "

DESCRIPTION_python-logging="Python Logging Support"
RDEPENDS_python-logging="python-core python-io python-lang python-pickle python-stringold"
FILES_python-logging="${libdir}/python3.2/logging "

DESCRIPTION_python-mailbox="Python Mailbox Format Support"
RDEPENDS_python-mailbox="python-core python-mime"
FILES_python-mailbox="${libdir}/python3.2/mailbox.* "

DESCRIPTION_python-xml="Python basic XML support."
RDEPENDS_python-xml="python-core python-re"
FILES_python-xml="${libdir}/python3.2/lib-dynload/pyexpat.so ${libdir}/python3.2/xml ${libdir}/python3.2/xmllib.* "

DESCRIPTION_python-mime="Python MIME Handling APIs"
RDEPENDS_python-mime="python-core python-io"
FILES_python-mime="${libdir}/python3.2/mimetools.* ${libdir}/python3.2/uu.* ${libdir}/python3.2/quopri.* ${libdir}/python3.2/rfc822.* "

DESCRIPTION_python-sqlite3="Python Sqlite3 Database Support"
RDEPENDS_python-sqlite3="python-core python-datetime python-lang python-crypt python-io python-threading python-zlib"
FILES_python-sqlite3="${libdir}/python3.2/lib-dynload/_sqlite3.so ${libdir}/python3.2/sqlite3/dbapi2.* ${libdir}/python3.2/sqlite3/__init__.* ${libdir}/python3.2/sqlite3/dump.* "

DESCRIPTION_python-sqlite3-tests="Python Sqlite3 Database Support Tests"
RDEPENDS_python-sqlite3-tests="python-core python-sqlite3"
FILES_python-sqlite3-tests="${libdir}/python3.2/sqlite3/test "

DESCRIPTION_python-unittest="Python Unit Testing Framework"
RDEPENDS_python-unittest="python-core python-stringold python-lang"
FILES_python-unittest="${libdir}/python3.2/unittest.* "

DESCRIPTION_python-multiprocessing="Python Multiprocessing Support"
RDEPENDS_python-multiprocessing="python-core python-io python-lang"
FILES_python-multiprocessing="${libdir}/python3.2/lib-dynload/_multiprocessing.so ${libdir}/python3.2/multiprocessing "

DESCRIPTION_python-robotparser="Python robots.txt parser"
RDEPENDS_python-robotparser="python-core python-netclient"
FILES_python-robotparser="${libdir}/python3.2/robotparser.* "

DESCRIPTION_python-compile="Python Bytecode Compilation Support"
RDEPENDS_python-compile="python-core"
FILES_python-compile="${libdir}/python3.2/py_compile.* ${libdir}/python3.2/compileall.* "

DESCRIPTION_python-debugger="Python Debugger"
RDEPENDS_python-debugger="python-core python-io python-lang python-re python-stringold python-shell python-pprint"
FILES_python-debugger="${libdir}/python3.2/bdb.* ${libdir}/python3.2/pdb.* "

DESCRIPTION_python-pkgutil="Python Package Extension Utility Support"
RDEPENDS_python-pkgutil="python-core"
FILES_python-pkgutil="${libdir}/python3.2/pkgutil.* "

DESCRIPTION_python-shell="Python Shell-Like Functionality"
RDEPENDS_python-shell="python-core python-re"
FILES_python-shell="${libdir}/python3.2/cmd.* ${libdir}/python3.2/commands.* ${libdir}/python3.2/dircache.* ${libdir}/python3.2/fnmatch.* ${libdir}/python3.2/glob.* ${libdir}/python3.2/popen2.* ${libdir}/python3.2/shlex.* ${libdir}/python3.2/shutil.* "

DESCRIPTION_python-bsddb="Python Berkeley Database Bindings"
RDEPENDS_python-bsddb="python-core"
FILES_python-bsddb="${libdir}/python3.2/bsddb ${libdir}/python3.2/lib-dynload/_bsddb.so "

DESCRIPTION_python-numbers="Python Number APIs"
RDEPENDS_python-numbers="python-core python-lang python-re"
FILES_python-numbers="${libdir}/python3.2/decimal.* ${libdir}/python3.2/numbers.* "

DESCRIPTION_python-mmap="Python Memory-Mapped-File Support"
RDEPENDS_python-mmap="python-core python-io"
FILES_python-mmap="${libdir}/python3.2/lib-dynload/mmap.so "

DESCRIPTION_python-zlib="Python zlib Support."
RDEPENDS_python-zlib="python-core"
FILES_python-zlib="${libdir}/python3.2/lib-dynload/zlib.so "

DESCRIPTION_python-db="Python File-Based Database Support"
RDEPENDS_python-db="python-core"
FILES_python-db="${libdir}/python3.2/anydbm.* ${libdir}/python3.2/dumbdbm.* ${libdir}/python3.2/whichdb.* "

DESCRIPTION_python-crypt="Python Basic Cryptographic and Hashing Support"
RDEPENDS_python-crypt="python-core"
FILES_python-crypt="${libdir}/python3.2/hashlib.* ${libdir}/python3.2/md5.* ${libdir}/python3.2/sha.* ${libdir}/python3.2/lib-dynload/crypt.so ${libdir}/python3.2/lib-dynload/_hashlib.so ${libdir}/python3.2/lib-dynload/_sha256.so ${libdir}/python3.2/lib-dynload/_sha512.so "

DESCRIPTION_python-idle="Python Integrated Development Environment"
RDEPENDS_python-idle="python-core python-tkinter"
FILES_python-idle="${bindir}/idle ${libdir}/python3.2/idlelib "

DESCRIPTION_python-lang="Python Low-Level Language Support"
RDEPENDS_python-lang="python-core"
FILES_python-lang="${libdir}/python3.2/lib-dynload/_bisect.so ${libdir}/python3.2/lib-dynload/_collections.so ${libdir}/python3.2/lib-dynload/_heapq.so ${libdir}/python3.2/lib-dynload/_weakref.so ${libdir}/python3.2/lib-dynload/_functools.so ${libdir}/python3.2/lib-dynload/array.so ${libdir}/python3.2/lib-dynload/itertools.so ${libdir}/python3.2/lib-dynload/operator.so ${libdir}/python3.2/lib-dynload/parser.so ${libdir}/python3.2/atexit.* ${libdir}/python3.2/bisect.* ${libdir}/python3.2/code.* ${libdir}/python3.2/codeop.* ${libdir}/python3.2/collections.* ${libdir}/python3.2/dis.* ${libdir}/python3.2/functools.* ${libdir}/python3.2/heapq.* ${libdir}/python3.2/inspect.* ${libdir}/python3.2/keyword.* ${libdir}/python3.2/opcode.* ${libdir}/python3.2/symbol.* ${libdir}/python3.2/repr.* ${libdir}/python3.2/token.* ${libdir}/python3.2/tokenize.* ${libdir}/python3.2/traceback.* ${libdir}/python3.2/linecache.* ${libdir}/python3.2/weakref.* "

DESCRIPTION_python-audio="Python Audio Handling"
RDEPENDS_python-audio="python-core"
FILES_python-audio="${libdir}/python3.2/wave.* ${libdir}/python3.2/chunk.* ${libdir}/python3.2/sndhdr.* ${libdir}/python3.2/lib-dynload/ossaudiodev.so ${libdir}/python3.2/lib-dynload/audioop.so "

DESCRIPTION_python-modules="All Python modules"
RDEPENDS_python-modules="python-codecs python-threading python-distutils python-doctest python-stringold python-curses python-ctypes python-pickle python-datetime python-core python-io python-compression python-re python-profile python-xmlrpc python-terminal python-email python-image python-tests python-resource python-json python-difflib python-math python-syslog python-hotshot python-unixadmin python-textutils python-tkinter python-gdbm python-elementtree python-fcntl python-netclient python-pprint python-netserver python-compiler python-smtpd python-html python-readline python-subprocess python-pydoc python-logging python-mailbox python-xml python-mime python-sqlite3 python-sqlite3-tests python-unittest python-multiprocessing python-robotparser python-compile python-debugger python-pkgutil python-shell python-bsddb python-numbers python-mmap python-zlib python-db python-crypt python-idle python-lang python-audio  "
ALLOW_EMPTY_python-modules = "1"


