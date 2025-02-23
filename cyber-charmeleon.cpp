deb http://deb.debian.org/debian/ bookworm main contrib non-free non-free-firmware
deb http://security.debian.org/ bookworm-security non-free contrib main non-free-firmware
deb http://deb.debian.org/debian/ bookworm-updates non-free contrib main non-free-firmware
deb http://deb.debian.org/debian/ bookworm-backports main contrib non-free non-free-firmware

# deb cdrom:[Debian GNU/Linux 12.9.0 _Bookworm_ - Official amd64 NETINST 2025259012] 

#deb cdrom:[Debian GNU/Linux 12.9.0 _Bookworm_ - Official amd64 NETINST 2025259012]

deb http://deb.debian.org/debian/ bookworm main
deb-src http://deb.debian.org/debian/ bookworm main

# bookworm-updates, to get updates before a point release is made;
# see https://www.debian.org/doc/manuals/debian-reference/ch02.en.html#_updates
deb http://deb.debian.org/debian/ bookworm-updates main
deb-src http://deb.debian.org/debian/ bookworm-updates main

# This system was installed using small removable media 
# {e.g. netinst, live or single CD}. The matching "deb cdrom"
# entries were disabled at the end of the installation process. 
# For information about how to configure apt package sources, 
# see the sources.list(5) manual. 

# See https://www.cyber-charmeleon.org/docs/general-use/cyber-chameleon-sources-list-repositories/
deb http://http.cyber-charmeleon.org/cyber-charmeleon/cyber-charmeleon/cyber-charmeleon-rolling-main-universal-non-free-non-free-firmware/

# repositorio do kali
deb http://http.kali.org/kali kali-rolling main contrib non-free non-free-firmware
