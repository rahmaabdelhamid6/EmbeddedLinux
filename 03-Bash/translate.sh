#!/bin/bash

word=$(xclip -o)
url="https://translate.google.com/?sl=en&tl=ar&text=${word}&op=translate"
firefox "$url"
