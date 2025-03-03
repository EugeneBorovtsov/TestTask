@echo off
mkdir build
cd build

cmake ..

cmake --build . --config Release

cd Release

Vehicles.exe %*