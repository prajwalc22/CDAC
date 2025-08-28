#!/bin/bash
find "$1" -size +4k | xargs du -h | sort -hr
