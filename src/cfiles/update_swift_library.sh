SWIFT_HOME=/home/vincent/svn/libswift/ppsp

cd $SWIFT_HOME
gcc -fPIC -c *.cpp -I. &>/dev/null
gcc -shared -Wl,-soname,libswift.so.1 -o libswift.so.1.0 *.o
ln -sf libswift.so.1.0 libswift.so
ln -sf libswift.so.1.0 libswift.so.1
cd - 