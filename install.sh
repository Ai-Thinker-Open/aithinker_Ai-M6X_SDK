FILE=toolchain/bin

if [ -d "$FILE" ]; then
    echo "$FILE "
else
    git submodule init
    git submodule update
    cd toolchanin/bin
    export PATH=$PATH:$PWD
    cd ../..
fi