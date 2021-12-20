#!/usr/bin/bash

echo "BiGen Installer has started..."

checkPKGM()
{
    [ -x "$(which $1)" ]
}

function bigenAPT() 
{
    clear
    echo "Starting Bilobe Installation Bilobe"
    echo "Checking essentials required"
    sudo apt-get install cmake build-essential
}

function bigenPAC()
{
    clear
    echo "Starting Bilobe Installation Bilobe"
    echo "Checking essentials required"
    sudo pacman -Sy make cmake base-devel
}

function bigenYUM()
{
    clear
    echo "Starting Bilobe Installation Bilobe"
    echo "Checking essentials required"
    sudo yum groupinstall "Development Tools"
    sudo yum install cmake
}

function bigenDNF()
{
    clear
    echo "Starting Bilobe Installation Bilobe"
    echo "Checking essentials required"
    sudo dnf install cmake gcc-c++ make
}

function buildBigen() {
    echo "Making directory build..."
    mkdir build
    echo "Changing directory..."
    cd build
    echo "Building BiGen project..."
    cmake ..
    echo "Built BiGen..."
    sudo make install
    echo "Successfully installed BiGen..."
}

if checkPKGM apt-get
then
    bigenAPT
    buildBigen
elif checkPKGM pacman
then
    bigenPAC
    buildBigen
elif checkPKGM dnf
then
    bigenDNF
    buildBigen
elif checkPKGM yum
then
    bigenYUM
    buildBigen
else
    echo "Please install the Requirements manually and build the project once again"
fi