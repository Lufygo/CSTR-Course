#! /bin/sh

for dir in *; do tar -czvf "$dir.tar.gz" "$dir"; done
